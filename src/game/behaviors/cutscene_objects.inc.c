#include "game/ingame_menu.h"

void bhv_peach_cutscene_loop(void) {
    if((gMyCutsceneState == 0 || gMyCutsceneState == 2) && gMyCutsceneTimer > 15) {
        if(gDialogResponse != 0) {
            gMyCutsceneState++;
            gMyCutsceneTimer = 0;
        } else {
            create_dialog_box(1);
        }
    }
}

void bhv_toad_cutscene_loop(void) {
    if(gMyCutsceneState == 1 && gMyCutsceneTimer > 15) {
        if(gDialogResponse != 0) {
            gMyCutsceneState++;
            gMyCutsceneTimer = 0;
        } else {
            create_dialog_box(2);
        }
    }
    if(gMyCutsceneState == 3 && gMyCutsceneTimer > 15) {
        if(gDialogResponse != 0) {
            gMyCutsceneState++;
            gMyCutsceneTimer = 0;
        } else {
            create_dialog_box(3);
        }
    }
}