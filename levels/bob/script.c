#include <ultra64.h>
#include "sm64.h"
#include "behavior_data.h"
#include "model_ids.h"
#include "seq_ids.h"
#include "dialog_ids.h"
#include "segment_symbols.h"
#include "level_commands.h"

#include "game/level_update.h"

#include "levels/scripts.h"

#include "actors/common1.h"

#include "make_const_nonconst.h"
#include "levels/bob/header.h"

const LevelScript level_bob_entry[] = {
	INIT_LEVEL(),
	LOAD_YAY0(0x07, _bob_segment_7SegmentRomStart, _bob_segment_7SegmentRomEnd), 
	LOAD_YAY0_TEXTURE(0x09, _generic_yay0SegmentRomStart, _generic_yay0SegmentRomEnd), 
	LOAD_YAY0(0x0A, _water_skybox_yay0SegmentRomStart, _water_skybox_yay0SegmentRomEnd), 
	LOAD_YAY0(0x05, _group1_yay0SegmentRomStart, _group1_yay0SegmentRomEnd), 
	LOAD_RAW(0x0C, _group1_geoSegmentRomStart, _group1_geoSegmentRomEnd), 
	LOAD_YAY0(0x06, _group14_yay0SegmentRomStart, _group14_yay0SegmentRomEnd), 
	LOAD_RAW(0x0D, _group14_geoSegmentRomStart, _group14_geoSegmentRomEnd), 
	LOAD_YAY0(0x08, _common0_yay0SegmentRomStart, _common0_yay0SegmentRomEnd), 
	LOAD_RAW(0x0F, _common0_geoSegmentRomStart, _common0_geoSegmentRomEnd), 
	ALLOC_LEVEL_POOL(),
	MARIO(MODEL_MARIO, 0x00000001, bhvMario), 
	JUMP_LINK(script_func_global_1), 
	JUMP_LINK(script_func_global_2), 
	JUMP_LINK(script_func_global_15), 

	AREA(1, bob_area_1),
		WARP_NODE(0x0A, LEVEL_BOB, 0x01, 0x0A, WARP_NO_CHECKPOINT),
		WARP_NODE(0x0B, LEVEL_BOB, 0x01, 0x0A, WARP_NO_CHECKPOINT),
		WARP_NODE(0xF1, LEVEL_BOB, 0x01, 0x0B, WARP_NO_CHECKPOINT),
		OBJECT(MODEL_BEAT_BLOCK, -11529, 0, -7812, 0, 0, 0, 0x00010000, bhvBeatBlock),
		OBJECT(MODEL_BEAT_BLOCK, 3140, 313, -11848, 0, 90, 0, 0x00010000, bhvBeatBlock),
		OBJECT(MODEL_BEAT_BLOCK, 3515, 313, -12223, 0, -90, 0, 0x00010000, bhvBeatBlock),
		OBJECT(MODEL_NONE, -10750, 300, -6500, 0, 90, 0, 0x000B0000, bhvAirborneDeathWarp),
		OBJECT(MODEL_GATE, -7500, 0, -6000, 0, 0, 0, 0x00000000, bhvGate),
		OBJECT(MODEL_LASER_RING_SPAWNER, -11000, 0, -6000, 0, 0, 0, 0x00000000, bhvLaserRingSpawner),
		OBJECT(MODEL_LAUNCHER, -13750, 250, -6000, 0, 0, 0, 0x00000000, bhvLauncher),
		OBJECT(MODEL_BEAT_BLOCK, -10529, 0, -7812, 0, 0, 0, 0x00000000, bhvBeatBlock),
		OBJECT(MODEL_BEAT_BLOCK, 3140, 313, -12223, 0, 90, 0, 0x00000000, bhvBeatBlock),
		OBJECT(MODEL_BEAT_BLOCK, 3515, 313, -11848, 0, -90, 0, 0x00000000, bhvBeatBlock),
		OBJECT(MODEL_RED_COIN, -5839, 0, -10888, 0, 0, 0, 0x00000000, bhvRedCoin),
		OBJECT(MODEL_RED_COIN, -5304, -500, -15225, 0, 0, 0, 0x00000000, bhvRedCoin),
		OBJECT(MODEL_RED_COIN, -4421, -500, -14913, 0, 0, 0, 0x00000000, bhvRedCoin),
		OBJECT(MODEL_RED_COIN, -3463, -500, -14891, 0, 0, 0, 0x00000000, bhvRedCoin),
		OBJECT(MODEL_RED_COIN, -2568, -500, -14925, 0, 0, 0, 0x00000000, bhvRedCoin),
		OBJECT(MODEL_RED_COIN, -1797, -500, -14848, 0, 0, 0, 0x00000000, bhvRedCoin),
		OBJECT(MODEL_RED_COIN, -1019, -500, -14955, 0, 0, 0, 0x00000000, bhvRedCoin),
		OBJECT(MODEL_RED_COIN, 1443, 500, -12000, 0, -90, 0, 0x00000000, bhvRedCoin),
		OBJECT(MODEL_NONE, -11750, 300, -6500, 0, 90, 0, 0x000A0000, bhvFlyingWarp),
		OBJECT(MODEL_THWOMP, -10099, 0, -6133, 0, 0, 0, 0x00000000, bhvThwomp),
		OBJECT(MODEL_THWOMP, 1407, 500, -12000, 0, 0, 0, 0x00000000, bhvThwomp),
		OBJECT(MODEL_WHOMP, -10099, 0, -5562, 0, -90, 0, 0x00000000, bhvSmallWhomp),
		OBJECT(MODEL_WHOMP, 7000, 0, -7000, 0, 0, 0, 0x00000000, bhvSmallWhomp),
		TERRAIN(bob_area_1_collision),
		MACRO_OBJECTS(bob_area_1_macro_objs),
		SET_BACKGROUND_MUSIC(0x00, SEQ_TEST),
		TERRAIN_TYPE(TERRAIN_GRASS),
	END_AREA(),

	FREE_LEVEL_POOL(),
	MARIO_POS(1, 0, 0, 0, 0),
	CALL(0, lvl_init_or_update),
	CALL_LOOP(1, lvl_init_or_update),
	CLEAR_LEVEL(),
	SLEEP_BEFORE_EXIT(1),
	EXIT(),
};
