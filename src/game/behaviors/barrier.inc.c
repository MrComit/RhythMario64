void bhv_c3_barrier_loop(void) {

}

void bhv_c2_barrier_loop(void) {
    
}

void bhv_c1_barrier_loop(void) {
    switch (o->oBehParams2ndByte) {
        case 0:
            break;
        case 1:
            break;
    }
}


void bhv_barrier_loop(void) {
    switch (gCurrLevelNum) {
        case LEVEL_BOB:
            bhv_c1_barrier_loop();
            break;
        case LEVEL_JRB:
            bhv_c2_barrier_loop();
            break;
        case LEVEL_CCM:
            bhv_c3_barrier_loop();
            break;
    }
}