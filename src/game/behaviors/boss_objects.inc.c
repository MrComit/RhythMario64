#include "game/sound_init.h"
s32 cur_obj_beat_hit_and_reset_slower(s32 *timer, s32 timerDivisor) {
    if(timerDivisor == 0) {
        timerDivisor = 1;
    }
    if(*timer >= (96*2 / timerDivisor)) {
        *timer -= (96*2 / timerDivisor);
        return 1;
    } else {
        return 0;
    }
}


void bhv_boss_rock_init(void) {
    struct SequencePlayer *seqPlayer = &gSequencePlayers[0];
    s32 beatState = (((seqPlayer->globalSongTimer) % 192) / 96);
    reset_for_checkpoint(&o->oBeatTimer, &o->oPrevSongTimer, 0, 1, 0);
    o->oAnimState = o->oBehParams2ndByte;
    if (o->oBehParams2ndByte)
        o->oAction = 1;
}

void bhv_boss_rock_loop(void) {
    struct SequencePlayer *seqPlayer = &gSequencePlayers[0];
    stay_on_beat(&o->oBeatTimer, &o->oPrevSongTimer);
    if(gCheckpointLoaded) {
        bhv_boss_rock_init();
    }
    s32 speed = count_objects_with_behavior(bhvDiscoLock);
    switch (o->oAction) {
        case 0:
            if (cur_obj_beat_hit_and_reset_slower(&o->oBeatTimer, (4 - speed))) {
                o->oAction = 1;
            }
            o->oPosY = approach_f32_asymptotic(o->oPosY, o->oHomeY, (f32)(5 - speed)/10.0f);
            break;
        case 1:
            if (cur_obj_beat_hit_and_reset_slower(&o->oBeatTimer, (4 - speed))) {
                o->oAction = 0;
            }
            o->oPosY = approach_f32_asymptotic(o->oPosY, o->oHomeY - 500.0f, (f32)(5 - speed)/10.0f);
            break;
    }
}


Vec3f sDiscoBulletPos[3] = {
{2767.0f, 1500.0f, 4842.0f},
{0.0f, 1500.0f, 4842.0f},
{-2767.0f, 1500.0f, 4842.0f},
};


void bhv_disco_switch_loop(void) {
    switch (o->oAction) {
        case 0:
            cur_obj_set_model(MODEL_PURPLE_SWITCH);
            cur_obj_scale(1.5f);
            if (gMarioObject->platform == o && !(gMarioStates[0].action & MARIO_UNKNOWN_13)) {
                if (lateral_dist_between_objects(o, gMarioObject) < 127.5) {
                    o->oAction = 1;
                }
            }
            break;
        case 1:
            cur_obj_scale_over_time(2, 3, 1.5f, 0.2f);
            if (o->oTimer == 3) {
                struct Object *obj = spawn_object(o, MODEL_BULLET_BILL, bhvDiscoBullet);
                vec3f_copy(&obj->oPosX, sDiscoBulletPos[o->oBehParams2ndByte]);
                obj->oMoveAngleYaw = 0x8000;

                cur_obj_play_sound_2(SOUND_GENERAL2_PURPLE_SWITCH);
                o->oAction = 2;
                cur_obj_shake_screen(SHAKE_POS_SMALL);
#if ENABLE_RUMBLE
                queue_rumble_data(5, 80);
#endif
            }
            break;
    }
}





void beh_explode_object(struct Object *obj, s16 noDamage) {
    struct Object *explosion;
    if (obj->oTimer < 5)
        cur_obj_scale(1.0 + (f32) obj->oTimer / 5.0);
    else {
        explosion = spawn_object(obj, MODEL_EXPLOSION, bhvExplosion);
        explosion->oGraphYOffset += 100.0f;
        if (noDamage)
            explosion->oIntangibleTimer = -1;
        else 
            explosion->oIntangibleTimer = 0;
        obj->activeFlags = 0;
    }
}


void bhv_disco_lock_loop(void) {
    struct Object *obj = cur_obj_nearest_object_with_behavior(bhvDiscoBullet);
    struct Object *obj2 = cur_obj_nearest_object_with_behavior(bhvDiscoBall);
    if (obj2 == NULL) {
        o->activeFlags = 0;
        return;
    }
    if (obj == NULL) {
        return;
    }
    if (dist_between_objects(o, obj) < 400.0f) {
        obj->activeFlags = 0;
        obj = cur_obj_nearest_object_with_behavior(bhvBowser);
        //obj->o104 = 0;
        obj2->oF4++;
        //obj->oAction = 4 + obj2->oF4;
        beh_explode_object(o, 1);
    }
}


void bhv_disco_loop(void) {
    struct Object *obj = cur_obj_nearest_object_with_behavior(bhvBowser);
    if (obj == NULL) {
        o->activeFlags = 0;
        return;
    }
    switch (o->oAction) {
        case 0:
            o->oFaceAngleYaw += 0x200;
            if (o->oF4 >= 3) {
                o->oAction = 2;
                //o->oPosZ = obj->oPosZ;
                obj->oAction = 50;
                fadeout_music(5);
            }
            break;
        case 1:
            o->oPosY = approach_f32(o->oPosY, 0.0f, 40.0f, 40.0f);
            /*if (o->oPosY == 0.0f) {
                beh_explode_object(o, 1);
                obj->oBehParams2ndByte = 1;
                obj->oKleptoStartPosZ = 500.0f;
                cur_obj_play_sound_2(SOUND_OBJ_ENEMY_DEATH_LOW);
                cur_obj_shake_screen(0);
            }*/
            break;
        case 2:
            if (o->oTimer > 60) {
                o->oAction = 1;
            }
            break;
    }
    if (o->oAction) {
        gMarioState->pos[0] = gMarioState->pos[1] = 0;
        gMarioState->pos[2] = 677.0;
        gMarioState->faceAngle[1] = 0x8000;
        set_mario_npc_dialog(1);
        gCamera->cutscene = CUTSCENE_SWAG_BOWSAH_DEATH;
        vec3f_set(gLakituState.goalFocus, o->oPosX, o->oPosY, o->oPosZ);
        if(gCutsceneTimer == 30) {
            struct Object *BOOBA = spawn_object_rel_with_rot(obj, MODEL_BOOBA, bhvBooba, 0, 500, 0, 0xC000, 0, 0);
            BOOBA->header.gfx.scale[0] = BOOBA->header.gfx.scale[1] = 2.0f;
        }
        if(gCutsceneTimer == 90) {
            warp_special(-1);
        }
    }
}