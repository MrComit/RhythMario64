#include "src/game/envfx_snow.h"

const GeoLayout sawblade_geo[] = {
	GEO_CULLING_RADIUS(4096),
	GEO_OPEN_NODE(),
		GEO_DISPLAY_LIST(4, sawblade_sawblade_mesh_layer_4),
		GEO_DISPLAY_LIST(4, sawblade_material_revert_render_settings),
	GEO_CLOSE_NODE(),
	GEO_END(),
};
