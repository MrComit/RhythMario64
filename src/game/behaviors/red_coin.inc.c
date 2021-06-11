/**
 * This file contains the initialization and behavior for red coins.
 * Behavior controls audio and the orange number spawned, as well as interacting with
 * the course's red coin star.
 */

/**
 * Red coin's hitbox details.
 */
static struct ObjectHitbox sRedCoinHitbox = {
    /* interactType:      */ INTERACT_COIN,
    /* downOffset:        */ 0,
    /* damageOrCoinValue: */ 2,
    /* health:            */ 0,
    /* numLootCoins:      */ 0,
    /* radius:            */ 100,
    /* height:            */ 64,
    /* hurtboxRadius:     */ 0,
    /* hurtboxHeight:     */ 0,
};

/**
 * Red coin initialization function. Sets the coin's hitbox and parent object.
 */
void bhv_red_coin_init(void) {
    // This floor and floor height are unused. Perhaps for orange number spawns originally?
    struct Surface *dummyFloor;
    UNUSED f32 floorHeight = find_floor(o->oPosX, o->oPosY, o->oPosZ, &dummyFloor);

    struct Object *hiddenRedCoinStar;

    // Set the red coins to have a parent of the closest red coin star.
    hiddenRedCoinStar = cur_obj_nearest_object_with_behavior(bhvHiddenRedCoinStar);
    if (hiddenRedCoinStar != NULL)
        o->parentObj = hiddenRedCoinStar;
    else {
        hiddenRedCoinStar = cur_obj_nearest_object_with_behavior(bhvBowserCourseRedCoinStar);
        if (hiddenRedCoinStar != NULL) {
            o->parentObj = hiddenRedCoinStar;
        } else {
            o->parentObj = NULL;
        }
    }

    obj_set_hitbox(o, &sRedCoinHitbox);
}

/**
 * Main behavior for red coins. Primarily controls coin collection noise and spawning
 * the orange number counter.
 */
void bhv_red_coin_loop(void) {
    if (o->oInteractStatus & INT_STATUS_INTERACTED) {
        gRedCoinsCollected++;
        // Spawn the orange number counter, as long as it isn't the last coin.
        if (gRedCoinsCollected != 8) {
            spawn_orange_number(gRedCoinsCollected, 0, 0, 0);
        }

         play_sound(SOUND_MENU_COLLECT_RED_COIN + (((u8) gRedCoinsCollected - 1) << 16),
                    gGlobalSoundSource);

        coin_collected();
    }
}
