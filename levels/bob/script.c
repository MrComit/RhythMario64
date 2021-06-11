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
	LOAD_YAY0(0x05, _group11_yay0SegmentRomStart, _group11_yay0SegmentRomEnd), 
	LOAD_RAW(0x0C, _group11_geoSegmentRomStart, _group11_geoSegmentRomEnd), 
	LOAD_YAY0(0x06, _group14_yay0SegmentRomStart, _group14_yay0SegmentRomEnd), 
	LOAD_RAW(0x0D, _group14_geoSegmentRomStart, _group14_geoSegmentRomEnd), 
	LOAD_YAY0(0x08, _common0_yay0SegmentRomStart, _common0_yay0SegmentRomEnd), 
	LOAD_RAW(0x0F, _common0_geoSegmentRomStart, _common0_geoSegmentRomEnd), 
	ALLOC_LEVEL_POOL(),
	MARIO(MODEL_MARIO, 0x00000001, bhvMario), 
	JUMP_LINK(script_func_global_1), 
	JUMP_LINK(script_func_global_12), 
	JUMP_LINK(script_func_global_15), 
	LOAD_MODEL_FROM_GEO(MODEL_BLOCK, block_geo), 

	AREA(1, bob_area_1),
		WARP_NODE(0x0A, LEVEL_BOB, 0x01, 0x0A, WARP_NO_CHECKPOINT),
		WARP_NODE(0x0B, LEVEL_BOB, 0x01, 0x0A, WARP_NO_CHECKPOINT),
		WARP_NODE(0xF1, LEVEL_BOB, 0x01, 0x0B, WARP_NO_CHECKPOINT),
		OBJECT(MODEL_BEAT_BLOCK, 58, 313, -11826, 0, 90, 0, 0x00010000, bhvBeatBlock),
		OBJECT(MODEL_BEAT_BLOCK, 433, 313, -12201, 0, -90, 0, 0x00010000, bhvBeatBlock),
		OBJECT(MODEL_BEAT_BLOCK, -692, 313, -12201, 0, -90, 0, 0x00010000, bhvBeatBlock),
		OBJECT(MODEL_BEAT_BLOCK, 5309, 313, -9648, 0, 90, 0, 0x00010000, bhvBeatBlock),
		OBJECT(MODEL_BEAT_BLOCK, 5684, 313, -10023, 0, -90, 0, 0x00000000, bhvBeatBlock),
		OBJECT(MODEL_BEAT_BLOCK, 5309, 313, -8898, 0, 90, 0, 0x00000000, bhvBeatBlock),
		OBJECT(MODEL_BEAT_BLOCK, 5684, 313, -9273, 0, -90, 0, 0x00000000, bhvBeatBlock),
		OBJECT(MODEL_BEAT_BLOCK, 6809, 313, -8898, 0, -90, 0, 0x00010000, bhvBeatBlock),
		OBJECT(MODEL_BEAT_BLOCK, 7184, 313, -8898, 0, -90, 0, 0x00010000, bhvBeatBlock),
		OBJECT(MODEL_BEAT_BLOCK, 5309, 313, -8148, 0, 90, 0, 0x00010000, bhvBeatBlock),
		OBJECT(MODEL_BEAT_BLOCK, 5496, 313, -1253, 0, -180, 0, 0x00000000, bhvBeatBlock),
		OBJECT(MODEL_BEAT_BLOCK, 5496, 313, -503, 0, -180, 0, 0x00000000, bhvBeatBlock),
		OBJECT(MODEL_BEAT_BLOCK, 5121, 313, -503, 0, -180, 0, 0x00000000, bhvBeatBlock),
		OBJECT(MODEL_BEAT_BLOCK, 4746, 313, -503, 0, -180, 0, 0x00000000, bhvBeatBlock),
		OBJECT(MODEL_BEAT_BLOCK, 4371, 313, -503, 0, -180, 0, 0x00000000, bhvBeatBlock),
		OBJECT(MODEL_BEAT_BLOCK, 4371, 313, -128, 0, -180, 0, 0x00000000, bhvBeatBlock),
		OBJECT(MODEL_BEAT_BLOCK, 4371, 313, 247, 0, -180, 0, 0x00000000, bhvBeatBlock),
		OBJECT(MODEL_BEAT_BLOCK, 4371, 313, 627, 0, -180, 0, 0x00010000, bhvBeatBlock),
		OBJECT(MODEL_BEAT_BLOCK, 4371, 313, 1002, 0, -180, 0, 0x00010000, bhvBeatBlock),
		OBJECT(MODEL_BEAT_BLOCK, 4371, 313, 1377, 0, -180, 0, 0x00010000, bhvBeatBlock),
		OBJECT(MODEL_BEAT_BLOCK, 4746, 313, 1377, 0, -180, 0, 0x00010000, bhvBeatBlock),
		OBJECT(MODEL_BEAT_BLOCK, 5121, 313, 1377, 0, -180, 0, 0x00010000, bhvBeatBlock),
		OBJECT(MODEL_BEAT_BLOCK, 5496, 313, 1377, 0, -180, 0, 0x00010000, bhvBeatBlock),
		OBJECT(MODEL_BEAT_BLOCK, 5496, 313, 1752, 0, -180, 0, 0x00010000, bhvBeatBlock),
		OBJECT(MODEL_BEAT_BLOCK, 5496, 313, 2127, 0, -180, 0, 0x00010000, bhvBeatBlock),
		OBJECT(MODEL_BEAT_BLOCK, 5496, 313, 2502, 0, -180, 0, 0x00010000, bhvBeatBlock),
		OBJECT(MODEL_BLOCK, -10966, 500, -6666, 0, 0, 0, 0x00000000, bhvBlock),
		OBJECT(MODEL_BLOCK, -10716, 500, -6666, 0, 0, 0, 0x00000000, bhvBlock),
		OBJECT(MODEL_BLOCK, -10466, 500, -6666, 0, 0, 0, 0x00000000, bhvBlock),
		OBJECT(MODEL_BLOCK, -11599, 500, -5240, 0, 0, 0, 0x00000000, bhvBlock),
		OBJECT(MODEL_BLOCK, -11349, 500, -5240, 0, 0, 0, 0x00000000, bhvBlock),
		OBJECT(MODEL_BLOCK, -11224, 1125, -5240, 0, 0, 0, 0x00000000, bhvBlock),
		OBJECT(MODEL_BLOCK, -11099, 1125, -5240, 0, 0, 0, 0x00000000, bhvBlock),
		OBJECT(MODEL_BLOCK, -10974, 1125, -5240, 0, 0, 0, 0x00000000, bhvBlock),
		OBJECT(MODEL_BLOCK, -10849, 1125, -5240, 0, 0, 0, 0x00000000, bhvBlock),
		OBJECT(MODEL_BLOCK, -10724, 1125, -5240, 0, 0, 0, 0x00000000, bhvBlock),
		OBJECT(MODEL_BLOCK, -10599, 1125, -5240, 0, 0, 0, 0x00000000, bhvBlock),
		OBJECT(MODEL_BLOCK, -10474, 1125, -5240, 0, 0, 0, 0x00000000, bhvBlock),
		OBJECT(MODEL_BLOCK, -10349, 1125, -5240, 0, 0, 0, 0x00000000, bhvBlock),
		OBJECT(MODEL_BLOCK, -1389, 500, -12792, 0, -90, 0, 0x00000000, bhvBlock),
		OBJECT(MODEL_BLOCK, -1389, 500, -12542, 0, -90, 0, 0x00000000, bhvBlock),
		OBJECT(MODEL_BLOCK, -1389, 500, -12292, 0, -90, 0, 0x00000000, bhvBlock),
		OBJECT(MODEL_BREAKABLE_BOX, 5882, 500, -12302, 0, 0, 0, 0x00010000, bhvBreakableBox),
		OBJECT(MODEL_BREAKABLE_BOX, 5882, 500, -12102, 0, 0, 0, 0x00000000, bhvBreakableBox),
		OBJECT(MODEL_BREAKABLE_BOX, 5882, 500, -11902, 0, 0, 0, 0x00010000, bhvBreakableBox),
		OBJECT(MODEL_BREAKABLE_BOX, -1588, 250, -10643, 0, 0, 0, 0x00010000, bhvBreakableBox),
		OBJECT(MODEL_BREAKABLE_BOX, -1788, 250, -10643, 0, 0, 0, 0x00010000, bhvBreakableBox),
		OBJECT(MODEL_BREAKABLE_BOX, 5496, 200, 435, 0, -180, 0, 0x00030000, bhvBreakableBox),
		OBJECT(MODEL_NONE, -10750, 300, -6500, 0, 90, 0, 0x000B0000, bhvAirborneDeathWarp),
		OBJECT(MODEL_GATE, -7500, 0, -6000, 0, 0, 0, 0x00000000, bhvGate),
		OBJECT(MODEL_ENEMY_LAKITU, -6006, 500, -6055, 0, 0, 0, 0x00000000, bhvEnemyLakitu),
		OBJECT(MODEL_LASER_RING_SPAWNER, -11000, 0, -6000, 0, 0, 0, 0x00000000, bhvLaserRingSpawner),
		OBJECT(MODEL_LASER_RING_SPAWNER, 7729, 500, 435, 0, 0, 0, 0x00000000, bhvLaserRingSpawner),
		OBJECT(MODEL_LAUNCHER, -13750, 250, -6000, 0, 0, 0, 0x00000000, bhvLauncher),
		OBJECT(MODEL_LAUNCHER, -5214, 123, -15361, 0, 20, 0, 0x00000000, bhvLauncher),
		OBJECT(MODEL_BLOCK, -11696, 500, -6460, 0, 0, 0, 0x00010000, bhvBlock),
		OBJECT(MODEL_BLOCK, -10841, 500, -6666, 0, 0, 0, 0x00010000, bhvBlock),
		OBJECT(MODEL_BLOCK, -10591, 500, -6666, 0, 0, 0, 0x00010000, bhvBlock),
		OBJECT(MODEL_BLOCK, -11474, 500, -5240, 0, 0, 0, 0x00010000, bhvBlock),
		OBJECT(MODEL_BLOCK, -1389, 500, -12667, 0, -90, 0, 0x00010000, bhvBlock),
		OBJECT(MODEL_BLOCK, -1389, 500, -12417, 0, -90, 0, 0x00010000, bhvBlock),
		OBJECT(MODEL_BEAT_BLOCK, 58, 313, -12201, 0, 90, 0, 0x00000000, bhvBeatBlock),
		OBJECT(MODEL_BEAT_BLOCK, 433, 313, -11826, 0, -90, 0, 0x00000000, bhvBeatBlock),
		OBJECT(MODEL_BEAT_BLOCK, -692, 313, -11826, 0, -90, 0, 0x00000000, bhvBeatBlock),
		OBJECT(MODEL_BEAT_BLOCK, 5309, 313, -10023, 0, 90, 0, 0x00000000, bhvBeatBlock),
		OBJECT(MODEL_BEAT_BLOCK, 5684, 313, -9648, 0, -90, 0, 0x00010000, bhvBeatBlock),
		OBJECT(MODEL_BEAT_BLOCK, 5309, 313, -9273, 0, 90, 0, 0x00000000, bhvBeatBlock),
		OBJECT(MODEL_BEAT_BLOCK, 5684, 313, -8898, 0, -90, 0, 0x00000000, bhvBeatBlock),
		OBJECT(MODEL_BEAT_BLOCK, 5684, 313, -8148, 0, -90, 0, 0x00000000, bhvBeatBlock),
		OBJECT(MODEL_BEAT_BLOCK, 5496, 313, -1628, 0, 0, 0, 0x00000000, bhvBeatBlock),
		OBJECT(MODEL_BEAT_BLOCK, 5496, 313, -878, 0, 0, 0, 0x00000000, bhvBeatBlock),
		OBJECT(MODEL_RED_COIN, -6169, 0, -9154, 0, 0, 0, 0x00000000, bhvRedCoin),
		OBJECT(MODEL_RED_COIN, -4429, 239, -12232, 0, 0, 0, 0x00000000, bhvRedCoin),
		OBJECT(MODEL_RED_COIN, 5882, 500, -12102, 0, 0, 0, 0x00000000, bhvRedCoin),
		OBJECT(MODEL_RED_COIN, 5496, 500, 435, 0, 0, 0, 0x00000000, bhvRedCoin),
		OBJECT(MODEL_RED_COIN, 7184, 500, -8898, 0, 0, 0, 0x00000000, bhvRedCoin),
		OBJECT(MODEL_RED_COIN, 5500, 175, -6250, 0, 0, 0, 0x00000000, bhvRedCoin),
		OBJECT(MODEL_RED_COIN, -57, 990, -15586, 0, 5, 0, 0x00000000, bhvRedCoin),
		OBJECT(MODEL_RED_COIN, 2313, 500, -12000, 0, -90, 0, 0x00000000, bhvRedCoin),
		OBJECT(MODEL_NONE, -11750, 300, -6500, 0, 90, 0, 0x000A0000, bhvFlyingWarp),
		MARIO_POS(0x01, 90, -11750, 300, -6500),
		OBJECT(MODEL_THWOMP, -9757, 0, -6000, 0, -90, 0, 0x00000000, bhvThwomp),
		OBJECT(MODEL_THWOMP, 2313, 500, -12000, 0, -90, 0, 0x00000000, bhvThwomp),
		OBJECT(MODEL_WHOMP, 4500, 500, -7250, 0, 0, 0, 0x00000000, bhvSmallWhomp),
		OBJECT(MODEL_WHOMP, 6500, 500, -5250, 0, -180, 0, 0x00000000, bhvSmallWhomp),
		TERRAIN(bob_area_1_collision),
		MACRO_OBJECTS(bob_area_1_macro_objs),
		SET_BACKGROUND_MUSIC(0x00, SEQ_TEST),
		TERRAIN_TYPE(TERRAIN_GRASS),
	END_AREA(),

	FREE_LEVEL_POOL(),
	MARIO_POS(0x01, 90, -11750, 300, -6500),
	CALL(0, lvl_init_or_update),
	CALL_LOOP(1, lvl_init_or_update),
	CLEAR_LEVEL(),
	SLEEP_BEFORE_EXIT(1),
	EXIT(),
};
