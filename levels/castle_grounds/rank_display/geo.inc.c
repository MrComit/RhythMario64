#include "src/game/envfx_snow.h"

const GeoLayout rank_display_switch_opt1[] = {
	GEO_NODE_START(),
	GEO_OPEN_NODE(),
		GEO_ANIMATED_PART(LAYER_ALPHA, 0, 0, 0, rank_display_letter_mesh_layer_4_mat_override_a_0),
	GEO_CLOSE_NODE(),
	GEO_RETURN(),
};
const GeoLayout rank_display_switch_opt2[] = {
	GEO_NODE_START(),
	GEO_OPEN_NODE(),
		GEO_ANIMATED_PART(LAYER_ALPHA, 0, 0, 0, rank_display_letter_mesh_layer_4_mat_override_b_1),
	GEO_CLOSE_NODE(),
	GEO_RETURN(),
};
const GeoLayout rank_display_switch_opt3[] = {
	GEO_NODE_START(),
	GEO_OPEN_NODE(),
		GEO_ANIMATED_PART(LAYER_ALPHA, 0, 0, 0, rank_display_letter_mesh_layer_4_mat_override_c_2),
	GEO_CLOSE_NODE(),
	GEO_RETURN(),
};
const GeoLayout rank_display_switch_opt4[] = {
	GEO_NODE_START(),
	GEO_OPEN_NODE(),
		GEO_ANIMATED_PART(LAYER_ALPHA, 0, 0, 0, rank_display_letter_mesh_layer_4_mat_override_d_3),
	GEO_CLOSE_NODE(),
	GEO_RETURN(),
};
const GeoLayout rank_display_switch_opt5[] = {
	GEO_NODE_START(),
	GEO_OPEN_NODE(),
		GEO_ANIMATED_PART(LAYER_ALPHA, 0, 0, 0, rank_display_letter_mesh_layer_4_mat_override_f_4),
	GEO_CLOSE_NODE(),
	GEO_RETURN(),
};
const GeoLayout rank_display_geo[] = {
	GEO_NODE_START(),
	GEO_OPEN_NODE(),
		GEO_ANIMATED_PART(LAYER_ALPHA, 0, 0, 0, rank_display_root_mesh_layer_4),
		GEO_OPEN_NODE(),
			GEO_SWITCH_CASE(6, geo_switch_anim_state),
			GEO_OPEN_NODE(),
				GEO_NODE_START(),
				GEO_OPEN_NODE(),
					GEO_ANIMATED_PART(LAYER_ALPHA, 0, 0, 0, rank_display_letter_mesh_layer_4),
				GEO_CLOSE_NODE(),
				GEO_BRANCH(1, rank_display_switch_opt1),
				GEO_BRANCH(1, rank_display_switch_opt2),
				GEO_BRANCH(1, rank_display_switch_opt3),
				GEO_BRANCH(1, rank_display_switch_opt4),
				GEO_BRANCH(1, rank_display_switch_opt5),
			GEO_CLOSE_NODE(),
		GEO_CLOSE_NODE(),
		GEO_DISPLAY_LIST(LAYER_ALPHA, rank_display_material_revert_render_settings),
	GEO_CLOSE_NODE(),
	GEO_END(),
};
