#include "audio/load.h"
void bhv_lava_spire_init(void) {
    //o->oAnimState = o->oBehParams >> 24;
    //reset_for_checkpoint(&o->oBeatTimer, &o->oPrevSongTimer, 32, 1, 0);
    if (o->oBehParams2ndByte)
        o->oAction = 1;
}

void bhv_lava_spire_loop(void) {
    switch (o->oAction) {
        case 0:
            if (onScreenLayers[1] > 15) {
                o->oAction = 1;
            }
            o->oPosY = approach_f32_asymptotic(o->oPosY, o->oHomeY, 0.2f);
            load_object_collision_model();
            break;
        case 1:
            if (o->oTimer < 8) {
                load_object_collision_model();
            }
            if (onScreenLayers[1] > 15) {
                o->oAction = 0;
            }
            o->oPosY = approach_f32_asymptotic(o->oPosY, o->oHomeY - 2500.0f, 0.2f);
            break;
    }
}