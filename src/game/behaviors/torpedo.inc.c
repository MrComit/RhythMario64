void bhv_torpedo_update(void) {
    o->oForwardVel = 200.0f;
    cur_obj_compute_vel_xz();
    o->oPosX += o->oVelX;
    o->oPosZ += o->oVelZ;
}

void bhv_torpedo_spawner_init(void) {
    reset_for_checkpoint(&o->oBeatTimer, &o->oPrevSongTimer, 4, 0, 0);
}

void bhv_torpedo_spawner_update(void) {
    stay_on_beat(&o->oBeatTimer, &o->oPrevSongTimer);
    if(cur_obj_beat_hit_and_reset(&o->oBeatTimer, 1)) {
        o->oShotDelay++;
        if(o->oShotDelay > 0) {
            struct Object *torpedo = spawn_object(gMarioObject, MODEL_TORPEDO, bhvTorpedo);
            torpedo->oMoveAngleYaw = 0x8000;
            torpedo->oPosZ += 8000.0f;
            o->oShotDelay = -1;
        }
    }
    if(gCheckpointLoaded) {
        bhv_torpedo_spawner_init();
    }
}
