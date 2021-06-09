void bhv_beat_block_init(void) {
    switch(o->oBehParams2ndByte) {
        case 0:
            o->oBeatBlockTimer = 0;
            o->oAnimState = 1;
            break;
        case 1:
            o->oBeatBlockTimer = 8;
            o->oAnimState = 0;
    }
}

void bhv_beat_block_update(void) {
    if(gBeatHit == 2 || gBeatHit == 4) {
        o->oBeatBlockTimer++;
        if(o->oBeatBlockTimer > 4 && o->oBeatBlockTimer < 8) {
            play_sound(SOUND_MENU_CLICK_FILE_SELECT, gGlobalSoundSource);
        } else if (o->oBeatBlockTimer == 8) {
            play_sound(SOUND_GENERAL2_PURPLE_SWITCH, gGlobalSoundSource);
        }
        o->oOpacity = 0;
    }
    if(o->oBeatBlockTimer > 4 && o->oBeatBlockTimer < 8) {
        o->oOpacity += 5;
    }
    o->oBeatBlockTimer %= 16;
    if(o->oBeatBlockTimer < 8) {
        o->oAnimState = o->oBehParams2ndByte + 1;
        load_object_collision_model();
    } else {
        o->oAnimState = 0;
    }
}