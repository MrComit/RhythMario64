void spawn_orange_number_gate(u16 behParam, s16 relX, s16 relY, s16 relZ, s16 x2nd, s16 z2nd) {
    struct Object *orangeNumber, *orangeNumber2;

    if (behParam >= 10) {
        orangeNumber = spawn_object_relative(behParam % 10, relX + x2nd, relY, relZ + z2nd, o, MODEL_NUMBER_DECAL, bhvStationaryOrangeNumber);
        orangeNumber2 = spawn_object_relative(behParam / 10, relX - x2nd, relY, relZ - z2nd, o, MODEL_NUMBER_DECAL, bhvStationaryOrangeNumber);
        o->oObjF4 = orangeNumber;
        o->oObjF8 = orangeNumber2;
        orangeNumber->oFaceAngleYaw -= 0x4000;
        orangeNumber2->oFaceAngleYaw -= 0x4000;
    } else {
        orangeNumber = spawn_object_relative(behParam, relX, relY, relZ, o, MODEL_NUMBER_DECAL, bhvStationaryOrangeNumber);
        o->oObjF4 = orangeNumber;
        o->oObjF8 = NULL;
        orangeNumber->oFaceAngleYaw -= 0x4000;
    }
}
void bhv_gate_init(void) {
    o->oFC = o->oBehParams >> 24;
    spawn_orange_number_gate(o->oFC, 0, 320, 0, 0, 50);
    o->oFC--;
}

void bhv_gate_loop(void) {
    if (o->oFC < 0) {
        o->oFC = 0;
    }
    if (o->oTimer > 30) {
        if (o->oObjF4 != NULL)
            o->oObjF4->activeFlags = 0;
        if (o->oObjF8 != NULL)
            o->oObjF8->activeFlags = 0;
        spawn_orange_number_gate(o->oFC, 0, 320, 0, 0, 50);
        o->oFC--;
        o->oTimer = 0;
    }
    if (gCurrentCheckpoint >= o->oBehParams2ndByte) {
        o->oOpacity = approach_s16_symmetric(o->oOpacity, 0, 0x20);
        if (o->oOpacity < 0x20) {
            o->activeFlags = 0;
            if (o->oObjF4 != NULL)
                o->oObjF4->activeFlags = 0;
            if (o->oObjF8 != NULL)
                o->oObjF8->activeFlags = 0;
        }
    }

}




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