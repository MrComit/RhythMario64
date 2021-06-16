#include "src/game/envfx_snow.h"

const GeoLayout barrier_geo[] = {
	GEO_CULLING_RADIUS(24576),
	GEO_OPEN_NODE(),
		GEO_DISPLAY_LIST(5, barrier_Border_mesh_layer_5),
		GEO_DISPLAY_LIST(5, barrier_material_revert_render_settings),
	GEO_CLOSE_NODE(),
	GEO_END(),
};
