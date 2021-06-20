#ifndef HUD_H
#define HUD_H

#include <PR/ultratypes.h>
#include <PR/gbi.h>

enum PowerMeterAnimation {
    POWER_METER_HIDDEN,
    POWER_METER_EMPHASIZED,
    POWER_METER_DEEMPHASIZING,
    POWER_METER_HIDING,
    POWER_METER_VISIBLE
};

enum CameraHUDLut {
    GLYPH_CAM_CAMERA,
    GLYPH_CAM_MARIO_HEAD,
    GLYPH_CAM_LAKITU_HEAD,
    GLYPH_CAM_FIXED,
    GLYPH_CAM_ARROW_UP,
    GLYPH_CAM_ARROW_DOWN
};

void set_hud_camera_status(s16 status);
void render_hud(void);

extern Vec3f reticlePos;

extern s32 gRenderTarget, gTargetX, gTargetY;

extern struct HudNote sHudNotePool[];
extern s32 sHudNotePoolCount;
extern struct HudNote *sCurrentHudNote;

extern u16 sCurrentNote1, sCurrentNote2, sCurrentNote3, sCurrentNote4;

extern s16 sC1Channel1Notes[];
extern s16 sC1Channel2Notes[];
extern s16 sC1Channel3Notes[];

#endif // HUD_H
