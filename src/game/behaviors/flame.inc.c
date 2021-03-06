// flame.inc.c

static s32 obj_check_attacks_nolava(struct ObjectHitbox *hitbox, s32 attackedMarioAction) {
    s32 attackType;

    obj_set_hitbox(o, hitbox);

    //! Dies immediately if above lava
    if (o->oInteractStatus & INT_STATUS_INTERACTED) {
        if (o->oInteractStatus & INT_STATUS_ATTACKED_MARIO) {
            if (o->oAction != attackedMarioAction) {
                o->oAction = attackedMarioAction;
                o->oTimer = 0;
            }
        } else {
            attackType = o->oInteractStatus & INT_STATUS_ATTACK_MASK;
            obj_die_if_health_non_positive();
            o->oInteractStatus = 0;
            return attackType;
        }
    }

    o->oInteractStatus = 0;
    return 0;
}



void bhv_small_piranha_flame_init(void) {
    cur_obj_update_floor_and_walls();
    o->oFloat108 = o->oFloorHeight;
}

void bhv_small_piranha_flame_loop(void) {
    if ((u16)(o->oBehParams >> 16) == 0) {
        if (o->oTimer > 0) {
            o->activeFlags = 0;
        } else {
            f32 rnd = random_float() - 0.5f;
            o->header.gfx.scale[1] = o->header.gfx.scale[2] * (1.0f + 0.7f * rnd);
            o->header.gfx.scale[0] = o->header.gfx.scale[2] * (0.9f - 0.5f * rnd);

            o->oAnimState = random_u16();
        }
    } else {
        //cur_obj_update_floor_and_walls();
        if (approach_f32_ptr(&o->oSmallPiranhaFlameStartSpeed, o->oSmallPiranhaFlameEndSpeed, 0.6f)) {
            //cur_obj_rotate_yaw_toward(o->oAngleToMario, 0x200);
        }
        o->oForwardVel = o->oSmallPiranhaFlameStartSpeed;
        o->oPosY = approach_f32(o->oPosY, o->oFloat108, 20.0f, 20.0f);
        //cur_obj_move_standard(-78);
        cur_obj_compute_vel_xz();
        cur_obj_move_using_vel_and_gravity();
        //spawn_object_with_scale(o, o->oSmallPiranhaFlameModel, bhvSmallPiranhaFlame,
        //                        0.4f * o->header.gfx.scale[0]);

        /*if (o->oTimer > o->oSmallPiranhaFlameNextFlameTimer) {
            spawn_object_relative_with_scale(1, 0, o->oGraphYOffset, 0, o->header.gfx.scale[0], o,
                                             o->oSmallPiranhaFlameModel, bhvFlyguyFlame);
            o->oSmallPiranhaFlameNextFlameTimer = random_linear_offset(8, 15);
            o->oTimer = 0;
        }*/

        obj_check_attacks_nolava(&sPiranhaPlantFireHitbox, o->oAction);
        o->oSmallPiranhaFlameSpeed += o->oSmallPiranhaFlameStartSpeed;

        if (o->oTimer > 60 || (o->oMoveFlags & (OBJ_MOVE_HIT_WALL | OBJ_MOVE_MASK_IN_WATER))) {
            obj_die_if_health_non_positive();
        }
    }

    o->oGraphYOffset = 15.0f * o->header.gfx.scale[1];
}

void bhv_fly_guy_flame_loop(void) {
    cur_obj_move_using_fvel_and_gravity();

    if (approach_f32_ptr(&o->header.gfx.scale[0], 0.0f, 0.6f)) {
        obj_mark_for_deletion(o);
    }

    cur_obj_scale(o->header.gfx.scale[0]);
}
