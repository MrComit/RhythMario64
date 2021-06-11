struct ObjectHitbox sBoxHitbox = {
    /* interactType: */ INTERACT_BREAKABLE,
    /* downOffset: */ 10,
    /* damageOrCoinValue: */ 0,
    /* health: */ 1,
    /* numLootCoins: */ 0,
    /* radius: */ 68,
    /* height: */ 30,
    /* hurtboxRadius: */ 40,
    /* hurtboxHeight: */ 30,
};


void bhv_block_update(void) {
    o->oAnimState = o->oBehParams2ndByte;
    obj_set_hitbox(o, &sBoxHitbox);
    if(o->oPosY > o->oHomeY) {
        o->oPosY -= 4.0f;
    } else if (o->oPosY < o->oHomeY) {
        o->oPosY += 4.0f;
    }
    if (o->oTimer == 0) {
        cur_obj_unhide();
        cur_obj_become_tangible();
        o->oInteractStatus = 0;
        o->oPosY = o->oHomeY;
        o->oGraphYOffset = 0.0f;
    }
    if (o->oBehParams2ndByte < 2 && ((gMarioState->ceil != NULL && gMarioState->pos[1] + 170.0f >= gMarioState->ceilHeight && 
        gMarioState->ceil->object == o) || cur_obj_was_attacked_or_ground_pounded())) {
        struct Object *coin;
        if(o->oBehParams2ndByte == 0) {
            spawn_mist_particles();
            spawn_triangle_break_particles(20, 138, 0.7f, 3);
            create_sound_spawner(SOUND_GENERAL_BREAK_BOX);
            obj_mark_for_deletion(o);
        } else {
            coin = spawn_object(o, MODEL_YELLOW_COIN, bhvMovingYellowCoin);
            coin->oPosY += 175.0f;
            o->oBehParams2ndByte = 2;
        }
        if(cur_obj_is_mario_ground_pounding_platform()) {
            o->oPosY -= 16.0f;
            if(coin != 0) {
                coin->oPosY -= 250.0f;
            }
        } else {
            o->oPosY += 16.0f;
        }
    }
    load_object_collision_model();
}