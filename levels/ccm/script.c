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
	LOAD_MODEL_FROM_GEO(MODEL_CASTLE_ROCK, castle_rock_geo), 

	AREA(1, ccm_area_1),
		WARP_NODE(0x0A, LEVEL_BOB, 0x01, 0x0A, WARP_NO_CHECKPOINT),
		WARP_NODE(0x0B, LEVEL_BOB, 0x01, 0x0A, WARP_NO_CHECKPOINT),
		WARP_NODE(0xF1, LEVEL_CCM, 0x01, 0x0B, WARP_NO_CHECKPOINT),
		WARP_NODE(0x0F, LEVEL_CCM, 0x02, 0x0A, WARP_NO_CHECKPOINT),
		OBJECT(MODEL_BARRIER, -11614, 310, 8331, 0, 90, 0, 0x00000000, bhvBarrier),
		OBJECT(MODEL_BARRIER, -17198, 310, -2438, 0, 0, 0, 0x00010000, bhvBarrier),
		OBJECT(MODEL_BARRIER, 10976, 310, 136, 0, 90, 0, 0x00030000, bhvBarrier),
		OBJECT(MODEL_BARRIER, 9154, 310, -12641, 0, 0, 0, 0x00040000, bhvBarrier),
		OBJECT(MODEL_BARRIER, 17381, 310, -14511, 0, -90, 0, 0x00050000, bhvBarrier),
		OBJECT(MODEL_BARRIER, -1802, 310, -1717, 0, 0, 0, 0x00020000, bhvBarrier),
		OBJECT(MODEL_BULLY, 1139, 3104, -3156, 0, 0, 0, 0x04000000, bhvSmallBully),
		OBJECT(MODEL_BULLY, 420, 3232, -1139, 0, 0, 0, 0x04000000, bhvSmallBully),
		OBJECT(MODEL_BULLY, -883, 3104, -142, 0, 0, 0, 0x04000000, bhvSmallBully),
		OBJECT(MODEL_NONE, -9136, 3034, 5927, 0, -180, 0, 0x000B0000, bhvAirborneDeathWarp),
		OBJECT(MODEL_BOWLING_BALL, -10379, 2917, -5167, 0, 24, 0, 0x00000000, bhvFireSpitter),
		OBJECT(MODEL_BOWLING_BALL, -7295, 2917, -4546, 0, 24, 0, 0x00000000, bhvFireSpitter),
		OBJECT(MODEL_BOWLING_BALL, -13841, 2917, -4276, 0, 24, 0, 0x00000000, bhvFireSpitter),
		OBJECT(MODEL_BOWLING_BALL, 51, 3229, -1717, 0, 24, 0, 0x00000000, bhvFireSpitter),
		OBJECT(MODEL_BOWLING_BALL, 10811, 3301, -8043, 0, 24, 0, 0x00000000, bhvFireSpitter),
		OBJECT(MODEL_BOWLING_BALL, 13074, 3129, -9067, 0, 24, 0, 0x00000000, bhvFireSpitter),
		OBJECT(MODEL_BOWLING_BALL, 17087, 3229, -9525, 0, 24, 0, 0x00000000, bhvFireSpitter),
		OBJECT(MODEL_BOWLING_BALL, 17336, 3229, -5350, 0, 24, 0, 0x00000000, bhvFireSpitter),
		OBJECT(MODEL_GATE, 1718, 3029, -2438, 0, 0, 0, 0x44020000, bhvGate),
		OBJECT(MODEL_GHOST_KOOPA, 10670, 3029, -2982, 0, -180, 0, 0x00020000, bhvKoopa),
		OBJECT(MODEL_NONE, 18104, 2925, -1280, 0, -180, 0, 0x00050000, bhvKoopaRaceEndpoint),
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
		OBJECT(MODEL_CASTLE_ROCK, 4764, 2704, -3434, 0, 0, 0, 0x00000000, bhvCastleRock),
		OBJECT(MODEL_CASTLE_ROCK, 4764, 2704, -2434, 0, 0, 0, 0x00010000, bhvCastleRock),
		OBJECT(MODEL_CASTLE_ROCK, 5764, 2704, -3434, 0, 0, 0, 0x00010000, bhvCastleRock),
		OBJECT(MODEL_CASTLE_ROCK, 5764, 2704, -2434, 0, 0, 0, 0x00000000, bhvCastleRock),
		OBJECT(MODEL_CASTLE_ROCK, 6764, 2704, -3434, 0, 0, 0, 0x00000000, bhvCastleRock),
		OBJECT(MODEL_CASTLE_ROCK, 6764, 2704, -2434, 0, 0, 0, 0x00010000, bhvCastleRock),
		OBJECT(MODEL_CASTLE_ROCK, 7764, 2704, -3434, 0, 0, 0, 0x00010000, bhvCastleRock),
		OBJECT(MODEL_CASTLE_ROCK, 7764, 2704, -2434, 0, 0, 0, 0x00000000, bhvCastleRock),
		OBJECT(MODEL_CASTLE_ROCK, 10581, 2704, -7905, 0, 0, 0, 0x00010000, bhvCastleRock),
		OBJECT(MODEL_CASTLE_ROCK, 11385, 2704, -9864, 0, 0, 0, 0x00000000, bhvCastleRock),
		OBJECT(MODEL_CASTLE_ROCK, 11385, 2704, -10864, 0, 0, 0, 0x00010000, bhvCastleRock),
		OBJECT(MODEL_CASTLE_ROCK, 10385, 2704, -10864, 0, 0, 0, 0x00000000, bhvCastleRock),
		OBJECT(MODEL_CASTLE_ROCK, 17904, 2704, -11364, 0, 0, 0, 0x00010000, bhvCastleRock),
		OBJECT(MODEL_CASTLE_ROCK, 16904, 2704, -11364, 0, 0, 0, 0x00000000, bhvCastleRock),
		OBJECT(MODEL_CASTLE_ROCK, 17904, 2704, -10364, 0, 0, 0, 0x00000000, bhvCastleRock),
		OBJECT(MODEL_CASTLE_ROCK, 16904, 2704, -10364, 0, 0, 0, 0x00010000, bhvCastleRock),
		OBJECT(MODEL_CASTLE_ROCK, 17904, 2704, -8829, 0, 0, 0, 0x00010000, bhvCastleRock),
		OBJECT(MODEL_CASTLE_ROCK, 16904, 2704, -8829, 0, 0, 0, 0x00000000, bhvCastleRock),
		OBJECT(MODEL_CASTLE_ROCK, 17904, 2704, -7829, 0, 0, 0, 0x00000000, bhvCastleRock),
		OBJECT(MODEL_CASTLE_ROCK, 16904, 2704, -7829, 0, 0, 0, 0x00010000, bhvCastleRock),
		OBJECT(MODEL_CASTLE_ROCK, 17904, 2704, -4588, 0, 0, 0, 0x00010000, bhvCastleRock),
		OBJECT(MODEL_CASTLE_ROCK, 16904, 2704, -4588, 0, 0, 0, 0x00000000, bhvCastleRock),
		OBJECT(MODEL_CASTLE_ROCK, 17904, 2704, -3588, 0, 0, 0, 0x00000000, bhvCastleRock),
		OBJECT(MODEL_CASTLE_ROCK, 16904, 2704, -3588, 0, 0, 0, 0x00010000, bhvCastleRock),
		OBJECT(MODEL_CASTLE_ROCK, 17904, 2704, -2588, 0, 0, 0, 0x00010000, bhvCastleRock),
		OBJECT(MODEL_CASTLE_ROCK, 16904, 2704, -2588, 0, 0, 0, 0x00000000, bhvCastleRock),
		OBJECT(MODEL_CASTLE_ROCK, 8764, 2704, -3434, 0, 0, 0, 0x00000000, bhvCastleRock),
		OBJECT(MODEL_CASTLE_ROCK, 8764, 2704, -2434, 0, 0, 0, 0x00010000, bhvCastleRock),
		OBJECT(MODEL_NONE, -948, 3129, -6685, 0, 0, 0, 0x00000000, bhvSawbladeSpawner),
		OBJECT(MODEL_NONE, 801, 3129, -6685, 0, 0, 0, 0x01000000, bhvSawbladeSpawner),
		OBJECT(MODEL_NONE, -1198, 3229, -6685, 0, 0, 0, 0x00000000, bhvSawbladeSpawner),
		OBJECT(MODEL_NONE, 1301, 3229, -6685, 0, 0, 0, 0x01000000, bhvSawbladeSpawner),
		OBJECT(MODEL_NONE, 301, 3129, -6685, 0, 0, 0, 0x01000000, bhvSawbladeSpawner),
		OBJECT(MODEL_NONE, -698, 3129, -6685, 0, 0, 0, 0x00000000, bhvSawbladeSpawner),
		OBJECT(MODEL_NONE, -198, 3129, -6685, 0, 0, 0, 0x00000000, bhvSawbladeSpawner),
		OBJECT(MODEL_NONE, -448, 3129, -6685, 0, 0, 0, 0x00000000, bhvSawbladeSpawner),
		OBJECT(MODEL_NONE, 52, 3129, -6685, 0, 0, 0, 0x00000000, bhvSawbladeSpawner),
		OBJECT(MODEL_NONE, 1051, 3129, -6685, 0, 0, 0, 0x01000000, bhvSawbladeSpawner),
		OBJECT(MODEL_NONE, 551, 3129, -6685, 0, 0, 0, 0x01000000, bhvSawbladeSpawner),
		OBJECT(MODEL_NONE, 5264, 3029, -5134, 0, 0, 0, 0xFF000100, bhvSawbladeSpawner),
		OBJECT(MODEL_NONE, 6264, 3029, -5134, 0, 0, 0, 0xFF000100, bhvSawbladeSpawner),
		OBJECT(MODEL_NONE, 7264, 3029, -5134, 0, 0, 0, 0xFF000100, bhvSawbladeSpawner),
		OBJECT(MODEL_NONE, 8264, 3029, -5134, 0, 0, 0, 0xFF000100, bhvSawbladeSpawner),
		OBJECT(MODEL_NONE, 16154, 3029, -7087, 0, 90, 0, 0x03000000, bhvSawbladeSpawner),
		OBJECT(MODEL_NONE, 9535, 3134, -8387, 0, 90, 0, 0x02000000, bhvSawbladeSpawner),
		OBJECT(MODEL_NONE, 9535, 3134, -9238, 0, 90, 0, 0x02000000, bhvSawbladeSpawner),
		OBJECT(MODEL_NONE, 9535, 3134, -10088, 0, 90, 0, 0x02000000, bhvSawbladeSpawner),
		OBJECT(MODEL_NONE, 12417, 3134, -10726, 0, -90, 0, 0x02000000, bhvSawbladeSpawner),
		OBJECT(MODEL_NONE, 12417, 3134, -9876, 0, -90, 0, 0x02000000, bhvSawbladeSpawner),
		OBJECT(MODEL_NONE, 12417, 3134, -9025, 0, -90, 0, 0x02000000, bhvSawbladeSpawner),
		OBJECT(MODEL_NONE, 12417, 3134, -8174, 0, -90, 0, 0x02000000, bhvSawbladeSpawner),
		OBJECT(MODEL_NONE, 13770, 3134, -13917, 0, 0, 0, 0xFF000100, bhvSawbladeSpawner),
		OBJECT(MODEL_NONE, 14782, 3134, -13917, 0, 0, 0, 0xFF000100, bhvSawbladeSpawner),
		OBJECT(MODEL_NONE, 15288, 3134, -11364, 0, -180, 0, 0xFF000100, bhvSawbladeSpawner),
		OBJECT(MODEL_NONE, 14276, 3134, -11364, 0, -180, 0, 0xFF000100, bhvSawbladeSpawner),
		OBJECT(MODEL_NONE, 13264, 3134, -11364, 0, -180, 0, 0xFF000100, bhvSawbladeSpawner),
		OBJECT(MODEL_NONE, 16154, 3029, -5501, 0, 90, 0, 0x03000000, bhvSawbladeSpawner),
		OBJECT(MODEL_NONE, 16154, 3029, -3915, 0, 90, 0, 0x03000000, bhvSawbladeSpawner),
		OBJECT(MODEL_NONE, 18607, 3029, -5159, 0, -90, 0, 0x03000000, bhvSawbladeSpawner),
		OBJECT(MODEL_NONE, 18607, 3029, -6744, 0, -90, 0, 0x03000000, bhvSawbladeSpawner),
		OBJECT(MODEL_NONE, 18607, 3029, -8330, 0, -90, 0, 0x03000000, bhvSawbladeSpawner),
		OBJECT(MODEL_NONE, 18607, 3029, -3573, 0, -90, 0, 0x03000000, bhvSawbladeSpawner),
		OBJECT(MODEL_NONE, -9136, 3034, 6127, 0, -180, 0, 0x000A0000, bhvFlyingWarp),
		MARIO_POS(0x01, -180, -9136, 3034, 6127),
		TERRAIN(ccm_area_1_collision),
		MACRO_OBJECTS(ccm_area_1_macro_objs),
		SET_BACKGROUND_MUSIC(0x00, SEQ_CASTLE),
		TERRAIN_TYPE(TERRAIN_STONE),
	END_AREA(),

	AREA(2, ccm_area_2),
		WARP_NODE(0x0A, LEVEL_BOB, 0x01, 0x0A, WARP_NO_CHECKPOINT),
		WARP_NODE(0x0B, LEVEL_BOB, 0x01, 0x0A, WARP_NO_CHECKPOINT),
		WARP_NODE(0xF1, LEVEL_CCM, 0x01, 0x0B, WARP_NO_CHECKPOINT),
		OBJECT(MODEL_NEW_BOWSER, 187, 0, -2066, 0, 0, 0, 0x00000000, bhvBowser),
		OBJECT(MODEL_NONE, 203, 300, -173, 0, -180, 0, 0x000B0000, bhvAirborneDeathWarp),
		MARIO_POS(0x01, -180, 203, 300, 27),
		OBJECT(MODEL_NONE, 203, 300, 27, 0, -180, 0, 0x000A0000, bhvFlyingWarp),
		TERRAIN(ccm_area_2_collision),
		MACRO_OBJECTS(ccm_area_2_macro_objs),
		SET_BACKGROUND_MUSIC(0x00, SEQ_CASTLE),
		TERRAIN_TYPE(TERRAIN_STONE),
	END_AREA(),

	FREE_LEVEL_POOL(),
	MARIO_POS(0x01, -180, 203, 300, 27),
	CALL(0, lvl_init_or_update),
	CALL_LOOP(1, lvl_init_or_update),
	CLEAR_LEVEL(),
	SLEEP_BEFORE_EXIT(1),
	EXIT(),
};
