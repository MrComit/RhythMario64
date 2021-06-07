#include "src/game/envfx_snow.h"

const GeoLayout launcher_geo[] = {
	GEO_NODE_START(),
	GEO_OPEN_NODE(),
		GEO_DISPLAY_LIST(1, launcher_Circle_mesh_layer_1),
		GEO_DISPLAY_LIST(6, launcher_Circle_mesh_layer_6),
		GEO_DISPLAY_LIST(6, launcher_material_revert_render_settings),
		GEO_DISPLAY_LIST(1, launcher_material_revert_render_settings),
	GEO_CLOSE_NODE(),
	GEO_END(),
};
