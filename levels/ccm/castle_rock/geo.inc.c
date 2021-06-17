#include "src/game/envfx_snow.h"

const GeoLayout castle_rock_switch_opt1[] = {
	GEO_NODE_START(),
	GEO_OPEN_NODE(),
		GEO_DISPLAY_LIST(LAYER_OPAQUE, castle_rock_dl_mesh_layer_1_mat_override_Rock2_0),
	GEO_CLOSE_NODE(),
	GEO_RETURN(),
};
const GeoLayout castle_rock_geo[] = {
	GEO_CULLING_RADIUS(4096),
	GEO_OPEN_NODE(),
		GEO_NODE_START(),
		GEO_OPEN_NODE(),
			GEO_SWITCH_CASE(2, geo_switch_anim_state),
			GEO_OPEN_NODE(),
				GEO_NODE_START(),
				GEO_OPEN_NODE(),
					GEO_DISPLAY_LIST(LAYER_OPAQUE, castle_rock_dl_mesh_layer_1),
				GEO_CLOSE_NODE(),
				GEO_BRANCH(1, castle_rock_switch_opt1),
			GEO_CLOSE_NODE(),
		GEO_CLOSE_NODE(),
		GEO_DISPLAY_LIST(LAYER_OPAQUE, castle_rock_material_revert_render_settings),
	GEO_CLOSE_NODE(),
	GEO_END(),
};
