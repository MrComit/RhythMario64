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
#include "levels/jrb/header.h"

const LevelScript level_jrb_entry[] = {
	INIT_LEVEL(),
	LOAD_YAY0(0x07, _jrb_segment_7SegmentRomStart, _jrb_segment_7SegmentRomEnd), 
	LOAD_YAY0(0x0B, _effect_yay0SegmentRomStart, _effect_yay0SegmentRomEnd), 
	LOAD_YAY0_TEXTURE(0x09, _water_yay0SegmentRomStart, _water_yay0SegmentRomEnd), 
	LOAD_YAY0(0x0A, _wdw_skybox_yay0SegmentRomStart, _wdw_skybox_yay0SegmentRomEnd), 
	LOAD_YAY0(0x05, _group4_yay0SegmentRomStart, _group4_yay0SegmentRomEnd), 
	LOAD_RAW(0x0C, _group4_geoSegmentRomStart, _group4_geoSegmentRomEnd), 
	LOAD_YAY0(0x06, _group13_yay0SegmentRomStart, _group13_yay0SegmentRomEnd), 
	LOAD_RAW(0x0D, _group13_geoSegmentRomStart, _group13_geoSegmentRomEnd), 
	LOAD_YAY0(0x08, _common0_yay0SegmentRomStart, _common0_yay0SegmentRomEnd), 
	LOAD_RAW(0x0F, _common0_geoSegmentRomStart, _common0_geoSegmentRomEnd), 
	ALLOC_LEVEL_POOL(),
	MARIO(MODEL_MARIO, 0x00000001, bhvMario), 
	JUMP_LINK(script_func_global_1), 
	JUMP_LINK(script_func_global_5), 
	JUMP_LINK(script_func_global_14), 
	LOAD_MODEL_FROM_GEO(MODEL_JRB_SHIP_LEFT_HALF_PART, jrb_geo_000978), 
	LOAD_MODEL_FROM_GEO(MODEL_JRB_SHIP_BACK_LEFT_PART, jrb_geo_0009B0), 
	LOAD_MODEL_FROM_GEO(MODEL_JRB_SHIP_RIGHT_HALF_PART, jrb_geo_0009E8), 
	LOAD_MODEL_FROM_GEO(MODEL_JRB_SHIP_BACK_RIGHT_PART, jrb_geo_000A00), 
	LOAD_MODEL_FROM_GEO(MODEL_JRB_SUNKEN_SHIP, jrb_geo_000990), 
	LOAD_MODEL_FROM_GEO(MODEL_JRB_SUNKEN_SHIP_BACK, jrb_geo_0009C8), 
	LOAD_MODEL_FROM_GEO(MODEL_JRB_ROCK, jrb_geo_000930), 
	LOAD_MODEL_FROM_GEO(MODEL_JRB_SLIDING_BOX, jrb_geo_000960), 
	LOAD_MODEL_FROM_GEO(MODEL_JRB_FALLING_PILLAR, jrb_geo_000900), 
	LOAD_MODEL_FROM_GEO(MODEL_JRB_FALLING_PILLAR_BASE, jrb_geo_000918), 
	LOAD_MODEL_FROM_GEO(MODEL_JRB_FLOATING_PLATFORM, jrb_geo_000948), 

	AREA(1, jrb_area_1),
		WARP_NODE(0x0A, LEVEL_JRB, 0x01, 0x0A, WARP_NO_CHECKPOINT),
		OBJECT(MODEL_GATE, 1386, 0, 0, 0, 0, 0, 0x00000000, bhvGate),
		OBJECT(MODEL_LAUNCHER, 312, 125, 0, 0, 90, 0, 0x00000000, bhvLauncher),
		OBJECT(MODEL_LAUNCHER, 221, 125, -221, 0, 135, 0, 0x00010000, bhvLauncher),
		OBJECT(MODEL_LAUNCHER, 0, 125, -312, 0, -180, 0, 0x00020000, bhvLauncher),
		OBJECT(MODEL_LAUNCHER, -221, 125, -221, 0, -135, 0, 0x00000000, bhvLauncher),
		OBJECT(MODEL_LAUNCHER, -312, 125, 0, 0, -90, 0, 0x00000000, bhvLauncher),
		OBJECT(MODEL_LAUNCHER, -221, 125, 221, 0, -45, 0, 0x00000000, bhvLauncher),
		OBJECT(MODEL_LAUNCHER, 0, 125, 312, 0, 0, 0, 0x00000000, bhvLauncher),
		OBJECT(MODEL_LAUNCHER, 221, 125, 221, 0, 45, 0, 0x00000000, bhvLauncher),
		OBJECT(MODEL_SPIKE_PILLAR, -625, 0, 0, 0, -180, 0, 0x00000000, bhvSpikePillar),
		OBJECT(MODEL_SPIKE_PILLAR, -875, 0, 0, 0, -180, 0, 0x00000000, bhvSpikePillar),
		OBJECT(MODEL_SPIKE_PILLAR, -1125, 0, 0, 0, -180, 0, 0x00000000, bhvSpikePillar),
		OBJECT(MODEL_SPIKE_PILLAR, -1375, 0, 0, 0, -180, 0, 0x00000000, bhvSpikePillar),
		OBJECT(MODEL_SPIKE_PILLAR, -577, 0, -239, 0, 158, 0, 0x00000000, bhvSpikePillar),
		OBJECT(MODEL_SPIKE_PILLAR, -808, 0, -335, 0, 158, 0, 0x00000000, bhvSpikePillar),
		OBJECT(MODEL_SPIKE_PILLAR, -1039, 0, -431, 0, 158, 0, 0x00000000, bhvSpikePillar),
		OBJECT(MODEL_SPIKE_PILLAR, -1270, 0, -526, 0, 158, 0, 0x00000000, bhvSpikePillar),
		OBJECT(MODEL_SPIKE_PILLAR, -442, 0, -442, 0, 135, 0, 0x00000000, bhvSpikePillar),
		OBJECT(MODEL_SPIKE_PILLAR, -619, 0, -619, 0, 135, 0, 0x00000000, bhvSpikePillar),
		OBJECT(MODEL_SPIKE_PILLAR, -795, 0, -795, 0, 135, 0, 0x00000000, bhvSpikePillar),
		OBJECT(MODEL_SPIKE_PILLAR, -972, 0, -972, 0, 135, 0, 0x00000000, bhvSpikePillar),
		OBJECT(MODEL_SPIKE_PILLAR, -239, 0, -577, 0, 112, 0, 0x00000000, bhvSpikePillar),
		OBJECT(MODEL_SPIKE_PILLAR, -335, 0, -808, 0, 112, 0, 0x00000000, bhvSpikePillar),
		OBJECT(MODEL_SPIKE_PILLAR, -431, 0, -1039, 0, 112, 0, 0x00000000, bhvSpikePillar),
		OBJECT(MODEL_SPIKE_PILLAR, -526, 0, -1270, 0, 112, 0, 0x00000000, bhvSpikePillar),
		OBJECT(MODEL_SPIKE_PILLAR, 0, 0, -625, 0, 90, 0, 0x00000000, bhvSpikePillar),
		OBJECT(MODEL_SPIKE_PILLAR, 0, 0, -875, 0, 90, 0, 0x00000000, bhvSpikePillar),
		OBJECT(MODEL_SPIKE_PILLAR, 0, 0, -1125, 0, 90, 0, 0x00000000, bhvSpikePillar),
		OBJECT(MODEL_SPIKE_PILLAR, 0, 0, -1375, 0, 90, 0, 0x00000000, bhvSpikePillar),
		OBJECT(MODEL_SPIKE_PILLAR, 239, 0, -577, 0, 68, 0, 0x00000000, bhvSpikePillar),
		OBJECT(MODEL_SPIKE_PILLAR, 335, 0, -808, 0, 68, 0, 0x00000000, bhvSpikePillar),
		OBJECT(MODEL_SPIKE_PILLAR, 431, 0, -1039, 0, 68, 0, 0x00000000, bhvSpikePillar),
		OBJECT(MODEL_SPIKE_PILLAR, 526, 0, -1270, 0, 68, 0, 0x00000000, bhvSpikePillar),
		OBJECT(MODEL_SPIKE_PILLAR, 442, 0, -442, 0, 45, 0, 0x00000000, bhvSpikePillar),
		OBJECT(MODEL_SPIKE_PILLAR, 619, 0, -619, 0, 45, 0, 0x00000000, bhvSpikePillar),
		OBJECT(MODEL_SPIKE_PILLAR, 795, 0, -795, 0, 45, 0, 0x00000000, bhvSpikePillar),
		OBJECT(MODEL_SPIKE_PILLAR, 972, 0, -972, 0, 45, 0, 0x00000000, bhvSpikePillar),
		OBJECT(MODEL_SPIKE_PILLAR, 577, 0, -239, 0, 23, 0, 0x00000000, bhvSpikePillar),
		OBJECT(MODEL_SPIKE_PILLAR, 808, 0, -335, 0, 23, 0, 0x00000000, bhvSpikePillar),
		OBJECT(MODEL_SPIKE_PILLAR, 1039, 0, -431, 0, 23, 0, 0x00000000, bhvSpikePillar),
		OBJECT(MODEL_SPIKE_PILLAR, 1270, 0, -526, 0, 23, 0, 0x00000000, bhvSpikePillar),
		OBJECT(MODEL_SPIKE_PILLAR, 625, 0, 0, 0, 0, 0, 0x00000000, bhvSpikePillar),
		OBJECT(MODEL_SPIKE_PILLAR, 875, 0, 0, 0, 0, 0, 0x00000000, bhvSpikePillar),
		OBJECT(MODEL_SPIKE_PILLAR, 1125, 0, 0, 0, 0, 0, 0x00000000, bhvSpikePillar),
		OBJECT(MODEL_SPIKE_PILLAR, 1375, 0, 0, 0, 0, 0, 0x00000000, bhvSpikePillar),
		OBJECT(MODEL_SPIKE_PILLAR, 577, 0, 239, 0, -22, 0, 0x00000000, bhvSpikePillar),
		OBJECT(MODEL_SPIKE_PILLAR, 808, 0, 335, 0, -22, 0, 0x00000000, bhvSpikePillar),
		OBJECT(MODEL_SPIKE_PILLAR, 1039, 0, 431, 0, -22, 0, 0x00000000, bhvSpikePillar),
		OBJECT(MODEL_SPIKE_PILLAR, 1270, 0, 526, 0, -22, 0, 0x00000000, bhvSpikePillar),
		OBJECT(MODEL_SPIKE_PILLAR, 442, 0, 442, 0, -45, 0, 0x00000000, bhvSpikePillar),
		OBJECT(MODEL_SPIKE_PILLAR, 619, 0, 619, 0, -45, 0, 0x00000000, bhvSpikePillar),
		OBJECT(MODEL_SPIKE_PILLAR, 795, 0, 795, 0, -45, 0, 0x00000000, bhvSpikePillar),
		OBJECT(MODEL_SPIKE_PILLAR, 972, 0, 972, 0, -45, 0, 0x00000000, bhvSpikePillar),
		OBJECT(MODEL_SPIKE_PILLAR, 239, 0, 577, 0, -67, 0, 0x00000000, bhvSpikePillar),
		OBJECT(MODEL_SPIKE_PILLAR, 335, 0, 808, 0, -67, 0, 0x00000000, bhvSpikePillar),
		OBJECT(MODEL_SPIKE_PILLAR, 431, 0, 1039, 0, -67, 0, 0x00000000, bhvSpikePillar),
		OBJECT(MODEL_SPIKE_PILLAR, 526, 0, 1270, 0, -67, 0, 0x00000000, bhvSpikePillar),
		OBJECT(MODEL_SPIKE_PILLAR, 0, 0, 625, 0, -90, 0, 0x00000000, bhvSpikePillar),
		OBJECT(MODEL_SPIKE_PILLAR, 0, 0, 875, 0, -90, 0, 0x00000000, bhvSpikePillar),
		OBJECT(MODEL_SPIKE_PILLAR, 0, 0, 1125, 0, -90, 0, 0x00000000, bhvSpikePillar),
		OBJECT(MODEL_SPIKE_PILLAR, 0, 0, 1375, 0, -90, 0, 0x00000000, bhvSpikePillar),
		OBJECT(MODEL_SPIKE_PILLAR, -239, 0, 577, 0, -112, 0, 0x00000000, bhvSpikePillar),
		OBJECT(MODEL_SPIKE_PILLAR, -335, 0, 808, 0, -112, 0, 0x00000000, bhvSpikePillar),
		OBJECT(MODEL_SPIKE_PILLAR, -431, 0, 1039, 0, -112, 0, 0x00000000, bhvSpikePillar),
		OBJECT(MODEL_SPIKE_PILLAR, -526, 0, 1270, 0, -112, 0, 0x00000000, bhvSpikePillar),
		OBJECT(MODEL_SPIKE_PILLAR, -442, 0, 442, 0, -135, 0, 0x00000000, bhvSpikePillar),
		OBJECT(MODEL_SPIKE_PILLAR, -619, 0, 619, 0, -135, 0, 0x00000000, bhvSpikePillar),
		OBJECT(MODEL_SPIKE_PILLAR, -795, 0, 795, 0, -135, 0, 0x00000000, bhvSpikePillar),
		OBJECT(MODEL_SPIKE_PILLAR, -972, 0, 972, 0, -135, 0, 0x00000000, bhvSpikePillar),
		OBJECT(MODEL_SPIKE_PILLAR, -577, 0, 239, 0, -157, 0, 0x00000000, bhvSpikePillar),
		OBJECT(MODEL_SPIKE_PILLAR, -808, 0, 335, 0, -157, 0, 0x00000000, bhvSpikePillar),
		OBJECT(MODEL_SPIKE_PILLAR, -1039, 0, 431, 0, -157, 0, 0x00000000, bhvSpikePillar),
		OBJECT(MODEL_SPIKE_PILLAR, -1270, 0, 526, 0, -157, 0, 0x00000000, bhvSpikePillar),
		OBJECT(MODEL_NONE, 0, 0, -1000, 0, 0, 0, 0x000A0000, bhvSpinAirborneWarp),
		OBJECT(MODEL_WHOMP, 1250, 0, 0, 0, 0, 0, 0x00000000, bhvSmallWhompCircle),
		OBJECT(MODEL_WHOMP, 750, 0, 0, 0, -180, 0, 0x00010000, bhvSmallWhompCircle),
		TERRAIN(jrb_area_1_collision),
		MACRO_OBJECTS(jrb_area_1_macro_objs),
		SET_BACKGROUND_MUSIC(0x00, SEQ_LEVEL_WATER),
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
