#include "src/game/envfx_snow.h"

const GeoLayout castle_grounds_area_1_geo[] = {
	GEO_NODE_START(),
	GEO_OPEN_NODE(),
		GEO_TRANSLATE_NODE_WITH_DL(1, 19057, 12207, 155, castle_grounds_dl_L1Box_mesh_layer_1),
		GEO_OPEN_NODE(),
			GEO_DISPLAY_LIST(4, castle_grounds_dl_L1Box_mesh_layer_4),
		GEO_CLOSE_NODE(),
		GEO_TRANSLATE_NODE_WITH_DL(5, 162, 12048, -529, castle_grounds_dl_L2Box_mesh_layer_5),
		GEO_OPEN_NODE(),
			GEO_DISPLAY_LIST(1, castle_grounds_dl_L2Box_mesh_layer_1),
		GEO_CLOSE_NODE(),
		GEO_TRANSLATE_NODE_WITH_DL(1, -13269, 12760, 496, castle_grounds_dl_L3Box_mesh_layer_1),
		GEO_TRANSLATE_NODE_WITH_DL(1, -1033, 133, -1030, castle_grounds_dl_Portal1_mesh_layer_1),
		GEO_TRANSLATE_NODE_WITH_DL(1, 156, 133, -1030, castle_grounds_dl_Portal2_mesh_layer_1),
		GEO_TRANSLATE_NODE_WITH_DL(1, 1406, 133, -1030, castle_grounds_dl_Portal3_mesh_layer_1),
		GEO_DISPLAY_LIST(1, castle_grounds_dl_workshop_mesh_layer_1),
	GEO_CLOSE_NODE(),
	GEO_RETURN(),
};
const GeoLayout castle_grounds_area_1[] = {
	GEO_NODE_SCREEN_AREA(10, SCREEN_WIDTH/2, SCREEN_HEIGHT/2, SCREEN_WIDTH/2, SCREEN_HEIGHT/2),
	GEO_OPEN_NODE(),
		GEO_ZBUFFER(0),
		GEO_OPEN_NODE(),
			GEO_NODE_ORTHO(100.0000),
			GEO_OPEN_NODE(),
				GEO_BACKGROUND_COLOR(0x0001),
			GEO_CLOSE_NODE(),
		GEO_CLOSE_NODE(),
		GEO_ZBUFFER(1),
		GEO_OPEN_NODE(),
			GEO_CAMERA_FRUSTUM_WITH_FUNC(45.0000, 100, 30000, geo_camera_fov),
			GEO_OPEN_NODE(),
				GEO_CAMERA(CAMERA_MODE_8_DIRECTIONS, 0, 0, 0, 0, -100, 0, geo_camera_main),
				GEO_OPEN_NODE(),
					GEO_BRANCH(1, castle_grounds_area_1_geo),
					GEO_RENDER_OBJ(),
					GEO_ASM(ENVFX_MODE_NONE, geo_envfx_main),
				GEO_CLOSE_NODE(),
			GEO_CLOSE_NODE(),
		GEO_CLOSE_NODE(),
		GEO_DISPLAY_LIST(4, castle_grounds_dl_material_revert_render_settings),
		GEO_DISPLAY_LIST(1, castle_grounds_dl_material_revert_render_settings),
		GEO_DISPLAY_LIST(5, castle_grounds_dl_material_revert_render_settings),
	GEO_CLOSE_NODE(),
	GEO_END(),
};
