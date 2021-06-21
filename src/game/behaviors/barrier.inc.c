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
    if (gCurrLevelNum == LEVEL_CCM) {
        o->header.gfx.scale[2] = 1.5f;
    }
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

void kill_mario_if_behind(void) {
    if(o->oAngleToMario > 0x8000) {
        gMarioState->health = 0;
    }
}


void bhv_c3_barrier_loop(void) {
    struct Object *obj;
    switch (o->oBehParams2ndByte) {
        case 0:
            if (o->oTimer == 0) {
                o->header.gfx.scale[2] = 0.7f;
            }
            if (o->oTimer < 90)
                break;
            if (o->oF4 == 0) {
                o->oPosY = approach_f32(o->oPosY, o->oHomeY, 80.0f, 80.0f);
                o->oPosZ = approach_f32(o->oPosZ, o->oHomeZ - 8000.0f, 15.0f, 15.0f);
                if (o->oPosZ == o->oHomeZ - 8000.0f) {
                    o->oF4 = 1;
                }
                print_text_fmt_int(40, 60, "%x", o->oFaceAngleYaw);
                print_text_fmt_int(40, 40, "%x", o->oAngleToMario);
                kill_mario_if_behind();
            }
            break;
        case 1:
            obj = cur_obj_nearest_object_behavior_params(bhvBarrier, 0x0000FF00);
            if (obj != NULL && obj->oF4 == 1 && o->oF4 == 0) {
                o->oPosY = approach_f32(o->oPosY, o->oHomeY, 80.0f, 80.0f);
                o->oPosX = approach_f32(o->oPosX, o->oHomeX + 15900.0f, 20.0f, 20.0f);
                if (o->oPosX == o->oHomeX + 15900.0f) {
                    o->oF4 = 1;
                }
                kill_mario_if_behind();
            }
            break;
        case 2:
            if (gCurrentCheckpoint > 1 && o->oF4 == 0) {
                o->oPosY = approach_f32(o->oPosY, o->oHomeY, 80.0f, 80.0f);
                o->oPosX = approach_f32(o->oPosX, o->oHomeX + 11100.0f, 20.0f, 20.0f);
                if (o->oPosX == o->oHomeX + 11100.0f) {
                    o->oF4 = 1;
                }
                kill_mario_if_behind();
            }
            break;
        case 3:
            if (o->oTimer == 0) {
                o->header.gfx.scale[2] = 0.25f;
            }
            obj = cur_obj_nearest_object_behavior_params(bhvBarrier, 0x0002FF00);
            if (obj != NULL && obj->oF4 == 1 && o->oF4 == 0) {
                o->oPosY = approach_f32(o->oPosY, o->oHomeY, 200.0f, 200.0f);
                o->oPosZ = approach_f32(o->oPosZ, o->oHomeZ - 11475.0f, 30.0f, 30.0f);
                if (o->oPosZ == o->oHomeZ - 11475.0f) {
                    o->oF4 = 1;
                }
                kill_mario_if_behind();
            }
            break;
        case 4:
            if (o->oTimer == 0) {
                o->header.gfx.scale[2] = 0.25f;
            }
            obj = cur_obj_nearest_object_behavior_params(bhvBarrier, 0x0003FF00);
            if (obj != NULL && obj->oF4 == 1 && o->oF4 == 0) {
                o->oPosY = o->oHomeY;
                o->oPosX = approach_f32(o->oPosX, o->oHomeX + 6975.0f, 30.0f, 30.0f);
                if (o->oPosX == o->oHomeX + 6975.0f) {
                    o->oF4 = 1;
                }
                kill_mario_if_behind();
            }
            break;
        case 5:
            if (o->oTimer == 0) {
                o->header.gfx.scale[2] = 0.25f;
            }
            obj = cur_obj_nearest_object_behavior_params(bhvBarrier, 0x0004FF00);
            if (obj != NULL && obj->oF4 == 1 && o->oF4 == 0) {
                o->oPosY = o->oHomeY;
                o->oPosZ = approach_f32(o->oPosZ, o->oHomeZ + 12475.0f, 30.0f, 30.0f);
                if (o->oPosZ == o->oHomeZ + 12475.0f) {
                    o->oF4 = 1;
                }
                kill_mario_if_behind();
            }
            break;
    }
}

void bhv_c2_barrier_loop(void) {
    
}

void bhv_c1_barrier_loop(void) {
    switch (o->oBehParams2ndByte) {
        case 0:
            if (gCurrentCheckpoint > 0 && o->oF4 == 0) {
                o->oPosY = approach_f32(o->oPosY, o->oHomeY, 80.0f, 80.0f);
                o->oPosX = approach_f32(o->oPosX, o->oHomeX + 18500.0f, 15.0f, 15.0f);
                if (o->oPosX == o->oHomeX + 18500.0f) {
                    o->oF4 = 1;
                }
                kill_mario_if_behind();
            }
            break;
        case 1:
            if (o->oTimer == 0) {
                o->header.gfx.scale[2] = 0.5f;
            }
            struct Object *obj = cur_obj_nearest_object_with_behavior(bhvBarrier);
            if (gCurrentCheckpoint > 0 && obj != NULL && obj->oF4 == 1 && o->oF4 == 0) {
                o->oPosY = approach_f32(o->oPosY, o->oHomeY, 80.0f, 80.0f);
                o->oPosZ = approach_f32(o->oPosZ, o->oHomeZ + 19500.0f, 20.0f, 20.0f);
                if (o->oPosZ == o->oHomeZ + 19500.0f) {
                    o->oF4 = 1;
                }
                kill_mario_if_behind();
            }
            break;
    }
}


void bhv_barrier_loop(void) {
    if (o->oTimer == 0) {
        o->oPosY += 10000.0f;
    }
    o->oAngleToMario = (obj_angle_to_object(o, gMarioObject) - o->oFaceAngleYaw) % 0x10000;
    while(o->oAngleToMario < 0) {
        o->oAngleToMario += 0x10000;
    }
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