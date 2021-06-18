#include "game/hud.h"

void explode(s16 dontDeactivate) {
    struct Object *explosion;
    explosion = spawn_object(o, MODEL_EXPLOSION, bhvExplosion);
    explosion->oGraphYOffset += 100.0f;
    if(dontDeactivate == 0)
        o->activeFlags = ACTIVE_FLAG_DEACTIVATED;
}

void bhv_torpedo_update(void) {
    o->oForwardVel = 100.0f;
    o->oWallHitboxRadius = 105.0f;
    cur_obj_compute_vel_xz();
    o->oPosX += o->oVelX;
    o->oPosZ += o->oVelZ;

    if(o->oTimer < 40) {
        o->oPosX = gMarioObject->oPosX;
        o->oPosY = gMarioObject->oPosY + 75.0f;
        gTorpedoTargetX = gMarioObject->oPosX;
        gTorpedoTargetY = gMarioObject->oPosY;
        gTorpedoTargetZ = gMarioObject->oPosZ;
    }
    gTargetX = gMarioScreenX;
    gTargetY = gMarioScreenY;
    gRenderTarget = 1;

    if(cur_obj_resolve_wall_collisions()) {
        explode(0);
        gRenderTarget = 0;
    }
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
