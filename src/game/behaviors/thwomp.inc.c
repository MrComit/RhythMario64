// thwomp.c.inc
#include "audio/load.h"
#include "game/print.h"

void grindel_thwomp_act_4(void) {
    if (o->oTimer == 0)
        o->oThwompRandomTimer = random_float() * 10.0f + 20.0f;
    if (o->oTimer > o->oThwompRandomTimer)
        o->oAction = 0;
}

void grindel_thwomp_act_2(void) {
    o->oPosY = approach_f32(o->oPosY, o->oHomeY, 50.0f, 50.0f);
    if (o->oPosY == o->oHomeY && o->oFC == 0) {
        if (o->oDistanceToMario < 1500.0f) {
            cur_obj_shake_screen(SHAKE_POS_SMALL);
            cur_obj_play_sound_2(SOUND_OBJ_THWOMP);
        }
        o->oFC = 1;
    }
    if (cur_obj_beat_hit(&o->oBeatTimer)) {
        o->oPosY = o->oHomeY;
        o->oVelY = 0;
        o->oAction = 0;
        o->oFC = 0;
        reset_beat_timer(&o->oBeatTimer);
    }
}

void grindel_thwomp_act_3(void) {
    if (o->oTimer == 0)
        if (o->oDistanceToMario < 1500.0f) {
            cur_obj_shake_screen(SHAKE_POS_SMALL);
            cur_obj_play_sound_2(SOUND_OBJ_THWOMP);
        }
    if (o->oTimer > 9)
        o->oAction = 4;
}

void grindel_thwomp_act_1(void) {
    if (o->oTimer > o->oThwompRandomTimer)
        o->oAction = 2;
}

void grindel_thwomp_act_0(void) {
    if (cur_obj_beat_hit(&o->oBeatTimer)) {
        o->oAction = 2;
        reset_beat_timer(&o->oBeatTimer);
    } else
        o->oPosY = approach_f32(o->oPosY, o->oHomeY + 500.0f, 50.0f, 50.0f);
}

void (*sGrindelThwompActions[])(void) = { grindel_thwomp_act_0, grindel_thwomp_act_1,
                                          grindel_thwomp_act_2, grindel_thwomp_act_3,
                                          grindel_thwomp_act_4 };

void bhv_grindel_thwomp_loop(void) {
    struct SequencePlayer *seqPlayer = &gSequencePlayers[0];
    stay_on_beat(&o->oBeatTimer, &o->oPrevSongTimer);
    cur_obj_call_action_function(sGrindelThwompActions);
    if(gCheckpointLoaded) {
        bhv_grindel_thwomp_init();
    }
}


void bhv_grindel_thwomp_init(void) {
    reset_for_checkpoint(&o->oBeatTimer, &o->oPrevSongTimer, 32, 1, 0);
}