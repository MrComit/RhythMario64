#include "src/game/envfx_snow.h"

const GeoLayout beat_block_fillred[] = {
	GEO_NODE_START(),
	GEO_OPEN_NODE(),
		GEO_ASM(0, geo_beat_block_light),
		GEO_ANIMATED_PART(LAYER_OPAQUE, 0, 0, 0, beat_block_option_rroot_mesh_layer_1),
	GEO_CLOSE_NODE(),
	GEO_RETURN(),
};
const GeoLayout beat_block_fillblue[] = {
	GEO_NODE_START(),
	GEO_OPEN_NODE(),
		GEO_ASM(0, geo_beat_block_light),
		GEO_ANIMATED_PART(LAYER_OPAQUE, 0, 0, 0, beat_block_option_broot_mesh_layer_1),
	GEO_CLOSE_NODE(),
	GEO_RETURN(),
};
const GeoLayout beat_block_geo[] = {
	GEO_NODE_START(),
	GEO_OPEN_NODE(),
		GEO_ANIMATED_PART(LAYER_OPAQUE, 0, 0, 0, beat_block_root_mesh_layer_1),
		GEO_OPEN_NODE(),
			GEO_SWITCH_CASE(3, geo_switch_anim_state),
			GEO_OPEN_NODE(),
				GEO_NODE_START(),
				GEO_OPEN_NODE(),
					GEO_ANIMATED_PART(LAYER_OPAQUE, 0, 0, 0, NULL),
				GEO_CLOSE_NODE(),
				GEO_BRANCH(1, beat_block_fillred),
				GEO_BRANCH(1, beat_block_fillblue),
			GEO_CLOSE_NODE(),
		GEO_CLOSE_NODE(),
		GEO_DISPLAY_LIST(LAYER_OPAQUE, beat_block_material_revert_render_settings),
	GEO_CLOSE_NODE(),
	GEO_END(),
};
