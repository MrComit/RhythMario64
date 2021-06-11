#include "audio/load.h"
void bhv_bounce_hill_init(void) {
    o->oAnimState = o->oBehParams >> 24;
    reset_for_checkpoint(&o->oBeatTimer, &o->oPrevSongTimer, 32, 1, 0);
    if (o->oBehParams2ndByte)
        o->oAction = 1;
}

void bhv_bounce_hill_loop(void) {
    struct SequencePlayer *seqPlayer = &gSequencePlayers[0];
    stay_on_beat(&o->oBeatTimer, &o->oPrevSongTimer);
    if(gCheckpointLoaded) {
        bhv_bounce_hill_init();
    }

    switch (o->oAction) {
        case 0:
            if (cur_obj_beat_hit_and_reset(&o->oBeatTimer)) {
                o->oAction = 1;
            }
            o->header.gfx.scale[1] = approach_f32(o->header.gfx.scale[1], 1.0f, 0.05f, 0.05f);
            break;
        case 1:
            if (cur_obj_beat_hit_and_reset(&o->oBeatTimer)) {
                o->oAction = 0;
            }
            o->header.gfx.scale[1] = approach_f32(o->header.gfx.scale[1], 0.6f, 0.05f, 0.05f);
            break;
    }
}





void bhv_beat_block_init(void) {
    switch(o->oBehParams2ndByte) {
        case 0:
            o->oBeatBlockTimer = 0;
            o->oAnimState = 1;
            break;
        case 1:
            o->oBeatBlockTimer = 8;
            o->oAnimState = 0;
    }
}

void bhv_beat_block_update(void) {
    if(gCheckpointLoaded == 1) {
        bhv_beat_block_init();
    }
    if(gBeatHit == 2 || gBeatHit == 4) {
        o->oBeatBlockTimer++;
        if(o->oBeatBlockTimer > 4 && o->oBeatBlockTimer < 8) {
            play_sound(SOUND_MENU_CLICK_FILE_SELECT, gGlobalSoundSource);
        } else if (o->oBeatBlockTimer == 8) {
            play_sound(SOUND_GENERAL2_PURPLE_SWITCH, gGlobalSoundSource);
        }
        o->oOpacity = 0;
    }
    if(o->oBeatBlockTimer > 4 && o->oBeatBlockTimer < 8) {
        o->oOpacity += 5;
    }
    o->oBeatBlockTimer %= 16;
    if(o->oBeatBlockTimer < 8) {
        o->oAnimState = o->oBehParams2ndByte + 1;
        load_object_collision_model();
    } else {
        o->oAnimState = 0;
    }
}