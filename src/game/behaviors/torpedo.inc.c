#include "game/hud.h"

void bhv_torpedo_update(void) {
    o->oForwardVel = 100.0f;
    o->oWallHitboxRadius = 105.0f;
    cur_obj_compute_vel_xz();
    o->oPosX += o->oVelX;
    o->oPosZ += o->oVelZ;

    if(lateral_dist_between_objects(o, gMarioObject) > 1500.0f) {
        o->oPosX = gMarioObject->oPosX;
        o->oPosY = gMarioObject->oPosY + 75.0f;
        gTorpedoTargetX = gMarioObject->oPosX;
        gTorpedoTargetY = gMarioObject->oPosY;
        gTorpedoTargetZ = gMarioObject->oPosZ;
    }
    gTargetX = gMarioScreenX;
    gTargetY = gMarioScreenY;
    gRenderTarget = 30;

    if(cur_obj_resolve_wall_collisions() || lateral_dist_between_objects(o, gMarioObject) <= 101.0f || o->oTimer > 50) {
        explode(0);
        gRenderTarget = 0;
    }
    spawn_object_relative(0, 0, 0, 200, o, MODEL_SMOKE, bhvWhitePuffSmoke);
}

void bhv_torpedo_spawner_init(void) {
    reset_for_checkpoint(&o->oBeatTimer, &o->oPrevSongTimer, 4, 0, 0);
}

void bhv_torpedo_spawner_update(void) {
    stay_on_beat(&o->oBeatTimer, &o->oPrevSongTimer);
    if(cur_obj_beat_hit_and_reset(&o->oBeatTimer, 1) && gMarioState->pos[2] < -5404.5f && gMarioState->pos[1] < 875.0f) {
        o->oShotDelay++;
        if(o->oShotDelay > 0) {
            struct Object *torpedo = spawn_object(gMarioObject, MODEL_TORPEDO, bhvTorpedo);
            torpedo->oMoveAngleYaw = 0x8000;
            torpedo->oPosZ += 4200.0f;
            o->oShotDelay = -1;
        }
    }
    if(gCheckpointLoaded) {
        bhv_torpedo_spawner_init();
    }
}
