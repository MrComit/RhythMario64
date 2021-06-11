#include "src/game/envfx_snow.h"

const GeoLayout bounce_hill_switch_opt1[] = {
	GEO_NODE_START(),
	GEO_OPEN_NODE(),
		GEO_DISPLAY_LIST(LAYER_OPAQUE, bounce_hill_dl_mesh_layer_1_mat_override_hills2_0),
	GEO_CLOSE_NODE(),
	GEO_RETURN(),
};
const GeoLayout bounce_hill_switch_opt2[] = {
	GEO_NODE_START(),
	GEO_OPEN_NODE(),
		GEO_DISPLAY_LIST(LAYER_OPAQUE, bounce_hill_dl_mesh_layer_1_mat_override_hills3_1),
	GEO_CLOSE_NODE(),
	GEO_RETURN(),
};
const GeoLayout bounce_hill_geo[] = {
	GEO_CULLING_RADIUS(4096),
	GEO_OPEN_NODE(),
		GEO_NODE_START(),
		GEO_OPEN_NODE(),
			GEO_DISPLAY_LIST(LAYER_ALPHA, bounce_hill_dl2_mesh_layer_4),
			GEO_SWITCH_CASE(3, geo_switch_anim_state),
			GEO_OPEN_NODE(),
				GEO_NODE_START(),
				GEO_OPEN_NODE(),
					GEO_DISPLAY_LIST(LAYER_OPAQUE, bounce_hill_dl_mesh_layer_1),
				GEO_CLOSE_NODE(),
				GEO_BRANCH(1, bounce_hill_switch_opt1),
				GEO_BRANCH(1, bounce_hill_switch_opt2),
			GEO_CLOSE_NODE(),
		GEO_CLOSE_NODE(),
		GEO_DISPLAY_LIST(LAYER_OPAQUE, bounce_hill_material_revert_render_settings),
		GEO_DISPLAY_LIST(LAYER_ALPHA, bounce_hill_material_revert_render_settings),
	GEO_CLOSE_NODE(),
	GEO_END(),
};
