#include "src/game/envfx_snow.h"

const GeoLayout lava_spire_geo[] = {
	GEO_CULLING_RADIUS(4096),
	GEO_OPEN_NODE(),
		GEO_DISPLAY_LIST(1, lava_spire_LavaSpire_mesh_layer_1),
		GEO_DISPLAY_LIST(1, lava_spire_material_revert_render_settings),
	GEO_CLOSE_NODE(),
	GEO_END(),
};
