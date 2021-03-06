#include "audio/load.h"
#include "audio/synthesis.h"
s32 cur_obj_beat_hit_and_reset_slower(s32 *timer, s32 timerDivisor);
struct ObjectHitbox sSawbladeHitbox = {
    /* interactType:      */ INTERACT_DAMAGE,
    /* downOffset:        */ 0,
    /* damageOrCoinValue: */ 1,
    /* health:            */ 0,
    /* numLootCoins:      */ 0,
    /* radius:            */ 100,
    /* height:            */ 50,
    /* hurtboxRadius:     */ 100,
    /* hurtboxHeight:     */ 50,
};

void bhv_castle_rock_init(void) {
    struct SequencePlayer *seqPlayer = &gSequencePlayers[0];
    s32 beatState = (((seqPlayer->globalSongTimer) % 192) / 96);
    reset_for_checkpoint(&o->oBeatTimer, &o->oPrevSongTimer, 0, 1, 0);
    o->oAnimState = o->oBehParams2ndByte;
    if (o->oBehParams2ndByte)
        o->oAction = 1;
}

void bhv_castle_rock_loop(void) {
    struct SequencePlayer *seqPlayer = &gSequencePlayers[0];
    stay_on_beat(&o->oBeatTimer, &o->oPrevSongTimer);
    if(gCheckpointLoaded) {
        bhv_castle_rock_init();
    }
    if (gMarioState->pos[0] < -5000.0f)
        return;
    switch (o->oAction) {
        case 0:
            if (cur_obj_beat_hit_and_reset_slower(&o->oBeatTimer, 2)) {
                o->oAction = 1;
            }
            o->oPosY = approach_f32_asymptotic(o->oPosY, o->oHomeY, 0.2f);
            break;
        case 1:
            if (cur_obj_beat_hit_and_reset_slower(&o->oBeatTimer, 2)) {
                o->oAction = 0;
            }
            o->oPosY = approach_f32_asymptotic(o->oPosY, o->oHomeY - 200.0f, 0.2f);
            break;
    }
}



void bhv_rotating_sawblade_spawner_loop(void) {
    s32 h = 0;
    if (count_objects_with_behavior(bhvDiscoLock) < 2) {
        h = 1;
    }
    o->oMoveAngleYaw = o->oAngleToMario;
    if (onScreenLayers[h] > 15) {
        if(o->oAction == 0) {
            struct Object *obj = spawn_object(o, MODEL_SAWBLADE, bhvSawblade);
            obj->oPosY = gMarioState->pos[1] + 100.0f;
            o->oAction = 1;
        }
    } else {
        o->oAction = 0;
    }
}



void bhv_sawblade_spawner_init(void) {
    u8 i;
    u8 bparam1 = o->oBehParams >> 24;
    if (((o->oBehParams >> 8) & 0xFF) == 1) {
        return;
    }
    o->oBehParams2ndByte = gBulletLauncherIndex[bparam1];
    gBulletLauncherIndex[bparam1]++;
    if(gBulletLauncherIndex[bparam1] >= count_objects_with_behavior_and_bparams(bhvSawbladeSpawner, 0xFF000000, o->oBehParams & 0xFF000000)) {
        gBulletLauncherIndex[bparam1] = 0;
    }
}

void bhv_sawblade_nogroup_loop(void) {
//    if (o->oDistanceToMario > 5000.0f)
//        return;

    if (gCurrentCheckpoint <= 1 && gCurrCreditsEntry == 0)
        return;

    if (onScreenLayers[2] > 15) {
        if(o->oAction == 0) {
            spawn_object(o, MODEL_SAWBLADE, bhvSawblade);
            o->oAction = 1;
        }
    } else {
        o->oAction = 0;
    }
}

void bhv_sawblade_spawner_loop(void) {
    u8 bparam1 = o->oBehParams >> 24;;
    if (o->oDistanceToMario > 30000.0f || (gCurrCreditsEntry == 0 && o->oDistanceToMario > 10000.0f)) {
        return;
    }
    if (bparam1 == 0xFF) {
        bhv_sawblade_nogroup_loop();
        return;
    }
    if ((bparam1 < 2 && gCurrentCheckpoint > 1) || gCurrCreditsEntry != 0)
        return;
    if (bparam1 >= 2 && gCurrentCheckpoint <= 1 && gCurrCreditsEntry == 0) {
        return;
    }

    if(gBulletLauncherIndex[bparam1] >= count_objects_with_behavior_and_bparams(bhvSawbladeSpawner, 0xFF000000, o->oBehParams & 0xFF000000)) {
        gBulletLauncherIndex[bparam1] = 0;
    }
    if(gBulletLauncherIndex[bparam1] == o->oBehParams2ndByte) {
        if(o->oAction == 0) {
            spawn_object(o, MODEL_SAWBLADE, bhvSawblade);
            o->oAction = 1;
        }
    } else {
        o->oAction = 0;
    }
}


void bhv_sawblade_init(void) {
    o->oForwardVel = 60.0f; 
    obj_set_hitbox(o, &sSawbladeHitbox);
}

void bhv_sawblade_loop(void) {
    o->oFaceAngleYaw += 0x1555;
    cur_obj_move_using_fvel_and_gravity();
    if (o->oInteractStatus || o->oTimer > 120) {
        spawn_mist_particles();
        o->activeFlags = 0;
    }
}



void bhv_lava_spire_init(void) {
    //o->oAnimState = o->oBehParams >> 24;
    //reset_for_checkpoint(&o->oBeatTimer, &o->oPrevSongTimer, 32, 1, 0);
    struct SequencePlayer *seqPlayer = &gSequencePlayers[0];
    s32 beatState = (((seqPlayer->globalSongTimer) % 192) / 96);
    reset_for_checkpoint(&o->oBeatTimer, &o->oPrevSongTimer, 0, 1, 0);
    if (o->oBehParams2ndByte)
        o->oAction = 1;
}

void bhv_lava_spire_loop(void) {
    struct SequencePlayer *seqPlayer = &gSequencePlayers[0];
    stay_on_beat(&o->oBeatTimer, &o->oPrevSongTimer);
    if(gCheckpointLoaded) {
        bhv_lava_spire_init();
    }
    if (gMarioState->pos[0] > -5000.0f)
        return;
    switch (o->oAction) {
        case 0:
            if (cur_obj_beat_hit_and_reset_slower(&o->oBeatTimer, 2)) {
                o->oAction = 1;
            }
            o->oPosY = approach_f32_asymptotic(o->oPosY, o->oHomeY, 0.2f);
            load_object_collision_model();
            break;
        case 1:
            if (o->oTimer < 8) {
                load_object_collision_model();
            }
            if (cur_obj_beat_hit_and_reset_slower(&o->oBeatTimer, 2)) {
                o->oAction = 0;
            }
            o->oPosY = approach_f32_asymptotic(o->oPosY, o->oHomeY - 2500.0f, 0.2f);
            break;
    }
}