#include "audio/load.h"
void bhv_lava_spire_init(void) {
    //o->oAnimState = o->oBehParams >> 24;
    //reset_for_checkpoint(&o->oBeatTimer, &o->oPrevSongTimer, 32, 1, 0);
    if (o->oBehParams2ndByte)
        o->oAction = 1;
}

void bhv_lava_spire_loop(void) {
    struct SequencePlayer *seqPlayer = &gSequencePlayers[0];
    //stay_on_beat(&o->oBeatTimer, &o->oPrevSongTimer);
    //if(gCheckpointLoaded) {
    //    bhv_lava_spire_init();
    //}

    switch (o->oAction) {
        case 0:
            //if (cur_obj_beat_hit_and_reset(&o->oBeatTimer)) {
            if (onScreenLayers[1] > 15) {
                o->oAction = 1;
            }
            o->oPosY = approach_f32_asymptotic(o->oPosY, o->oHomeY, 0.2f);
            /*if (o->oSubAction == 0) {
                o->header.gfx.scale[1] = approach_f32_asymptotic(o->header.gfx.scale[1], 1.2f, 0.4f);
                o->header.gfx.scale[0] = approach_f32_asymptotic(o->header.gfx.scale[0], 0.8f, 0.4f);
                o->header.gfx.scale[2] = o->header.gfx.scale[0];
                if (o->header.gfx.scale[1] > 1.1f)
                    o->oSubAction = 1;
            } else {
                o->header.gfx.scale[1] = approach_f32_asymptotic(o->header.gfx.scale[1], 1.0f, 0.25f);
                o->header.gfx.scale[0] = approach_f32_asymptotic(o->header.gfx.scale[0], 1.0f, 0.25f);
                o->header.gfx.scale[2] = o->header.gfx.scale[0];
            }*/
            load_object_collision_model();
            break;
        case 1:
            //if (cur_obj_beat_hit_and_reset(&o->oBeatTimer)) {
            if (onScreenLayers[1] > 15) {
                o->oAction = 0;
            }
            o->oPosY = approach_f32_asymptotic(o->oPosY, o->oHomeY - 2500.0f, 0.2f);
            /*if (o->oSubAction == 0) {
                o->header.gfx.scale[1] = approach_f32_asymptotic(o->header.gfx.scale[1], 0.4f, 0.4f);
                o->header.gfx.scale[0] = approach_f32_asymptotic(o->header.gfx.scale[0], 1.4f, 0.4f);
                o->header.gfx.scale[2] = o->header.gfx.scale[0];
                if (o->header.gfx.scale[1] < 0.5f)
                    o->oSubAction = 1;
            } else {
                o->header.gfx.scale[1] = approach_f32_asymptotic(o->header.gfx.scale[1], 0.6f, 0.25f);
                o->header.gfx.scale[0] = approach_f32_asymptotic(o->header.gfx.scale[0], 1.2f, 0.25f);
                o->header.gfx.scale[2] = o->header.gfx.scale[0];
            }*/
            break;
    }
    //o->oFaceAngleYaw = o->oAngleToMario;
}