// bullet_bill.inc.c
#include "audio/synthesis.h"

// bullet bill smoke
void bhv_white_puff_smoke_init(void) {
    cur_obj_scale(random_float() * 2 + 2.0);
}

void bhv_bullet_bill_init(void) {
    o->oBulletBillInitialMoveYaw = o->oMoveAngleYaw;
}

void bullet_bill_act_0(void) {
    cur_obj_become_tangible();
    o->oForwardVel = 0.0f;
    o->oMoveAngleYaw = o->oBulletBillInitialMoveYaw;
    o->oFaceAnglePitch = 0;
    o->oFaceAngleRoll = 0;
    o->oMoveFlags = 0;
    cur_obj_set_pos_to_home();
    o->oAction = 2;
}

void bullet_bill_act_1(void) {
    s16 sp1E = abs_angle_diff(o->oAngleToMario, o->oMoveAngleYaw);
    if (sp1E < 0x2000 && 400.0f < o->oDistanceToMario && o->oDistanceToMario < 1500.0f)
        o->oAction = 2;
}

void bullet_bill_act_2(void) {
    //if (o->oTimer > 70) {
    //    o->activeFlags = 0;
    cur_obj_update_floor_and_walls();
    //}
    spawn_object(o, MODEL_SMOKE, bhvWhitePuffSmoke);
    o->oForwardVel = 60.0f;
    //if (o->oDistanceToMario > 300.0f)
    //    cur_obj_rotate_yaw_toward(o->oAngleToMario, 0x100);
    //if (o->oTimer == 50) {
    //    cur_obj_play_sound_2(SOUND_OBJ_POUNDING_CANNON);
    //    cur_obj_shake_screen(SHAKE_POS_SMALL);
    //}
    if (o->oTimer > 90 || o->oMoveFlags & OBJ_MOVE_HIT_WALL) {
        o->activeFlags = 0;
        //o->oAction = 3;
        //spawn_mist_particles();
    }
}

void bullet_bill_act_3(void) {
    o->oAction = 0;
}

void bullet_bill_act_4(void) {
    if (o->oTimer == 0) {
        o->oForwardVel = -30.0f;
        cur_obj_become_intangible();
    }
    o->oFaceAnglePitch += 0x1000;
    o->oFaceAngleRoll += 0x1000;
    o->oPosY += 20.0f;
    if (o->oTimer > 90)
        o->oAction = 0;
}

void (*sBulletBillActions[])(void) = { bullet_bill_act_0, bullet_bill_act_1, bullet_bill_act_2,
                                       bullet_bill_act_3, bullet_bill_act_4 };

void bhv_bullet_bill_loop(void) {
    cur_obj_call_action_function(sBulletBillActions);
    if (cur_obj_check_interacted())
        o->oAction = 4;
    if(o->oTimer < 20 && !(cur_obj_has_behavior(bhvDiscoBullet)))
        o->oPosY = approach_f32(o->oPosY, gMarioState->pos[1] + 80.0f, 30.0f, 30.0f);
}

void bhv_bullet_bill_launcher_init(void) {
    u8 i;
    u8 bparam1 = o->oBehParams >> 24;
        // for(i = 0; i < 7; i++) {
        //     if(gLaunchers[i] == 0) {
        //         gLaunchers[i] = o;
        //         i = 7;
        //     }
        // }
        // o->oBehParams2ndByte = count_objects_with_behavior(bhvLauncher) - 1;
    o->oBehParams2ndByte = gBulletLauncherIndex[bparam1];
    gBulletLauncherIndex[bparam1]++;
    if(gBulletLauncherIndex[bparam1] >= count_objects_with_behavior_and_bparams(bhvLauncher, 0xFF000000, o->oBehParams & 0xFF000000)) {
        gBulletLauncherIndex[bparam1] = 0;
    }
}

void bhv_bullet_bill_launcher_rotate_loop(void) {
    if (o->oDistanceToMario > 8000.0f) {
        return;
    }

    o->oMoveAngleYaw = obj_angle_to_object(o, gMarioObject);
    if(onScreenLayers[channelMap[0][3]] == 17) {
        o->oF4++;
    }
    if (o->oF4 >= 3) {
        spawn_object(o, MODEL_BULLET_BILL, bhvBulletBill);
        o->oF4 = 0;
    }
}

void bhv_bullet_bill_launcher_loop(void) {
    u8 bparam1 = o->oBehParams >> 24;;
    if (o->oDistanceToMario > 8000.0f) {
        return;
    }

    if(gBulletLauncherIndex[bparam1] >= count_objects_with_behavior_and_bparams(bhvLauncher, 0xFF000000, o->oBehParams & 0xFF000000)) {
        gBulletLauncherIndex[bparam1] = 0;
    }
    if(gBulletLauncherIndex[bparam1] == o->oBehParams2ndByte) {
        if(o->oAction == 0) {
            spawn_object(o, MODEL_BULLET_BILL, bhvBulletBill);
            o->oAction = 1;
        }
    } else {
        o->oAction = 0;
    }
}