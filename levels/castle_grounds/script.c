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
#include "levels/castle_grounds/header.h"

const LevelScript level_castle_grounds_entry[] = {
	INIT_LEVEL(),
	LOAD_YAY0(0x07, _castle_grounds_segment_7SegmentRomStart, _castle_grounds_segment_7SegmentRomEnd), 
	LOAD_YAY0(0x0A, _water_skybox_yay0SegmentRomStart, _water_skybox_yay0SegmentRomEnd), 
	LOAD_YAY0_TEXTURE(0x09, _outside_yay0SegmentRomStart, _outside_yay0SegmentRomEnd), 
	LOAD_YAY0(0x05, _group10_yay0SegmentRomStart, _group10_yay0SegmentRomEnd), 
	LOAD_RAW(0x0C, _group10_geoSegmentRomStart, _group10_geoSegmentRomEnd), 
	LOAD_YAY0(0x06, _group15_yay0SegmentRomStart, _group15_yay0SegmentRomEnd), 
	LOAD_RAW(0x0D, _group15_geoSegmentRomStart, _group15_geoSegmentRomEnd), 
	LOAD_YAY0(0x08, _common0_yay0SegmentRomStart, _common0_yay0SegmentRomEnd), 
	LOAD_RAW(0x0F, _common0_geoSegmentRomStart, _common0_geoSegmentRomEnd), 
	ALLOC_LEVEL_POOL(),
	MARIO(MODEL_MARIO, 0x00000001, bhvMario), 
	JUMP_LINK(script_func_global_1), 
	JUMP_LINK(script_func_global_11), 
	JUMP_LINK(script_func_global_16), 
	LOAD_MODEL_FROM_GEO(MODEL_CASTLE_CASTLE_DOOR, castle_door_geo), 
	LOAD_MODEL_FROM_GEO(MODEL_CASTLE_GROUNDS_WARP_PIPE, warp_pipe_geo), 
	LOAD_MODEL_FROM_GEO(MODEL_PORTAL_BLOCKER, portal_blocker_geo), 
	LOAD_MODEL_FROM_GEO(MODEL_RANK_DISPLAY, rank_display_geo), 

	AREA(1, castle_grounds_area_1),
		WARP_NODE(0x0A, LEVEL_BOB, 0x01, 0x0A, WARP_NO_CHECKPOINT),
		WARP_NODE(0x0B, LEVEL_BOB, 0x01, 0x0A, WARP_NO_CHECKPOINT),
		WARP_NODE(0xF1, LEVEL_CASTLE_GROUNDS, 0x01, 0x0B, WARP_NO_CHECKPOINT),
		WARP_NODE(0x81, LEVEL_BOB, 0x01, 0x0A, WARP_NO_CHECKPOINT),
		WARP_NODE(0x82, LEVEL_JRB, 0x01, 0x0A, WARP_NO_CHECKPOINT),
		WARP_NODE(0x83, LEVEL_CCM, 0x01, 0x0A, WARP_NO_CHECKPOINT),
		WARP_NODE(0x84, LEVEL_CCM, 0x02, 0x0A, WARP_NO_CHECKPOINT),
		PAINTING_WARP_NODE(0, LEVEL_BOB, 0x01, 0x0A, WARP_NO_CHECKPOINT),
		PAINTING_WARP_NODE(1, LEVEL_BOB, 0x01, 0x0A, WARP_NO_CHECKPOINT),
		PAINTING_WARP_NODE(2, LEVEL_BOB, 0x01, 0x0A, WARP_NO_CHECKPOINT),
		PAINTING_WARP_NODE(3, LEVEL_JRB, 0x01, 0x0A, WARP_NO_CHECKPOINT),
		PAINTING_WARP_NODE(4, LEVEL_JRB, 0x01, 0x0A, WARP_NO_CHECKPOINT),
		PAINTING_WARP_NODE(5, LEVEL_JRB, 0x01, 0x0A, WARP_NO_CHECKPOINT),
		PAINTING_WARP_NODE(6, LEVEL_CCM, 0x01, 0x0A, WARP_NO_CHECKPOINT),
		PAINTING_WARP_NODE(7, LEVEL_CCM, 0x01, 0x0A, WARP_NO_CHECKPOINT),
		PAINTING_WARP_NODE(8, LEVEL_CCM, 0x01, 0x0A, WARP_NO_CHECKPOINT),
		OBJECT(MODEL_NONE, -2300, 300, 0, 0, 90, 0, 0x000B0000, bhvAirborneDeathWarp),
		OBJECT(MODEL_EGADD, -1348, 0, -772, 0, 90, 0, 0x00010000, bhvEgadd),
		OBJECT(MODEL_PORTAL_BLOCKER, 156, 39, -1467, 0, 0, 0, 0x00000000, bhvPortalBlocker),
		OBJECT(MODEL_PORTAL_BLOCKER, 1406, 39, -1467, 0, 0, 0, 0x00010000, bhvPortalBlocker),
		OBJECT(MODEL_RANK_DISPLAY, -1228, 430, -1467, 0, 0, 0, 0x00000000, bhvRankDisplay),
		OBJECT(MODEL_RANK_DISPLAY, -39, 430, -1467, 0, 0, 0, 0x00020000, bhvRankDisplay),
		OBJECT(MODEL_RANK_DISPLAY, 1211, 430, -1467, 0, 0, 0, 0x00030000, bhvRankDisplay),
		OBJECT(MODEL_WOODEN_SIGNPOST, -1504, 0, -1363, 0, 0, 0, 0x00220000, bhvMessagePanel),
		OBJECT(MODEL_NONE, -2500, 300, 0, 0, 90, 0, 0x000A0000, bhvFlyingWarp),
		MARIO_POS(0x01, 90, -2500, 300, 0),
		OBJECT(MODEL_CASTLE_CASTLE_DOOR, 3050, 0, -75, 0, -90, 0, 0x00000000, bhvLuigiDoor),
		OBJECT(MODEL_CASTLE_CASTLE_DOOR, 3050, 0, 75, 0, 90, 0, 0x00000000, bhvLuigiDoor),
		TERRAIN(castle_grounds_area_1_collision),
		ROOMS(castle_grounds_area_1_collision_rooms),
		MACRO_OBJECTS(castle_grounds_area_1_macro_objs),
		STOP_MUSIC(0),
		TERRAIN_TYPE(TERRAIN_STONE),
	END_AREA(),

	FREE_LEVEL_POOL(),
	MARIO_POS(0x01, 90, -2500, 300, 0),
	CALL(0, lvl_init_or_update),
	CALL_LOOP(1, lvl_init_or_update),
	CLEAR_LEVEL(),
	SLEEP_BEFORE_EXIT(1),
	EXIT(),
};
