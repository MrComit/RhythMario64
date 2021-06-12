// whomp.c.inc

void whomp_play_sfx_from_pound_animation(void) {
    UNUSED s32 sp2C = o->header.gfx.animInfo.animFrame;
    s32 sp28 = 0;
    if (o->oForwardVel < 5.0f) {
        sp28 = cur_obj_check_anim_frame(0);
        sp28 |= cur_obj_check_anim_frame(23);
    } else {
        sp28 = cur_obj_check_anim_frame_in_range(0, 3);
        sp28 |= cur_obj_check_anim_frame_in_range(23, 3);
    }
    if (sp28)
        cur_obj_play_sound_2(SOUND_OBJ_POUNDING1);
}

void whomp_act_0(void) {
    cur_obj_init_animation_with_accel_and_sound(0, 1.0f);
    cur_obj_set_pos_to_home();
    if (o->oBehParams2ndByte != 0) {
        gSecondCameraFocus = o;
        cur_obj_scale(2.0f);
        if (o->oSubAction == 0) {
            if (o->oDistanceToMario < 600.0f) {
                o->oSubAction++;
                seq_player_lower_volume(SEQ_PLAYER_LEVEL, 60, 40);
            } else {
                cur_obj_set_pos_to_home();
                o->oHealth = 3;
            }
        } else if (cur_obj_update_dialog_with_cutscene(2, 1, CUTSCENE_DIALOG, DIALOG_114))
            o->oAction = 2;
    } else if (o->oDistanceToMario < 500.0f)
        o->oAction = 1;
    whomp_play_sfx_from_pound_animation();
}

void whomp_act_7(void) {
    if (o->oSubAction == 0) {
        o->oForwardVel = 0.0f;
        cur_obj_init_animation_with_accel_and_sound(0, 1.0f);
        if (o->oTimer > 31)
            o->oSubAction++;
        else
            o->oMoveAngleYaw += 0x400;
    } else {
        o->oForwardVel = 3.0f;
        if (o->oTimer > 42)
            o->oAction = 1;
    }
    whomp_play_sfx_from_pound_animation();
}

void whomp_act_1(void) {
    s16 sp26;
    f32 sp20;
    f32 sp1C;
    sp26 = abs_angle_diff(o->oAngleToMario, o->oMoveAngleYaw);
    sp20 = cur_obj_lateral_dist_to_home();
    if (gCurrLevelNum == LEVEL_BITS)
        sp1C = 200.0f;
    else
        sp1C = 700.0f;
    cur_obj_init_animation_with_accel_and_sound(0, 1.0f);
    o->oForwardVel = 3.0f;
    if (sp20 > sp1C)
        o->oAction = 7;
    else if (sp26 < 0x2000) {
        if (o->oDistanceToMario < 1500.0f) {
            o->oForwardVel = 9.0f;
            cur_obj_init_animation_with_accel_and_sound(0, 3.0f);
        }
        if (o->oDistanceToMario < 300.0f)
            o->oAction = 3;
    }
    whomp_play_sfx_from_pound_animation();
}

void whomp_act_2(void) {
    s16 sp1E;
    cur_obj_init_animation_with_accel_and_sound(0, 1.0f);
    o->oForwardVel = 3.0f;
    cur_obj_rotate_yaw_toward(o->oAngleToMario, 0x200);
    if (o->oTimer > 30) {
        sp1E = abs_angle_diff(o->oAngleToMario, o->oMoveAngleYaw);
        if (sp1E < 0x2000) {
            if (o->oDistanceToMario < 1500.0f) {
                o->oForwardVel = 9.0f;
                cur_obj_init_animation_with_accel_and_sound(0, 3.0f);
            }
            if (o->oDistanceToMario < 300.0f)
                o->oAction = 3;
        }
    }
    whomp_play_sfx_from_pound_animation();
    if (mario_is_far_below_object(1000.0f)) {
        o->oAction = 0;
        stop_background_music(SEQUENCE_ARGS(4, SEQ_EVENT_BOSS));
    }
}

void whomp_act_3(void) {
    o->oForwardVel = 0.0f;
    cur_obj_init_animation_with_accel_and_sound(1, 1.0f);
    if (cur_obj_check_if_near_animation_end())
        o->oAction = 4;
}

void whomp_act_4(void) {
    if (o->oTimer == 0)
        o->oVelY = 40.0f;
    if (o->oTimer < 8) {
    } else {
        o->oAngleVelPitch += 0x100;
        o->oFaceAnglePitch += o->oAngleVelPitch;
        if (o->oFaceAnglePitch > 0x4000) {
            o->oAngleVelPitch = 0;
            o->oFaceAnglePitch = 0x4000;
            o->oAction = 5;
        }
    }
}

void whomp_act_5(void) {
    if (o->oSubAction == 0 && o->oMoveFlags & OBJ_MOVE_LANDED) {
        cur_obj_play_sound_2(SOUND_OBJ_WHOMP_LOWPRIO);
        cur_obj_shake_screen(SHAKE_POS_SMALL);
        o->oVelY = 0.0f;
        o->oSubAction++;
    }
    if (o->oMoveFlags & OBJ_MOVE_ON_GROUND)
        o->oAction = 6;
}

void king_whomp_on_ground(void) {
    Vec3f pos;
    if (o->oSubAction == 0) {
        if (cur_obj_is_mario_ground_pounding_platform()) {
            o->oHealth--;
            cur_obj_play_sound_2(SOUND_OBJ2_WHOMP_SOUND_SHORT);
            cur_obj_play_sound_2(SOUND_OBJ_KING_WHOMP_DEATH);
            if (o->oHealth == 0)
                o->oAction = 8;
            else {
                vec3f_copy_2(pos, &o->oPosX);
                vec3f_copy_2(&o->oPosX, &gMarioObject->oPosX);
                spawn_mist_particles_variable(0, 0, 100.0f);
                spawn_triangle_break_particles(20, 138, 3.0f, 4);
                cur_obj_shake_screen(SHAKE_POS_SMALL);
                vec3f_copy_2(&o->oPosX, pos);
            }
            o->oSubAction++;
        }
        o->oWhompShakeVal = 0;
    } else {
        if (o->oWhompShakeVal < 10) {
            if (o->oWhompShakeVal % 2)
                o->oPosY += 8.0f;
            else
                o->oPosY -= 8.0f;
        } else
            o->oSubAction = 10;
        o->oWhompShakeVal++;
    }
}

void whomp_on_ground(void) {
    if (o->oSubAction == 0) {
        if (gMarioObject->platform == o) {
            if (cur_obj_is_mario_ground_pounding_platform()) {
                o->oNumLootCoins = 5;
                obj_spawn_loot_yellow_coins(o, 5, 20.0f);
                o->oAction = 8;
            } else {
                cur_obj_spawn_loot_coin_at_mario_pos();
                o->oSubAction++;
            }
        }
    } else if (!cur_obj_is_mario_on_platform())
        o->oSubAction = 0;
}

void whomp_act_6(void) {
    if (o->oSubAction != 10) {
        o->oForwardVel = 0.0f;
        o->oAngleVelPitch = 0;
        o->oAngleVelYaw = 0;
        o->oAngleVelRoll = 0;
        if (o->oBehParams2ndByte != 0)
            king_whomp_on_ground();
        else
            whomp_on_ground();
        if (o->oTimer > 100 || (gMarioState->action == ACT_SQUISHED && o->oTimer > 30))
            o->oSubAction = 10;
    } else {
        if (o->oFaceAnglePitch > 0) {
            o->oAngleVelPitch = -0x200;
            o->oFaceAnglePitch += o->oAngleVelPitch;
        } else {
            o->oAngleVelPitch = 0;
            o->oFaceAnglePitch = 0;
            if (o->oBehParams2ndByte != 0)
                o->oAction = 2;
            else
                o->oAction = 1;
        }
    }
}

void whomp_act_8(void) {
    if (o->oBehParams2ndByte != 0) {
        if (cur_obj_update_dialog_with_cutscene(2, 2, CUTSCENE_DIALOG, DIALOG_115)) {
            obj_set_angle(o, 0, 0, 0);
            cur_obj_hide();
            cur_obj_become_intangible();
            spawn_mist_particles_variable(0, 0, 200.0f);
            spawn_triangle_break_particles(20, 138, 3.0f, 4);
            cur_obj_shake_screen(SHAKE_POS_SMALL);
            o->oPosY += 100.0f;
            spawn_default_star(180.0f, 3880.0f, 340.0f);
            cur_obj_play_sound_2(SOUND_OBJ_KING_WHOMP_DEATH);
            o->oAction = 9;
        }
    } else {
        spawn_mist_particles_variable(0, 0, 100.0f);
        spawn_triangle_break_particles(20, 138, 3.0f, 4);
        cur_obj_shake_screen(SHAKE_POS_SMALL);
        create_sound_spawner(SOUND_OBJ_THWOMP);
        obj_mark_for_deletion(o);
    }
}

void whomp_act_9(void) {
    if (o->oTimer == 60)
        stop_background_music(SEQUENCE_ARGS(4, SEQ_EVENT_BOSS));
}

void (*sWhompActions[])(void) = {
    whomp_act_0, whomp_act_1, whomp_act_2, whomp_act_3, whomp_act_4,
    whomp_act_5, whomp_act_6, whomp_act_7, whomp_act_8, whomp_act_9
};

// MM
void bhv_whomp_loop(void) {
    f32 dx, dz;
    stay_on_beat(&o->oBeatTimer, &o->oPrevSongTimer);
    if(gCheckpointLoaded) {
        bhv_grindel_thwomp_init();
    }
    //cur_obj_update_floor_and_walls();
    //cur_obj_call_action_function(sWhompActions);
    //cur_obj_move_standard(-20);
    if (o->oAction != 9) {
        if (o->oBehParams2ndByte != 0)
            cur_obj_hide_if_mario_far_away_y(2000.0f);
        else
            cur_obj_hide_if_mario_far_away_y(1000.0f);
        load_object_collision_model();
    }

    switch (o->oAction) {
        case 0:
            o->oFaceAnglePitch = approach_s16_symmetric(o->oFaceAnglePitch, 0x4000, 0x800);
            o->oPosY = approach_f32(o->oPosY, o->oHomeY, 55.0f, 55.0f);
            cur_obj_compute_vel_xz();
            o->oPosX += o->oVelX;
            o->oPosZ += o->oVelZ;
            if (o->oFaceAnglePitch == 0x4000 && o->oFC == 0) {
                o->oFC = 1;
                o->oForwardVel = 0;
                if (o->oDistanceToMario < 1000.0f) {
                    cur_obj_shake_screen(SHAKE_POS_SMALL);
                    create_sound_spawner(SOUND_OBJ_THWOMP);
                }
            }
            if (cur_obj_beat_hit_and_reset(&o->oBeatTimer)) {
                if (o->o100)
                    o->oAction = 3;
                else
                    o->oAction = 1;
                o->oFC = 0;
                o->oForwardVel = 55.0f;
            }
            break;
        case 1:
            o->oFaceAnglePitch = approach_s16_symmetric(o->oFaceAnglePitch, 0x8000, 0x800);
            o->oPosY = approach_f32(o->oPosY, o->oHomeY + 420.0f, 55.0f, 55.0f);
            cur_obj_compute_vel_xz();
            o->oPosX += o->oVelX;
            o->oPosZ += o->oVelZ;
            //dx = (o->oHomeX + 420.0f) * sins(o->oFaceAngleYaw);
            //dz = (o->oHomeZ + 420.0f) * coss(o->oFaceAngleYaw);
            //o->oPosX = approach_f32(o->oPosX, dx, 55.0f, 55.0f);
            //o->oPosZ = approach_f32(o->oPosZ, dz, 55.0f, 55.0f);
            if (o->oTimer > 7 && o->oFC == 0) {
                o->oFC = 1;
                o->oForwardVel = 0;
                if (o->oDistanceToMario < 1000.0f) {
                    cur_obj_shake_screen(SHAKE_POS_SMALL);
                    create_sound_spawner(SOUND_OBJ_THWOMP);
                }
            }
            if (cur_obj_beat_hit_and_reset(&o->oBeatTimer)) {
                o->oFC = 0;
                if (o->o100) {
                    o->oAction = 0;
                    o->oForwardVel = -55.0f;
                } else {
                    o->oAction = 2;
                    o->oForwardVel = 55.0f;
                }
            }
            break;
        case 2:
            o->oFaceAnglePitch = approach_s16_symmetric(o->oFaceAnglePitch, 0xC000, 0x800);
            o->oPosY = approach_f32(o->oPosY, o->oHomeY + 100.0f, 35.0f, 35.0f);
            cur_obj_compute_vel_xz();
            o->oPosX += o->oVelX;
            o->oPosZ += o->oVelZ;
            if (o->oTimer > 7 && o->oFC == 0) {
                o->oFC = 1;
                o->oForwardVel = 0;
                if (o->oDistanceToMario < 1000.0f) {
                    cur_obj_shake_screen(SHAKE_POS_SMALL);
                    create_sound_spawner(SOUND_OBJ_THWOMP);
                }
            }
            if (cur_obj_beat_hit_and_reset(&o->oBeatTimer)) {
                if (o->o100)
                    o->oAction = 1;
                else
                    o->oAction = 3;
                o->oFaceAnglePitch = -0x4000;
                o->oFC = 0;
                o->oForwardVel = -55.0f;
            }
            break;
        case 3:
            o->oFaceAnglePitch = approach_s16_symmetric(o->oFaceAnglePitch, 0, 0x800);
            o->oPosY = approach_f32(o->oPosY, o->oHomeY, 55.0f, 55.0f);
            if (o->oFaceAnglePitch == 0 && o->oFC == 0) {
                o->oFC = 1;
                if (o->oDistanceToMario < 1000.0f) {
                    cur_obj_shake_screen(SHAKE_POS_SMALL);
                    create_sound_spawner(SOUND_OBJ_THWOMP);
                }
            }
            if (cur_obj_beat_hit_and_reset(&o->oBeatTimer)) {
                o->oFC = 0;
                if (o->o100) {
                    o->o100 = 0;
                    o->oAction = 0;
                    o->oForwardVel = 0;
                } else {
                    o->oAction--;
                    o->o100 = 1;
                    o->oForwardVel = 0.0f;
                }
            }
            break;
    }
}

void bhv_whomp_circle_loop(void) {
    f32 dx, dz, targetY;
    stay_on_beat(&o->oBeatTimer, &o->oPrevSongTimer);
    if(gCheckpointLoaded) {
        bhv_grindel_thwomp_init();
    }
    if (o->oAction != 9) {
        // if (o->oBehParams2ndByte != 0)
        //     cur_obj_hide_if_mario_far_away_y(2000.0f);
        // else
        //     cur_obj_hide_if_mario_far_away_y(1000.0f);
        load_object_collision_model();
    }

    if(absi(o->oFaceAnglePitch % 0x10000) != absi(o->oAction*0x4000)) {
        o->oForwardVel = 30.0f;
        o->oFaceAnglePitch = approach_s16_symmetric(o->oFaceAnglePitch, absi(o->oAction*0x4000), 0x800);
        cur_obj_compute_vel_xz();
        o->oPosX += o->oVelX;
        o->oPosZ += o->oVelZ;
    } else {
        o->oForwardVel = 0;
        if (o->oDistanceToMario < 1000.0f) {
            cur_obj_shake_screen(SHAKE_POS_SMALL);
            create_sound_spawner(SOUND_OBJ_THWOMP);
        }
    }

    switch(o->oAction) {
        case 0:
            targetY = o->oHomeY;
            break;
        case 1:
            targetY = o->oHomeY + 420.0f;
            break;
        case 2:
            targetY = o->oHomeY + 100.0f;
            break;
        case 3:
            targetY = o->oHomeY;
            break;
    }
    o->oPosY = approach_f32(o->oPosY, targetY, 55.0f, 55.0f);
    if (cur_obj_beat_hit_and_reset(&o->oBeatTimer)) {
        o->oAction++;
        o->oMoveAngleYaw -= 0x1000;
        if(o->oAction >= 4) {
            o->oAction = 0;
        }
        o->oFC = 0;
        o->oForwardVel = 55.0f;
    }
}
