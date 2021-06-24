static struct ObjectHitbox sSpikePillarHitbox = {
    /* interactType:      */ INTERACT_DAMAGE,
    /* downOffset:        */ 0,
    /* damageOrCoinValue: */ 2,
    /* health:            */ 0,
    /* numLootCoins:      */ 1,
    /* radius:            */ 100,
    /* height:            */ 600,
    /* hurtboxRadius:     */ 105,
    /* hurtboxHeight:     */ 600,
};

void bhv_spike_pillar_init(void) {
    o->oBehParams2ndByte = gSpikePillarIndex;
    gSpikePillarIndex++;
    if(gSpikePillarIndex >= count_objects_with_behavior(bhvSpikePillar)) {
        gSpikePillarIndex = 0;
    }
    o->oPosY = o->oHomeY - 625.0f;
    obj_set_hitbox(o, &sSpikePillarHitbox);
}

void bhv_spike_pillar_loop(void) {
    if(gCheckpointLoaded == 1 || o->oTimer < 2) {
        o->oPosY = o->oHomeY - 625.0f;
    }
    if(gCurrentCheckpoint == 0 && gSequencePlayers[0].globalSongTimer > 3100) {
        o->oSpikePillarActivated = 1;
    } else {
        o->oSpikePillarActivated = 0;
    }
    if(gSpikePillarIndex != 0 && gSpikePillarIndex - 1 == o->oBehParams2ndByte && o->oSpikePillarActivated == 1) {
        o->oPosY = o->oHomeY;
    }
    if(o->oPosY > o->oHomeY - 625.0f) {
        o->oPosY -= 62.5f;
    }
}