#include "src/game/envfx_snow.h"

const GeoLayout breakable_box_geo[] = {
	GEO_CULLING_RADIUS(4096),
	GEO_OPEN_NODE(),
		GEO_DISPLAY_LIST(1, breakable_box_skinned_mesh_layer_1),
		GEO_DISPLAY_LIST(1, breakable_box_material_revert_render_settings),
	GEO_CLOSE_NODE(),
	GEO_END(),
};
