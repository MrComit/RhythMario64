#include "game/ingame_menu.h"
#include "game/sound_init.h"

void bhv_peach_cutscene_loop(void) {
    if((gMyCutsceneState == 0 || gMyCutsceneState == 2) && gMyCutsceneTimer > 15) {
        if(gDialogResponse != 0) {
            gMyCutsceneState++;
            gMyCutsceneTimer = 0;
        } else {
            create_dialog_box(1);
        }
    }
    if(gMyCutsceneState == 10) {
        if(gMyCutsceneTimer == 1) {
            o->oPosX = -700.0f;
            o->oPosY = 150.0f;
            o->oPosZ = -150.0f;
            o->oFaceAngleRoll = 0x4000;
            o->header.gfx.scale[0] = o->header.gfx.scale[1] = o->header.gfx.scale[2] = 2.0f;
        }
    }
    if(gMyCutsceneState == 11) {
        if(gMyCutsceneTimer > 16) {
            if(gDialogResponse != 0) {
                gMyCutsceneState++;
                gMyCutsceneTimer = 0;
            } else {
                create_dialog_box(16);
            }
        }
    }
    if(gMyCutsceneState >= 10) {
        o->oFaceAngleYaw = 0x4000;
        o->oPosX += 20.0f;
    }
}

void bhv_toad_cutscene_loop(void) {
    if(gMyCutsceneState == 1 && gMyCutsceneTimer > 15) {
        if(gDialogResponse != 0) {
            gMyCutsceneState++;
            gMyCutsceneTimer = 0;
        } else {
            create_dialog_box(2);
        }
    }
    if(gMyCutsceneState == 3) {
        o->oAnimState = 1;
        if(gMyCutsceneTimer > 15) {
            if(gDialogResponse != 0) {
                gMyCutsceneState++;
                gMyCutsceneTimer = 0;
            } else {
                create_dialog_box(3);
            }
        }
    }
    if(gMyCutsceneState == 4) {
        o->oFaceAngleYaw = 0x3C00;
        o->header.gfx.animInfo.animFrame = 0;
    }
    if(gMyCutsceneState == 13) {
        o->oFaceAngleYaw = approach_s16_symmetric(o->oFaceAngleYaw, 0x9000, 0x400);
        if(gMyCutsceneTimer > 60) {
            o->oAnimState = 0;
            if(gDialogResponse != 0) {
                gMyCutsceneState++;
                gMyCutsceneTimer = 0;
            } else {
                create_dialog_box(18);
            }
        }
    }
    if(gMyCutsceneState == 14 && gMyCutsceneTimer == 30) {
        gMyCutsceneTimer--;
        if(gPlayer1Controller->buttonPressed & A_BUTTON) {
            gMyCutsceneTimer = 31;
                sWarpDest.levelNum = LEVEL_CASTLE_GROUNDS;
                sWarpDest.areaIdx = 0x01;
                sWarpDest.nodeId = 0x0A;
                sDelayedWarpArg = 0;
                sDelayedWarpOp = WARP_OP_WARP_OBJECT;
                sDelayedWarpTimer = 60;
                sSourceWarpNodeId = 0x01;
                play_transition(WARP_TRANSITION_FADE_INTO_COLOR, 0x3C, 0x00, 0x00, 0x00);
                fadeout_level_music(480);
        }
    }
}

void bhv_booba_loop(void) {
    if(gMyCutsceneState == 4) {
        if(o->oBehParams2ndByte == 0) {
            o->oPosX = -2198.975f;
            o->oPosY = -7.5f;
            o->oPosZ = 82.285f;
        } else {
            o->oPosX = -2185.95;
            o->oPosY = 100.0f;
            o->oPosZ = -250.6995f;
        }
    }
    if(gMyCutsceneState == 5 && o->oBehParams2ndByte == 0) {
        o->oPosY = 0.0f;
    }
    o->header.gfx.scale[2] = 1.375f + sins(gMyCutsceneTimer*8000);

    if(gMyCutsceneState >= 10) {
        obj_mark_for_deletion(o);
    }
}

void bhv_bowsah_cutscene_loop(void) { 
    if(gMyCutsceneState == 4) {
        stop_background_music(sCurrentBackgroundMusicSeqId);
        cur_obj_shake_screen(SHAKE_POS_LARGE);
        if(gMyCutsceneTimer < 30 && gMyCutsceneTimer % 5 == 0) {
            play_sound(SOUND_GENERAL_BOWSER_BOMB_EXPLOSION, gGlobalSoundSource);
        }
        if(gMyCutsceneTimer == 45) {
            gMyCutsceneState++;
            gMyCutsceneTimer = 0;
        }
    }
    if(gMyCutsceneState == 5) {
        if(gMyCutsceneTimer == 0) {
            play_music(SEQ_PLAYER_LEVEL, SEQUENCE_ARGS(4, SEQ_UN_OWEN), 0);
        }
        if(gMyCutsceneTimer > 15) {
            if(gDialogResponse != 0) {
                gMyCutsceneState++;
                gMyCutsceneTimer = 0;
            } else {
                create_dialog_box(4);
            }
        }
    }
    if(gMyCutsceneState == 7) {
        if(gMyCutsceneTimer > 80) {
            gMyCutsceneState++;
            gMyCutsceneTimer = 0;
        }
    }
    if(gMyCutsceneState == 8) {
        if(gMyCutsceneTimer > 10) {
            if(gDialogResponse != 0) {
                gMyCutsceneState++;
                gMyCutsceneTimer = 0;
            } else {
                create_dialog_box(7);
            }
        }
    }
    if(gMyCutsceneState == 9) {
        if(gMyCutsceneTimer == 5)
            stop_sound(SOUND_OBJ_BOWSER_LAUGH, gGlobalSoundSource);
        if(gMyCutsceneTimer > 5) {
            if(gDialogResponse != 0) {
                gMyCutsceneState++;
                gMyCutsceneTimer = 0;
            } else {
                create_dialog_box(8);
            }
        }
    }
    if(gMyCutsceneState == 10) {
        if(gMyCutsceneTimer > 15) {
            if(gDialogResponse != 0) {
                gMyCutsceneState++;
                gMyCutsceneTimer = 0;
            } else {
                create_dialog_box(15);
            }
        }
    }
    if(gMyCutsceneState == 12) {
        if(gMyCutsceneTimer == 15)
            stop_sound(SOUND_OBJ_BOWSER_LAUGH, gGlobalSoundSource);
        if(gMyCutsceneTimer > 15) {
            if(gDialogResponse != 0) {
                gMyCutsceneState++;
                gMyCutsceneTimer = 0;
            } else {
                create_dialog_box(8);
            }
        }
    }
    if(gMyCutsceneState >= 10) {
        o->oFaceAngleYaw = 0x4000;
        o->oPosX += 20.0f;
    }
}

void bhv_goombah_cutscene_loop(void) {
    if(gMyCutsceneState == 6 && gMyCutsceneTimer > 15) {
        if(gDialogResponse != 0) {
            gMyCutsceneState++;
            gMyCutsceneTimer = 0;
        } else {
            create_dialog_box(6);
        }
    }
    if(gMyCutsceneState >= 7 && gMyCutsceneTimer > 15) {
        if(o->header.gfx.scale[1] > 0) {
            o->header.gfx.scale[1] -= 0.0625f;
        } else {
            obj_mark_for_deletion(o);
        }
    }
}

void bhv_lakitu_cutscene_loop(void) {
    if(gMyCutsceneState >= 10) {
        o->oFaceAngleYaw = 0x3000;
        o->oPosX += 17.5f*sins(o->oFaceAngleYaw);
        o->oPosZ += 17.5f*coss(o->oFaceAngleYaw);
    }
}

void bhv_whomp_cutscene_loop(void) {
    if(gMyCutsceneState >= 10) {
        o->oFaceAngleYaw = 0x5000;
        o->oPosX += 15.0f*sins(o->oFaceAngleYaw);
        o->oPosZ += 15.0f*coss(o->oFaceAngleYaw);
    }
}