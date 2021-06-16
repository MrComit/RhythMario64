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
#include "levels/ccm/header.h"

const LevelScript level_ccm_entry[] = {
	INIT_LEVEL(),
	LOAD_YAY0(0x07, _ccm_segment_7SegmentRomStart, _ccm_segment_7SegmentRomEnd), 
	LOAD_YAY0_TEXTURE(0x09, _snow_yay0SegmentRomStart, _snow_yay0SegmentRomEnd), 
	LOAD_YAY0(0x0B, _effect_yay0SegmentRomStart, _effect_yay0SegmentRomEnd), 
	LOAD_YAY0(0x0A, _bitfs_skybox_yay0SegmentRomStart, _bitfs_skybox_yay0SegmentRomEnd), 
	LOAD_YAY0(0x05, _group2_yay0SegmentRomStart, _group2_yay0SegmentRomEnd), 
	LOAD_RAW(0x0C, _group2_geoSegmentRomStart, _group2_geoSegmentRomEnd), 
	LOAD_YAY0(0x06, _group14_yay0SegmentRomStart, _group14_yay0SegmentRomEnd), 
	LOAD_RAW(0x0D, _group14_geoSegmentRomStart, _group14_geoSegmentRomEnd), 
	LOAD_YAY0(0x08, _common0_yay0SegmentRomStart, _common0_yay0SegmentRomEnd), 
	LOAD_RAW(0x0F, _common0_geoSegmentRomStart, _common0_geoSegmentRomEnd), 
	ALLOC_LEVEL_POOL(),
	MARIO(MODEL_MARIO, 0x00000001, bhvMario), 
	JUMP_LINK(script_func_global_1), 
	JUMP_LINK(script_func_global_3), 
	JUMP_LINK(script_func_global_15), 
	LOAD_MODEL_FROM_GEO(MODEL_GHOST_KOOPA, ghost_koopa_geo), 
	LOAD_MODEL_FROM_GEO(MODEL_LAVA_SPIRE, lava_spire_geo), 
	LOAD_MODEL_FROM_GEO(MODEL_SAWBLADE, sawblade_geo), 

	AREA(1, ccm_area_1),
		WARP_NODE(0x0A, LEVEL_BOB, 0x01, 0x0A, WARP_NO_CHECKPOINT),
		WARP_NODE(0x0B, LEVEL_BOB, 0x01, 0x0A, WARP_NO_CHECKPOINT),
		WARP_NODE(0xF1, LEVEL_CCM, 0x01, 0x0B, WARP_NO_CHECKPOINT),
		OBJECT(MODEL_BULLY, -437, 3232, -2198, 0, 0, 0, 0x04000000, bhvSmallBully),
		OBJECT(MODEL_BULLY, 420, 3232, -1139, 0, 0, 0, 0x04000000, bhvSmallBully),
		OBJECT(MODEL_BULLY, -737, 3029, -1067, 0, 0, 0, 0x04000000, bhvSmallBully),
		OBJECT(MODEL_NONE, -9136, 3034, 5927, 0, -180, 0, 0x000B0000, bhvAirborneDeathWarp),
		OBJECT(MODEL_BOWLING_BALL, -10379, 2917, -5167, 0, 24, 0, 0x00000000, bhvFireSpitter),
		OBJECT(MODEL_BOWLING_BALL, -7295, 2917, -4546, 0, 24, 0, 0x00000000, bhvFireSpitter),
		OBJECT(MODEL_BOWLING_BALL, -13841, 2917, -4276, 0, 24, 0, 0x00000000, bhvFireSpitter),
		OBJECT(MODEL_BOWLING_BALL, 51, 3229, -1717, 0, 24, 0, 0x00000000, bhvFireSpitter),
		OBJECT(MODEL_GHOST_KOOPA, 3487, 3029, -2484, 0, 0, 0, 0x00020000, bhvKoopa),
		OBJECT(MODEL_NONE, 4080, 3029, -1333, 0, 0, 0, 0x00050000, bhvKoopaRaceEndpoint),
		OBJECT(MODEL_LAVA_SPIRE, -8492, 310, 4189, 0, 0, 0, 0x00000000, bhvLavaSpire),
		OBJECT(MODEL_LAVA_SPIRE, -9805, 310, 4189, 0, 0, 0, 0x00010000, bhvLavaSpire),
		OBJECT(MODEL_LAVA_SPIRE, -10119, 310, 66, 0, 55, 0, 0x00000000, bhvLavaSpire),
		OBJECT(MODEL_LAVA_SPIRE, -10876, 310, 1138, 0, 55, 0, 0x00010000, bhvLavaSpire),
		OBJECT(MODEL_LAVA_SPIRE, -11112, 310, -760, 0, 55, 0, 0x00010000, bhvLavaSpire),
		OBJECT(MODEL_LAVA_SPIRE, -11869, 310, 312, 0, 55, 0, 0x00000000, bhvLavaSpire),
		OBJECT(MODEL_LAVA_SPIRE, -12552, 310, -2485, 0, 12, 0, 0x00010000, bhvLavaSpire),
		OBJECT(MODEL_LAVA_SPIRE, -13837, 310, -2216, 0, 12, 0, 0x00000000, bhvLavaSpire),
		OBJECT(MODEL_LAVA_SPIRE, -11865, 310, -5712, 0, 96, 0, 0x00010000, bhvLavaSpire),
		OBJECT(MODEL_LAVA_SPIRE, -11719, 310, -4407, 0, 96, 0, 0x00000000, bhvLavaSpire),
		OBJECT(MODEL_LAVA_SPIRE, -10528, 310, -5818, 0, 96, 0, 0x00000000, bhvLavaSpire),
		OBJECT(MODEL_LAVA_SPIRE, -10382, 310, -4513, 0, 96, 0, 0x00010000, bhvLavaSpire),
		OBJECT(MODEL_LAVA_SPIRE, -9067, 310, -5741, 0, 96, 0, 0x00010000, bhvLavaSpire),
		OBJECT(MODEL_LAVA_SPIRE, -8921, 310, -4436, 0, 96, 0, 0x00000000, bhvLavaSpire),
		OBJECT(MODEL_NONE, 51, 3129, -274, 0, -180, 0, 0x00000000, bhvSawbladeSpawner),
		OBJECT(MODEL_NONE, 562, 3129, -3160, 0, 0, 0, 0x00000000, bhvSawbladeSpawner),
		OBJECT(MODEL_NONE, 887, 3129, -2235, 0, 50, 0, 0x00000000, bhvSawbladeSpawner),
		OBJECT(MODEL_NONE, -9136, 3034, 6127, 0, -180, 0, 0x000A0000, bhvFlyingWarp),
		MARIO_POS(0x01, -180, -9136, 3034, 6127),
		TERRAIN(ccm_area_1_collision),
		MACRO_OBJECTS(ccm_area_1_macro_objs),
		SET_BACKGROUND_MUSIC(0x00, SEQ_CASTLE),
		TERRAIN_TYPE(TERRAIN_STONE),
	END_AREA(),

	FREE_LEVEL_POOL(),
	MARIO_POS(0x01, -180, -9136, 3034, 6127),
	CALL(0, lvl_init_or_update),
	CALL_LOOP(1, lvl_init_or_update),
	CLEAR_LEVEL(),
	SLEEP_BEFORE_EXIT(1),
	EXIT(),
};
