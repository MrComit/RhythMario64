#include <PR/ultratypes.h>

#include "sm64.h"
#include "actors/common1.h"
#include "gfx_dimensions.h"
#include "game_init.h"
#include "level_update.h"
#include "camera.h"
#include "print.h"
#include "ingame_menu.h"
#include "hud.h"
#include "segment2.h"
#include "area.h"
#include "save_file.h"
#include "print.h"
#include "engine/surface_load.h"
#include "object_list_processor.h"
#include "engine/behavior_script.h"
#include "engine/math_util.h"
#include "object_helpers.h"

/* @file hud.c
 * This file implements HUD rendering and power meter animations.
 * That includes stars, lives, coins, camera status, power meter, timer
 * cannon reticle, and the unused keys.
 **/

// ------------- FPS COUNTER ---------------
// To use it, call print_fps(x,y); every frame.
#define FRAMETIME_COUNT 30

OSTime frameTimes[FRAMETIME_COUNT];
u8 curFrameTimeIndex = 0;

#include "PR/os_convert.h"

// Call once per frame
f32 calculate_and_update_fps()
{
    OSTime newTime = osGetTime();
    OSTime oldTime = frameTimes[curFrameTimeIndex];
    frameTimes[curFrameTimeIndex] = newTime;

    curFrameTimeIndex++;
    if (curFrameTimeIndex >= FRAMETIME_COUNT)
        curFrameTimeIndex = 0;


    return ((f32)FRAMETIME_COUNT * 1000000.0f) / (s32)OS_CYCLES_TO_USEC(newTime - oldTime);
}

void print_fps(s32 x, s32 y)
{
    f32 fps = calculate_and_update_fps();
    char text[10];

    sprintf(text, "%2.2f", fps);

    print_text(x, y, text);
}

// ------------ END OF FPS COUNER -----------------

struct PowerMeterHUD {
    s8 animation;
    s16 x;
    s16 y;
    f32 unused;
};

struct UnusedHUDStruct {
    u32 unused1;
    u16 unused2;
    u16 unused3;
};

struct CameraHUD {
    s16 status;
};

// Stores health segmented value defined by numHealthWedges
// When the HUD is rendered this value is 8, full health.
static s16 sPowerMeterStoredHealth;

static struct PowerMeterHUD sPowerMeterHUD = {
    POWER_METER_HIDDEN,
    140,
    166,
    1.0,
};

// Power Meter timer that keeps counting when it's visible.
// Gets reset when the health is filled and stops counting
// when the power meter is hidden.
s32 sPowerMeterVisibleTimer = 0;

static struct UnusedHUDStruct sUnusedHUDValues = { 0x00, 0x0A, 0x00 };

static struct CameraHUD sCameraHUD = { CAM_STATUS_NONE };

/**
 * Renders a rgba16 16x16 glyph texture from a table list.
 */
void render_hud_tex_lut(s32 x, s32 y, u8 *texture) {
    gDPPipeSync(gDisplayListHead++);
    gDPSetTextureImage(gDisplayListHead++, G_IM_FMT_RGBA, G_IM_SIZ_16b, 1, texture);
    gSPDisplayList(gDisplayListHead++, &dl_hud_img_load_tex_block);
    gSPTextureRectangle(gDisplayListHead++, x << 2, y << 2, (x + 15) << 2, (y + 15) << 2,
                        G_TX_RENDERTILE, 0, 0, 4 << 10, 1 << 10);
}

/**
 * Renders a rgba16 8x8 glyph texture from a table list.
 */
void render_hud_small_tex_lut(s32 x, s32 y, u8 *texture) {
    gDPSetTile(gDisplayListHead++, G_IM_FMT_RGBA, G_IM_SIZ_16b, 0, 0, G_TX_LOADTILE, 0,
                G_TX_WRAP | G_TX_NOMIRROR, G_TX_NOMASK, G_TX_NOLOD, G_TX_WRAP | G_TX_NOMIRROR, G_TX_NOMASK, G_TX_NOLOD);
    gDPTileSync(gDisplayListHead++);
    gDPSetTile(gDisplayListHead++, G_IM_FMT_RGBA, G_IM_SIZ_16b, 2, 0, G_TX_RENDERTILE, 0,
                G_TX_CLAMP, 3, G_TX_NOLOD, G_TX_CLAMP, 3, G_TX_NOLOD);
    gDPSetTileSize(gDisplayListHead++, G_TX_RENDERTILE, 0, 0, (8 - 1) << G_TEXTURE_IMAGE_FRAC, (8 - 1) << G_TEXTURE_IMAGE_FRAC);
    gDPPipeSync(gDisplayListHead++);
    gDPSetTextureImage(gDisplayListHead++, G_IM_FMT_RGBA, G_IM_SIZ_16b, 1, texture);
    gDPLoadSync(gDisplayListHead++);
    gDPLoadBlock(gDisplayListHead++, G_TX_LOADTILE, 0, 0, 8 * 8 - 1, CALC_DXT(8, G_IM_SIZ_16b_BYTES));
    gSPTextureRectangle(gDisplayListHead++, x << 2, y << 2, (x + 7) << 2, (y + 7) << 2, G_TX_RENDERTILE,
                        0, 0, 4 << 10, 1 << 10);
}

/**
 * Renders power meter health segment texture using a table list.
 */
void render_power_meter_health_segment(s16 numHealthWedges) {
    u8 *(*healthLUT)[];

    healthLUT = segmented_to_virtual(&power_meter_health_segments_lut);

    gDPPipeSync(gDisplayListHead++);
    gDPSetTextureImage(gDisplayListHead++, G_IM_FMT_RGBA, G_IM_SIZ_16b, 1,
                       (*healthLUT)[numHealthWedges - 1]);
    gDPLoadSync(gDisplayListHead++);
    gDPLoadBlock(gDisplayListHead++, G_TX_LOADTILE, 0, 0, 32 * 32 - 1, CALC_DXT(32, G_IM_SIZ_16b_BYTES));
    gSP1Triangle(gDisplayListHead++, 0, 1, 2, 0);
    gSP1Triangle(gDisplayListHead++, 0, 2, 3, 0);
}

/**
 * Renders power meter display lists.
 * That includes the "POWER" base and the colored health segment textures.
 */
void render_dl_power_meter(s16 numHealthWedges) {
    Mtx *mtx;

    mtx = alloc_display_list(sizeof(Mtx));

    if (mtx == NULL) {
        return;
    }

    guTranslate(mtx, (f32) sPowerMeterHUD.x, (f32) sPowerMeterHUD.y, 0);

    gSPMatrix(gDisplayListHead++, VIRTUAL_TO_PHYSICAL(mtx++),
              G_MTX_MODELVIEW | G_MTX_MUL | G_MTX_PUSH);
    gSPDisplayList(gDisplayListHead++, &dl_power_meter_base);

    if (numHealthWedges != 0) {
        gSPDisplayList(gDisplayListHead++, &dl_power_meter_health_segments_begin);
        render_power_meter_health_segment(numHealthWedges);
        gSPDisplayList(gDisplayListHead++, &dl_power_meter_health_segments_end);
    }

    gSPPopMatrix(gDisplayListHead++, G_MTX_MODELVIEW);
}

/**
 * Power meter animation called when there's less than 8 health segments
 * Checks its timer to later change into deemphasizing mode.
 */
void animate_power_meter_emphasized(void) {
    s16 hudDisplayFlags;
    hudDisplayFlags = gHudDisplay.flags;

    if (!(hudDisplayFlags & HUD_DISPLAY_FLAG_EMPHASIZE_POWER)) {
        if (sPowerMeterVisibleTimer == 45.0) {
            sPowerMeterHUD.animation = POWER_METER_DEEMPHASIZING;
        }
    } else {
        sPowerMeterVisibleTimer = 0;
    }
}

/**
 * Power meter animation called after emphasized mode.
 * Moves power meter y pos speed until it's at 200 to be visible.
 */
static void animate_power_meter_deemphasizing(void) {
    s16 speed = 5;

    if (sPowerMeterHUD.y >= 181) {
        speed = 3;
    }

    if (sPowerMeterHUD.y >= 191) {
        speed = 2;
    }

    if (sPowerMeterHUD.y >= 196) {
        speed = 1;
    }

    sPowerMeterHUD.y += speed;

    if (sPowerMeterHUD.y >= 201) {
        sPowerMeterHUD.y = 200;
        sPowerMeterHUD.animation = POWER_METER_VISIBLE;
    }
}

/**
 * Power meter animation called when there's 8 health segments.
 * Moves power meter y pos quickly until it's at 301 to be hidden.
 */
static void animate_power_meter_hiding(void) {
    sPowerMeterHUD.y += 20;
    if (sPowerMeterHUD.y >= 301) {
        sPowerMeterHUD.animation = POWER_METER_HIDDEN;
        sPowerMeterVisibleTimer = 0;
    }
}

/**
 * Handles power meter actions depending of the health segments values.
 */
void handle_power_meter_actions(s16 numHealthWedges) {
    // Show power meter if health is not full, less than 8
    if (numHealthWedges < 8 && sPowerMeterStoredHealth == 8 && sPowerMeterHUD.animation == POWER_METER_HIDDEN) {
        sPowerMeterHUD.animation = POWER_METER_EMPHASIZED;
        sPowerMeterHUD.y = 166;
    }

    // Show power meter if health is full, has 8
    if (numHealthWedges == 8 && sPowerMeterStoredHealth == 7) {
        sPowerMeterVisibleTimer = 0;
    }

    // After health is full, hide power meter
    if (numHealthWedges == 8 && sPowerMeterVisibleTimer > 45.0) {
        sPowerMeterHUD.animation = POWER_METER_HIDING;
    }

    // Update to match health value
    sPowerMeterStoredHealth = numHealthWedges;

    // If Mario is swimming, keep power meter visible
    if (gPlayerCameraState->action & ACT_FLAG_SWIMMING) {
        if (sPowerMeterHUD.animation == POWER_METER_HIDDEN
            || sPowerMeterHUD.animation == POWER_METER_EMPHASIZED) {
            sPowerMeterHUD.animation = POWER_METER_DEEMPHASIZING;
            sPowerMeterHUD.y = 166;
        }
        sPowerMeterVisibleTimer = 0;
    }
}

/**
 * Renders the power meter that shows when Mario is in underwater
 * or has taken damage and has less than 8 health segments.
 * And calls a power meter animation function depending of the value defined.
 */
void render_hud_power_meter(void) {
    s16 shownHealthWedges = gHudDisplay.wedges;

    if (sPowerMeterHUD.animation != POWER_METER_HIDING) {
        handle_power_meter_actions(shownHealthWedges);
    }

    if (sPowerMeterHUD.animation == POWER_METER_HIDDEN) {
        return;
    }

    switch (sPowerMeterHUD.animation) {
        case POWER_METER_EMPHASIZED:
            animate_power_meter_emphasized();
            break;
        case POWER_METER_DEEMPHASIZING:
            animate_power_meter_deemphasizing();
            break;
        case POWER_METER_HIDING:
            animate_power_meter_hiding();
            break;
        default:
            break;
    }

    render_dl_power_meter(shownHealthWedges);

    sPowerMeterVisibleTimer += 1;
}

#ifdef VERSION_JP
#define HUD_TOP_Y 210
#else
#define HUD_TOP_Y 209
#endif

/**
 * Renders the amount of lives Mario has.
 */
void render_hud_mario_lives(void) {
    print_text(GFX_DIMENSIONS_RECT_FROM_LEFT_EDGE(22), HUD_TOP_Y, ","); // 'Mario Head' glyph
    print_text(GFX_DIMENSIONS_RECT_FROM_LEFT_EDGE(38), HUD_TOP_Y, "*"); // 'X' glyph
    print_text_fmt_int(GFX_DIMENSIONS_RECT_FROM_LEFT_EDGE(54), HUD_TOP_Y, "%d", gHudDisplay.lives);
}

/**
 * Renders the amount of coins collected.
 */
void render_hud_coins(void) {
    print_text(168, HUD_TOP_Y, "+"); // 'Coin' glyph
    print_text(184, HUD_TOP_Y, "*"); // 'X' glyph
    print_text_fmt_int(198, HUD_TOP_Y, "%d", gHudDisplay.coins);
}

#ifdef VERSION_JP
#define HUD_STARS_X 73
#else
#define HUD_STARS_X 78
#endif

/**
 * Renders the amount of stars collected.
 * Disables "X" glyph when Mario has 100 stars or more.
 */
void render_hud_stars(void) {
    s8 showX = 0;

    if (gHudFlash == 1 && gGlobalTimer & 0x08) {
        return;
    }

    if (gHudDisplay.stars < 100) {
        showX = 1;
    }

    print_text(GFX_DIMENSIONS_RECT_FROM_RIGHT_EDGE(HUD_STARS_X), HUD_TOP_Y, "-"); // 'Star' glyph
    if (showX == 1) {
        print_text(GFX_DIMENSIONS_RECT_FROM_RIGHT_EDGE(HUD_STARS_X) + 16, HUD_TOP_Y, "*"); // 'X' glyph
    }
    print_text_fmt_int((showX * 14) + GFX_DIMENSIONS_RECT_FROM_RIGHT_EDGE(HUD_STARS_X - 16),
                       HUD_TOP_Y, "%d", gHudDisplay.stars);
}

/**
 * Unused function that renders the amount of keys collected.
 * Leftover function from the beta version of the game.
 */
void render_hud_keys(void) {
    s16 i;

    for (i = 0; i < gHudDisplay.keys; i++) {
        print_text((i * 16) + 220, 142, "/"); // unused glyph - beta key
    }
}

/**
 * Renders the timer when Mario start sliding in PSS.
 */
void render_hud_timer(void) {
    u8 *(*hudLUT)[58];
    u16 timerValFrames;
    u16 timerMins;
    u16 timerSecs;
    u16 timerFracSecs;

    hudLUT = segmented_to_virtual(&main_hud_lut);
    timerValFrames = gHudDisplay.timer;
#ifdef VERSION_EU
    switch (eu_get_language()) {
        case LANGUAGE_ENGLISH:
            print_text(GFX_DIMENSIONS_RECT_FROM_RIGHT_EDGE(150), 185, "TIME");
            break;
        case LANGUAGE_FRENCH:
            print_text(GFX_DIMENSIONS_RECT_FROM_RIGHT_EDGE(155), 185, "TEMPS");
            break;
        case LANGUAGE_GERMAN:
            print_text(GFX_DIMENSIONS_RECT_FROM_RIGHT_EDGE(150), 185, "ZEIT");
            break;
    }
#endif
    timerMins = timerValFrames / (30 * 60);
    timerSecs = (timerValFrames - (timerMins * 1800)) / 30;

    timerFracSecs = ((timerValFrames - (timerMins * 1800) - (timerSecs * 30)) & 0xFFFF) / 3;
#ifndef VERSION_EU
    print_text(GFX_DIMENSIONS_RECT_FROM_RIGHT_EDGE(150), 185, "TIME");
#endif
    print_text_fmt_int(GFX_DIMENSIONS_RECT_FROM_RIGHT_EDGE(91), 185, "%0d", timerMins);
    print_text_fmt_int(GFX_DIMENSIONS_RECT_FROM_RIGHT_EDGE(71), 185, "%02d", timerSecs);
    print_text_fmt_int(GFX_DIMENSIONS_RECT_FROM_RIGHT_EDGE(37), 185, "%d", timerFracSecs);
    gSPDisplayList(gDisplayListHead++, dl_hud_img_begin);
    render_hud_tex_lut(GFX_DIMENSIONS_RECT_FROM_RIGHT_EDGE(81), 32, (*hudLUT)[GLYPH_APOSTROPHE]);
    render_hud_tex_lut(GFX_DIMENSIONS_RECT_FROM_RIGHT_EDGE(46), 32, (*hudLUT)[GLYPH_DOUBLE_QUOTE]);
    gSPDisplayList(gDisplayListHead++, dl_hud_img_end);
}

/**
 * Sets HUD status camera value depending of the actions
 * defined in update_camera_status.
 */
void set_hud_camera_status(s16 status) {
    sCameraHUD.status = status;
}

/**
 * Renders camera HUD glyphs using a table list, depending of
 * the camera status called, a defined glyph is rendered.
 */
void render_hud_camera_status(void) {
    u8 *(*cameraLUT)[6];
    s32 x;
    s32 y;

    cameraLUT = segmented_to_virtual(&main_hud_camera_lut);
    x = GFX_DIMENSIONS_RECT_FROM_RIGHT_EDGE(54);
    y = 205;

    if (sCameraHUD.status == CAM_STATUS_NONE) {
        return;
    }

    gSPDisplayList(gDisplayListHead++, dl_hud_img_begin);
    render_hud_tex_lut(x, y, (*cameraLUT)[GLYPH_CAM_CAMERA]);

    switch (sCameraHUD.status & CAM_STATUS_MODE_GROUP) {
        case CAM_STATUS_MARIO:
            render_hud_tex_lut(x + 16, y, (*cameraLUT)[GLYPH_CAM_MARIO_HEAD]);
            break;
        case CAM_STATUS_LAKITU:
            render_hud_tex_lut(x + 16, y, (*cameraLUT)[GLYPH_CAM_LAKITU_HEAD]);
            break;
        case CAM_STATUS_FIXED:
            render_hud_tex_lut(x + 16, y, (*cameraLUT)[GLYPH_CAM_FIXED]);
            break;
    }

    switch (sCameraHUD.status & CAM_STATUS_C_MODE_GROUP) {
        case CAM_STATUS_C_DOWN:
            render_hud_small_tex_lut(x + 4, y + 16, (*cameraLUT)[GLYPH_CAM_ARROW_DOWN]);
            break;
        case CAM_STATUS_C_UP:
            render_hud_small_tex_lut(x + 4, y - 8, (*cameraLUT)[GLYPH_CAM_ARROW_UP]);
            break;
    }

    gSPDisplayList(gDisplayListHead++, dl_hud_img_end);
}

/**
 * Render HUD strings using hudDisplayFlags with it's render functions,
 * excluding the cannon reticle which detects a camera preset for it.
 */

Vtx vis_bar_Plane_mesh_vtx_cull[8] = {
	{{{-310, -8, 0},0, {-16, -16},{0x0, 0x0, 0x0, 0x0}}},
	{{{-310, -8, 0},0, {-16, -16},{0x0, 0x0, 0x0, 0x0}}},
	{{{-310, 8, 0},0, {-16, -16},{0x0, 0x0, 0x0, 0x0}}},
	{{{-310, 8, 0},0, {-16, -16},{0x0, 0x0, 0x0, 0x0}}},
	{{{10, -8, 0},0, {-16, -16},{0x0, 0x0, 0x0, 0x0}}},
	{{{10, -8, 0},0, {-16, -16},{0x0, 0x0, 0x0, 0x0}}},
	{{{10, 8, 0},0, {-16, -16},{0x0, 0x0, 0x0, 0x0}}},
	{{{10, 8, 0},0, {-16, -16},{0x0, 0x0, 0x0, 0x0}}},
};

Vtx vis_bar_Plane_mesh_vtx_0[8] = {
	{{{10, 8, 0},0, {-16, 1008},{0x0, 0x0, 0x7F, 0xFF}}},
	{{{-310, 8, 0},0, {-16, 1008},{0x0, 0x0, 0x7F, 0xFF}}},
	{{{-310, 6, 0},0, {-16, 1008},{0x0, 0x0, 0x7F, 0xFF}}},
	{{{8, 6, 0},0, {-16, 1008},{0x0, 0x0, 0x7F, 0xFF}}},
	{{{10, -8, 0},0, {-16, 1008},{0x0, 0x0, 0x7F, 0xFF}}},
	{{{8, -6, 0},0, {-16, 1008},{0x0, 0x0, 0x7F, 0xFF}}},
	{{{-310, -8, 0},0, {-16, 1008},{0x0, 0x0, 0x7F, 0xFF}}},
	{{{-310, -6, 0},0, {-16, 1008},{0x0, 0x0, 0x7F, 0xFF}}},
};

Gfx vis_bar_Plane_mesh_tri_0[] = {
	gsSPVertex(vis_bar_Plane_mesh_vtx_0 + 0, 8, 0),
	gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
	gsSP2Triangles(3, 4, 0, 0, 3, 5, 4, 0),
	gsSP2Triangles(6, 4, 5, 0, 6, 5, 7, 0),
	gsSPEndDisplayList(),
};

Vtx vis_bar_Plane_mesh_vtx_1[4] = {
	{{{8, -6, 0},0, {-16, 1008},{0x0, 0x0, 0x7F, 0xFF}}},
	{{{8, 6, 0},0, {-16, 1008},{0x0, 0x0, 0x7F, 0xFF}}},
	{{{-310, 6, 0},0, {-16, 1008},{0x0, 0x0, 0x7F, 0xFF}}},
	{{{-310, -6, 0},0, {-16, 1008},{0x0, 0x0, 0x7F, 0xFF}}},
};

Gfx vis_bar_Plane_mesh_tri_1[] = {
	gsSPVertex(vis_bar_Plane_mesh_vtx_1 + 0, 4, 0),
	gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
	gsSPEndDisplayList(),
};

Gfx mat_vis_bar_black_layer1[] = {
	gsDPPipeSync(),
	gsDPSetCombineLERP(0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 1),
	gsDPSetRenderMode(G_RM_ZB_XLU_SURF, G_RM_ZB_XLU_SURF2),
	gsSPTexture(65535, 65535, 0, 0, 1),
	gsSPEndDisplayList(),
};

Gfx mat_revert_vis_bar_black_layer1[] = {
	gsDPPipeSync(),
	gsDPSetRenderMode(G_RM_AA_ZB_OPA_SURF, G_RM_AA_ZB_OPA_SURF2),
	gsSPEndDisplayList(),
};

Gfx mat_vis_bar_color[] = {
	gsDPPipeSync(),
	gsDPSetCombineLERP(0, 0, 0, ENVIRONMENT, 0, 0, 0, 1, 0, 0, 0, ENVIRONMENT, 0, 0, 0, 1),
	gsSPTexture(65535, 65535, 0, 0, 1),
	gsSPEndDisplayList(),
};

Gfx vis_bar_mesh[] = {
	gsSPClearGeometryMode(G_LIGHTING),
	gsSPVertex(vis_bar_Plane_mesh_vtx_cull + 0, 8, 0),
	gsSPSetGeometryMode(G_LIGHTING),
	gsSPCullDisplayList(0, 7),
	gsSPDisplayList(mat_vis_bar_black_layer1),
	gsSPDisplayList(vis_bar_Plane_mesh_tri_0),
	gsSPDisplayList(mat_revert_vis_bar_black_layer1),
	gsSPDisplayList(mat_vis_bar_color),
	gsSPDisplayList(vis_bar_Plane_mesh_tri_1),
	gsDPPipeSync(),
	gsSPSetGeometryMode(G_LIGHTING),
	gsSPClearGeometryMode(G_TEXTURE_GEN),
	gsDPSetCombineLERP(0, 0, 0, SHADE, 0, 0, 0, ENVIRONMENT, 0, 0, 0, SHADE, 0, 0, 0, ENVIRONMENT),
	gsSPTexture(65535, 65535, 0, 0, 0),
	gsSPEndDisplayList(),
};



void render_audiovisual_bars(void) {
    u8 i, r, g, b;
    for(i = 0; i < 4; i++) {
        create_dl_translation_matrix(MENU_MTX_PUSH, (2.0f * onScreenLayers[i]) - 5.0f, 10.0f + (20.0f * i), 0);
        switch(i) {
            case 0:
                r = 0;
                g = 255;
                b = 0;
                break;
            case 1:
                r = 0;
                g = 0;
                b = 255;
                break;
            case 2:
                r = 255;
                g = 0;
                b = 0;
                break;
            case 3:
                r = 255;
                g = 255;
                b = 0;
                break;

        }
        gDPSetEnvColor(gDisplayListHead++, r, g, b, 255);
        gSPDisplayList(gDisplayListHead++, &vis_bar_mesh);
        gSPPopMatrix(gDisplayListHead++, G_MTX_MODELVIEW);
    }
}

Vtx water_tri_Plane_mesh_vtx_0[4] = {
	{{{-4, -4, 0},0, {-16, 1008},{0x0, 0x0, 0x7F, 0xFF}}},
	{{{324, -4, 0},0, {1008, 1008},{0x0, 0x0, 0x7F, 0xFF}}},
	{{{324, 244, 0},0, {1008, -16},{0x0, 0x0, 0x7F, 0xFF}}},
	{{{-4, 244, 0},0, {-16, -16},{0x0, 0x0, 0x7F, 0xFF}}},
};

Gfx water_tri_Plane_mesh_tri_0[] = {
	gsSPVertex(water_tri_Plane_mesh_vtx_0 + 0, 4, 0),
	gsSP1Triangle(0, 1, 2, 0),
	gsSP1Triangle(0, 2, 3, 0),
	gsSPEndDisplayList(),
};

Gfx mat_water_tri_blue_layer1[] = {
	gsDPPipeSync(),
	gsDPSetCombineLERP(0, 0, 0, ENVIRONMENT, 0, 0, 0, ENVIRONMENT, 0, 0, 0, ENVIRONMENT, 0, 0, 0, ENVIRONMENT),
	gsDPSetRenderMode(G_RM_ZB_XLU_SURF, G_RM_ZB_XLU_SURF2),
	gsSPTexture(65535, 65535, 0, 0, 1),
	gsSPEndDisplayList(),
};

Gfx mat_revert_water_tri_blue_layer1[] = {
	gsDPPipeSync(),
	gsDPSetRenderMode(G_RM_AA_ZB_OPA_SURF, G_RM_AA_ZB_OPA_SURF2),
	gsSPEndDisplayList(),
};

Gfx water_tri_mesh[] = {
	gsSPDisplayList(mat_water_tri_blue_layer1),
	gsSPDisplayList(water_tri_Plane_mesh_tri_0),
	gsSPDisplayList(mat_revert_water_tri_blue_layer1),
	gsDPPipeSync(),
	gsSPSetGeometryMode(G_LIGHTING),
	gsSPClearGeometryMode(G_TEXTURE_GEN),
	gsDPSetCombineLERP(0, 0, 0, SHADE, 0, 0, 0, ENVIRONMENT, 0, 0, 0, SHADE, 0, 0, 0, ENVIRONMENT),
	gsSPTexture(65535, 65535, 0, 0, 0),
	gsSPEndDisplayList(),
};

void render_water_tri(void) {
    //s32 awesome = (s32)(30.0f*sins(gGlobalTimer*0x100));
    create_dl_ortho_matrix();
    gDPSetEnvColor(gDisplayListHead++, 63, 192, 254, 63);
    gSPDisplayList(gDisplayListHead++, &water_tri_mesh);
    gSPPopMatrix(gDisplayListHead++, G_MTX_MODELVIEW);
}

Vec3f reticlePos;

/* tan_u16:
ADDIU SP, SP, 0xFFE8
SW RA, 0x14 (SP)
ANDI A0, A0, 0xFFFF
ORI AT, R0, 0x8000
SLTU T0, A0, AT
JAL cos_u16
SW T0, 0x10 (SP)
MTC1 R0, F4
LUI AT, 0x3F80
C.EQ.S F4, F0
MTC1 AT, F5
BC1T @@return_nan
MUL.S F4, F0, F0
SUB.S F4, F5, F4
SQRT.S F4, F4
DIV.S F0, F4, F0
LW T0, 0x10 (SP)
BNE T0, R0, @@return
NOP
NEG.S F0, F0
@@return:
LW RA, 0x14 (SP)
JR RA
ADDIU SP, SP, 0x18
@@return_nan:
LUI AT, 0x7F80
ORI AT, AT, 0x1
B @@return
MTC1 AT, F0 */

#define tans(x) (sins(x)/coss(x))


s32 convert_3d_to_2d(f32 x, f32 y, f32 z, s32 *x_2d, s32 *y_2d) {
    f32 xOff, yOff, zOff, cx, cz, idkf, tan, tan2;
    s32 idk, idk2, fovThing, yaw, yawAbs, pitch, pitchAbs;

    /*ADDIU SP, SP, 0xFFE0
    SW RA, 0x1C (SP)

    @@HALF_SCREEN_WIDTH equ float( 0x280 )
    @@HALF_SCREEN_HEIGHT equ float( 0x1E0 )

    LI T0, g_camera_state
    L.S F4, cam_x (T0)
    L.S F5, cam_y (T0)
    L.S F6, cam_z (T0)
    
    SUB.S F4, F12, F4
    SUB.S F5, F13, F5
    SUB.S F6, F14, F6*/
    xOff = x - gCamera->pos[0];
    yOff = y - gCamera->pos[1];
    zOff = z - gCamera->pos[2];

    /*MOV.S F14, F4
    MOV.S F12, F6

    S.S F5, 0x10 (SP)
    MUL.S F4, F12, F12
    MUL.S F5, F14, F14
    ADD.S F4, F4, F5
    SQRT.S F4, F4*/
    cx = POW2(x);
    cz = POW2(z);
    idkf = sqrtf(cx + cz);
    
    /*JAL atan2s
    S.S F4, 0x14 (SP)
    SW V0, 0x18 (SP)*/
    idk = atan2s(zOff, xOff);

    /*LI AT, 0x42B60B61
    MTC1 AT, F5
    L.S F4, g_camera_fov
    MUL.S F4, F4, F5
    CVT.W.S F4, F4
    MFC1 A0, F4
    JAL tan_u16
    NOP
    LI AT, @@HALF_SCREEN_HEIGHT
    MTC1 AT, F4
    LH V0, 0x1A (SP)
    DIV.S F4, F4, F0
    S.S F4, 0x18 (SP)*/
    fovThing = (s32)(sFOVState.fov*91.0222244263f);
    tan = tans(fovThing);
    tan = 480.0f / tan;

    /*LI T0, g_camera_state
    LH T1, cam_yaw (T0)
    SUBU T1, T1, V0

    SLL T1, T1, 0x10
    SRA A0, T1, 0x10
    
    ABS T1, A0*/
    yaw = gCamera->yaw - (s16)(idk);
    yaw <<= 0x10;
    yaw >>= 0x10;
    yawAbs = absi(yaw);

    /*SLTI AT, T1, 0x4000
    BEQ AT, R0, @@behind_camera
    NOP*/
    if(yawAbs < 0x4000) {
        //behind camera
        /*ORI V0, R0, 0x0
        LW RA, 0x1C (SP)
        JR RA
        ADDIU SP, SP, 0x20*/
        return 0;
    }
    /*L.S F4, 0x18 (SP)
    LI AT, @@HALF_SCREEN_WIDTH
    MTC1 AT, F5
    MUL.S F4, F4, F0
    ADD.S F4, F4, F5*/
    tan2 = tans(yaw);
    tan2 *= tan;
    tan2 += 640.0f;

    /*L.S F12, 0x14 (SP)
    S.S F4, 0x14 (SP)
    JAL atan2s
    L.S F14, 0x10 (SP)*/
    idk2 = atan2s(idkf, yOff);

    /*LI T0, g_camera_state
    LH T1, cam_pitch (T0)
    SUBU T1, T1, V0

    SLL T1, T1, 0x10
    SRA A0, T1, 0x10

    ABS T1, A0*/
    pitch = gLakituState.oldPitch - (s16)(idk2);
    pitch <<= 0x10;
    pitch >>= 0x10;
    pitchAbs = absi(pitch);
    /*SLTI AT, T1, 0x4000
    BEQ AT, R0, @@behind_camera
    NOP*/
    if(pitchAbs < 0x4000) {
        //behind camera
        /*ORI V0, R0, 0x0
        LW RA, 0x1C (SP)
        JR RA
        ADDIU SP, SP, 0x20*/
        return 0;
    }
    /*JAL tan_u16
    NOP

    L.S F4, 0x18 (SP)
    LI AT, @@HALF_SCREEN_WIDTH
    MTC1 AT, F5
    MUL.S F4, F4, F0
    ADD.S F4, F4, F5
    L.S F0, 0x14 (SP)
    ORI V0, R0, 0x1

    LW RA, 0x1C (SP)
    JR RA
    ADDIU SP, SP, 0x20*/
    *y_2d = (s32)((tan*tans(pitch)) + 480.0f);
    *x_2d = (s32)(idkf);
    return 1;
}

Gfx target_target_ci4_aligner[] = {gsSPEndDisplayList()};
u8 target_target_ci4[] = {
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x11, 0x22, 
	0x32, 0x13, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x02, 0x42, 0x23, 0x11, 
	0x32, 0x21, 0x22, 0x20, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x25, 0x12, 0x12, 0x32, 
	0x22, 0x22, 0x22, 0x21, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x62, 0x32, 0x32, 0x10, 0x00, 
	0x00, 0x02, 0x21, 0x23, 0x62, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x01, 0x32, 0x21, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x22, 0x21, 0x20, 0x00, 0x00, 
	0x00, 0x00, 0x22, 0x12, 0x20, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x01, 0x22, 0x22, 0x00, 0x00, 
	0x00, 0x00, 0x32, 0x26, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x12, 0x22, 0x00, 0x00, 
	0x00, 0x03, 0x63, 0x20, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x02, 0x32, 0x60, 0x00, 
	0x00, 0x12, 0x32, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x22, 0x26, 0x00, 
	0x00, 0x22, 0x20, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x02, 0x61, 0x00, 
	0x00, 0x32, 0x20, 0x00, 0x00, 0x00, 0x00, 0x21, 
	0x21, 0x00, 0x00, 0x00, 0x00, 0x02, 0x22, 0x00, 
	0x02, 0x32, 0x20, 0x00, 0x00, 0x00, 0x21, 0x32, 
	0x23, 0x21, 0x00, 0x00, 0x00, 0x01, 0x27, 0x20, 
	0x01, 0x21, 0x00, 0x00, 0x00, 0x00, 0x32, 0x62, 
	0x22, 0x32, 0x00, 0x00, 0x00, 0x00, 0x22, 0x10, 
	0x02, 0x23, 0x00, 0x00, 0x00, 0x02, 0x22, 0x12, 
	0x23, 0x21, 0x60, 0x00, 0x00, 0x00, 0x24, 0x10, 
	0x02, 0x32, 0x00, 0x00, 0x00, 0x05, 0x64, 0x11, 
	0x23, 0x22, 0x10, 0x00, 0x00, 0x00, 0x22, 0x20, 
	0x02, 0x12, 0x00, 0x00, 0x00, 0x02, 0x32, 0x22, 
	0x23, 0x31, 0x10, 0x00, 0x00, 0x00, 0x22, 0x20, 
	0x02, 0x21, 0x00, 0x00, 0x00, 0x02, 0x22, 0x12, 
	0x22, 0x22, 0x40, 0x00, 0x00, 0x00, 0x12, 0x20, 
	0x02, 0x63, 0x00, 0x00, 0x00, 0x00, 0x23, 0x21, 
	0x21, 0x65, 0x00, 0x00, 0x00, 0x00, 0x22, 0x20, 
	0x03, 0x25, 0x20, 0x00, 0x00, 0x00, 0x12, 0x21, 
	0x21, 0x33, 0x00, 0x00, 0x00, 0x02, 0x23, 0x20, 
	0x00, 0x26, 0x30, 0x00, 0x00, 0x00, 0x00, 0x22, 
	0x22, 0x00, 0x00, 0x00, 0x00, 0x02, 0x22, 0x00, 
	0x00, 0x22, 0x30, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x12, 0x00, 
	0x00, 0x23, 0x22, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x62, 0x12, 0x00, 
	0x00, 0x02, 0x22, 0x30, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x02, 0x22, 0x20, 0x00, 
	0x00, 0x00, 0x12, 0x23, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x12, 0x62, 0x00, 0x00, 
	0x00, 0x00, 0x23, 0x26, 0x30, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x03, 0x22, 0x22, 0x00, 0x00, 
	0x00, 0x00, 0x03, 0x16, 0x14, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x21, 0x32, 0x20, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x12, 0x32, 0x32, 0x40, 0x00, 
	0x00, 0x01, 0x22, 0x22, 0x26, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x22, 0x12, 0x11, 0x62, 
	0x22, 0x22, 0x22, 0x32, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x05, 0x23, 0x22, 0x62, 
	0x23, 0x22, 0x32, 0x20, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x31, 0x11, 
	0x22, 0x33, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	
};

Gfx target_target_ci4_pal_rgba16_aligner[] = {gsSPEndDisplayList()};
u8 target_target_ci4_pal_rgba16[] = {
	0x00, 0x00, 0xb0, 0x01, 0xa8, 0x01, 0xb0, 0x43, 
	0xb8, 0x85, 0xb8, 0x43, 0xa0, 0x01, 0x98, 0x01, 
	
};

Vtx target_rect_mesh_vtx_0[4] = {
	{{{-16, -16, 0},0, {-16, 1008},{0x0, 0x0, 0x7F, 0xFF}}},
	{{{16, -16, 0},0, {1008, 1008},{0x0, 0x0, 0x7F, 0xFF}}},
	{{{16, 16, 0},0, {1008, -16},{0x0, 0x0, 0x7F, 0xFF}}},
	{{{-16, 16, 0},0, {-16, -16},{0x0, 0x0, 0x7F, 0xFF}}},
};

Gfx target_rect_mesh_tri_0[] = {
	gsSPVertex(target_rect_mesh_vtx_0 + 0, 4, 0),
	gsSP1Triangle(0, 1, 2, 0),
	gsSP1Triangle(0, 2, 3, 0),
	gsSPEndDisplayList(),
};

Gfx mat_target_target_layer1[] = {
	gsDPPipeSync(),
	gsDPSetCombineLERP(0, 0, 0, TEXEL0, TEXEL0, 0, ENVIRONMENT, 0, 0, 0, 0, TEXEL0, TEXEL0, 0, ENVIRONMENT, 0),
	gsSPClearGeometryMode(G_CULL_BACK),
	gsDPSetRenderMode(G_RM_AA_ZB_TEX_EDGE, G_RM_AA_ZB_TEX_EDGE2),
	gsSPTexture(65535, 65535, 0, 0, 1),
	gsDPSetTextureLUT(G_TT_RGBA16),
	gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_16b, 1, target_target_ci4_pal_rgba16),
	gsDPTileSync(),
	gsDPSetTile(0, 0, 0, 256, 7, 0, G_TX_WRAP | G_TX_NOMIRROR, 0, 0, G_TX_WRAP | G_TX_NOMIRROR, 0, 0),
	gsDPLoadSync(),
	gsDPLoadTLUTCmd(7, 7),
	gsDPPipeSync(),
	gsDPTileSync(),
	gsDPSetTextureImage(G_IM_FMT_CI, G_IM_SIZ_16b, 1, target_target_ci4),
	gsDPSetTile(G_IM_FMT_CI, G_IM_SIZ_16b, 0, 0, 7, 0, G_TX_CLAMP | G_TX_NOMIRROR, 5, 0, G_TX_CLAMP | G_TX_NOMIRROR, 5, 0),
	gsDPLoadSync(),
	gsDPLoadBlock(7, 0, 0, 255, 1024),
	gsDPPipeSync(),
	gsDPSetTile(G_IM_FMT_CI, G_IM_SIZ_4b, 2, 0, 0, 0, G_TX_CLAMP | G_TX_NOMIRROR, 5, 0, G_TX_CLAMP | G_TX_NOMIRROR, 5, 0),
	gsDPSetTileSize(0, 0, 0, 124, 124),
	gsSPEndDisplayList(),
};

Gfx mat_revert_target_target_layer1[] = {
	gsDPPipeSync(),
	gsSPSetGeometryMode(G_CULL_BACK),
	gsDPSetRenderMode(G_RM_AA_ZB_OPA_SURF, G_RM_AA_ZB_OPA_SURF2),
	gsDPSetTextureLUT(G_TT_NONE),
	gsSPEndDisplayList(),
};

Gfx target_rect_mesh[] = {
	gsSPDisplayList(mat_target_target_layer1),
	gsSPDisplayList(target_rect_mesh_tri_0),
	gsSPDisplayList(mat_revert_target_target_layer1),
	gsDPPipeSync(),
	gsSPSetGeometryMode(G_LIGHTING),
	gsSPClearGeometryMode(G_TEXTURE_GEN),
	gsDPSetCombineLERP(0, 0, 0, SHADE, 0, 0, 0, ENVIRONMENT, 0, 0, 0, SHADE, 0, 0, 0, ENVIRONMENT),
	gsSPTexture(65535, 65535, 0, 0, 0),
	gsSPEndDisplayList(),
};

s32 gRenderTarget, gTargetX, gTargetY;

void render_target(void) {
    create_dl_translation_matrix(G_MTX_PUSH, (f32)gTargetX, (f32)gTargetY, 0.0f);
    gDPSetEnvColor(gDisplayListHead++, 63, 192, 254, 63);
    gSPDisplayList(gDisplayListHead++, &target_rect_mesh);
    gSPPopMatrix(gDisplayListHead++, G_MTX_MODELVIEW);
}

void render_hud(void) {
    s16 hudDisplayFlags;
#ifdef VERSION_EU
    Mtx *mtx;
#endif
    s32 x, y;

    hudDisplayFlags = gHudDisplay.flags;

    if (hudDisplayFlags == HUD_DISPLAY_NONE) {
        sPowerMeterHUD.animation = POWER_METER_HIDDEN;
        sPowerMeterStoredHealth = 8;
        sPowerMeterVisibleTimer = 0;
    } else {
#ifdef VERSION_EU
        // basically create_dl_ortho_matrix but guOrtho screen width is different

        mtx = alloc_display_list(sizeof(*mtx));
        if (mtx == NULL) {
            return;
        }
        create_dl_identity_matrix();
        guOrtho(mtx, -16.0f, SCREEN_WIDTH + 16, 0, SCREEN_HEIGHT, -10.0f, 10.0f, 1.0f);
        gSPPerspNormalize(gDisplayListHead++, 0xFFFF);
        gSPMatrix(gDisplayListHead++, VIRTUAL_TO_PHYSICAL(mtx),
                G_MTX_PROJECTION | G_MTX_MUL | G_MTX_NOPUSH);
#else
        create_dl_ortho_matrix();
#endif

        if (gCurrentArea != NULL && gCurrentArea->camera->mode == CAMERA_MODE_INSIDE_CANNON) {
            render_hud_cannon_reticle();
        }
    #ifndef DISABLE_LIVES
        if (hudDisplayFlags & HUD_DISPLAY_FLAG_LIVES) {
            render_hud_mario_lives();
        }
    #endif
        if (hudDisplayFlags & HUD_DISPLAY_FLAG_COIN_COUNT) {
            render_hud_coins();
        }

        if (hudDisplayFlags & HUD_DISPLAY_FLAG_STAR_COUNT) {
            render_hud_stars();
        }

        if (hudDisplayFlags & HUD_DISPLAY_FLAG_KEYS) {
            render_hud_keys();
        }

        if (hudDisplayFlags & HUD_DISPLAY_FLAG_CAMERA_AND_POWER) {
            render_hud_power_meter();
            render_hud_camera_status();
        }

        if (hudDisplayFlags & HUD_DISPLAY_FLAG_TIMER) {
            render_hud_timer();
        }

        if (gSurfacePoolError & NOT_ENOUGH_ROOM_FOR_SURFACES)
        {
            print_text(10, 40, "SURFACE POOL FULL");
        }
        if (gSurfacePoolError & NOT_ENOUGH_ROOM_FOR_NODES)
        {
            print_text(10, 60, "SURFACE NODE POOL FULL");
        }

        if(gCurrCourseNum == 3) {
            render_water_tri();
        }
        render_audiovisual_bars();

        if(gRenderTarget == 1) {
            render_target();
        }

        // if(convert_3d_to_2d(0.0f, 0.0f, 0.0f, &x, &y)) {
        //     print_text(x, y, "S");
        // }
        // print_text_fmt_int(40, 40, "%d", x);
        // print_text_fmt_int(40, 20, "%d", y);
    }
}
