#include "src/game/envfx_snow.h"

const GeoLayout disco_lock_geo[] = {
	GEO_CULLING_RADIUS(4096),
	GEO_OPEN_NODE(),
		GEO_DISPLAY_LIST(LAYER_OPAQUE, disco_lock_Lock_mesh),
		GEO_DISPLAY_LIST(LAYER_OPAQUE, disco_lock_material_revert_render_settings),
	GEO_CLOSE_NODE(),
	GEO_END(),
};
