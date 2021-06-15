void bhv_c3_barrier_loop(void) {

}

void bhv_c2_barrier_loop(void) {
    
}

void bhv_c1_barrier_loop(void) {
    switch (o->oBehParams2ndByte) {
        case 0:
            if (gCurrentCheckpoint > 0 && o->oF4 == 0) {
                o->oPosX = approach_f32(o->oPosX, o->oHomeX + 18500.0f, 15.0f, 15.0f);
                if (o->oPosX == o->oHomeX + 18500.0f) {
                    o->oF4 = 1;
                }
            }
            break;
        case 1:
            if (o->oTimer == 0) {
                o->header.gfx.scale[2] = 0.5f;
            }
            struct Object *obj = cur_obj_nearest_object_with_behavior(bhvBarrier);
            if (gCurrentCheckpoint > 0 && obj != NULL && obj->oF4 == 1 && o->oF4 == 0) {
                o->oPosZ = approach_f32(o->oPosZ, o->oHomeZ + 19500.0f, 20.0f, 20.0f);
                if (o->oPosZ == o->oHomeZ + 19500.0f) {
                    o->oF4 = 1;
                }
            }
            break;
    }
}


void bhv_barrier_loop(void) {
    switch (gCurrLevelNum) {
        case LEVEL_BOB:
            bhv_c1_barrier_loop();
            break;
        case LEVEL_JRB:
            bhv_c2_barrier_loop();
            break;
        case LEVEL_CCM:
            bhv_c3_barrier_loop();
            break;
    }
}