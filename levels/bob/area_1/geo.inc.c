#include "src/game/envfx_snow.h"

const GeoLayout bob_area_1_geo[] = {
	GEO_NODE_START(),
	GEO_OPEN_NODE(),
		GEO_TRANSLATE_NODE_WITH_DL(1, 5500, 188, -6250, bob_dl_Bridge_mesh_layer_1),
		GEO_TRANSLATE_NODE_WITH_DL(1, 5500, 1535, 7603, bob_dl_castle_mesh_layer_1),
		GEO_TRANSLATE_NODE_WITH_DL(1, 5500, 2111, 7603, bob_dl_castle_001_mesh_layer_1),
		GEO_TRANSLATE_NODE_WITH_DL(1, 5500, 1535, 7603, bob_dl_castle_002_mesh_layer_1),
		GEO_DISPLAY_LIST(1, bob_dl_cloud_floor_mesh_layer_1),
		GEO_DISPLAY_LIST(1, bob_dl_clouds_mesh_layer_1),
		GEO_DISPLAY_LIST(1, bob_dl_hills_mesh_layer_1),
		GEO_DISPLAY_LIST(4, bob_dl_main_mesh_layer_4),
		GEO_DISPLAY_LIST(1, bob_dl_main_mesh_layer_1),
		GEO_TRANSLATE_NODE_WITH_DL(1, -268, 291, -15494, bob_dl_Mushroom_001_mesh_layer_1),
		GEO_TRANSLATE_NODE_WITH_DL(1, -4429, -171, -12316, bob_dl_Mushroom_002_mesh_layer_1),
		GEO_TRANSLATE_NODE_WITH_DL(1, -2819, -171, -10970, bob_dl_Mushroom_003_mesh_layer_1),
		GEO_TRANSLATE_NODE_WITH_DL(1, 5162, -62, -5316, bob_dl_Mushroom_004_mesh_layer_1),
		GEO_TRANSLATE_NODE_WITH_DL(1, 10762, -1654, -12445, bob_dl_Mushroom_005_mesh_layer_1),
		GEO_TRANSLATE_NODE_WITH_DL(1, 3849, 886, 8414, bob_dl_Mushroom_006_mesh_layer_1),
	GEO_CLOSE_NODE(),
	GEO_RETURN(),
};
const GeoLayout bob_area_1[] = {
	GEO_NODE_SCREEN_AREA(10, SCREEN_WIDTH/2, SCREEN_HEIGHT/2, SCREEN_WIDTH/2, SCREEN_HEIGHT/2),
	GEO_OPEN_NODE(),
		GEO_ZBUFFER(0),
		GEO_OPEN_NODE(),
			GEO_NODE_ORTHO(100.0000),
			GEO_OPEN_NODE(),
				GEO_BACKGROUND(BACKGROUND_OCEAN_SKY, geo_skybox_main),
			GEO_CLOSE_NODE(),
		GEO_CLOSE_NODE(),
		GEO_ZBUFFER(1),
		GEO_OPEN_NODE(),
			GEO_CAMERA_FRUSTUM_WITH_FUNC(45.0000, 100, 30000, geo_camera_fov),
			GEO_OPEN_NODE(),
				GEO_CAMERA(CAMERA_MODE_8_DIRECTIONS, 0, 0, 0, 0, -500, 0, geo_camera_main),
				GEO_OPEN_NODE(),
					GEO_BRANCH(1, bob_area_1_geo),
					GEO_RENDER_OBJ(),
					GEO_ASM(ENVFX_MODE_NONE, geo_envfx_main),
				GEO_CLOSE_NODE(),
			GEO_CLOSE_NODE(),
		GEO_CLOSE_NODE(),
		GEO_DISPLAY_LIST(4, bob_dl_material_revert_render_settings),
		GEO_DISPLAY_LIST(1, bob_dl_material_revert_render_settings),
	GEO_CLOSE_NODE(),
	GEO_END(),
};
