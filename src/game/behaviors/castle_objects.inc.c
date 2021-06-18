#include "audio/load.h"
#include "audio/synthesis.h"
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
    o->oAnimState = o->oBehParams2ndByte;
    if (o->oBehParams2ndByte)
        o->oAction = 1;
}

void bhv_castle_rock_loop(void) {
    switch (o->oAction) {
        case 0:
            if (onScreenLayers[0] > 15) {
                o->oAction = 1;
            }
            o->oPosY = approach_f32_asymptotic(o->oPosY, o->oHomeY, 0.2f);
            break;
        case 1:
            if (onScreenLayers[0] > 15) {
                o->oAction = 0;
            }
            o->oPosY = approach_f32_asymptotic(o->oPosY, o->oHomeY - 200.0f, 0.2f);
            break;
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
    if (o->oDistanceToMario > 5000.0f)
        return;

    if (gCurrentCheckpoint <= 1)
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
    if (o->oDistanceToMario > 10000.0f) {
        return;
    }
    if (((o->oBehParams >> 8) & 0xFF) == 1) {
        bhv_sawblade_nogroup_loop();
        return;
    }
    if (bparam1 < 2 && gCurrentCheckpoint > 1)
        return;
    if (bparam1 >= 2 && gCurrentCheckpoint <= 1)
        return;

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
    if (o->oBehParams2ndByte)
        o->oAction = 1;
}

void bhv_lava_spire_loop(void) {
    switch (o->oAction) {
        case 0:
            if (onScreenLayers[0] > 15) {
                o->oAction = 1;
            }
            o->oPosY = approach_f32_asymptotic(o->oPosY, o->oHomeY, 0.2f);
            load_object_collision_model();
            break;
        case 1:
            if (o->oTimer < 8) {
                load_object_collision_model();
            }
            if (onScreenLayers[0] > 15) {
                o->oAction = 0;
            }
            o->oPosY = approach_f32_asymptotic(o->oPosY, o->oHomeY - 2500.0f, 0.2f);
            break;
    }
}