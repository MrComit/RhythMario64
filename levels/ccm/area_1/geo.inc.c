#include "src/game/envfx_snow.h"

const GeoLayout ccm_area_1_geo[] = {
	GEO_NODE_START(),
	GEO_OPEN_NODE(),
		GEO_TRANSLATE_NODE_WITH_DL(1, 8136, 4069, -4734, ccm_dl_Castle_mesh_layer_1),
		GEO_TRANSLATE_NODE_WITH_DL(1, -459, 1564, -1454, ccm_dl_Castle_001_mesh_layer_1),
		GEO_TRANSLATE_NODE_WITH_DL(1, -497, 310, -1717, ccm_dl_Castle_002_mesh_layer_1),
		GEO_TRANSLATE_NODE_WITH_DL(1, 11436, 2704, -7253, ccm_dl_Castle_004_mesh_layer_1),
		GEO_TRANSLATE_NODE_WITH_DL(1, 51, 2723, -1717, ccm_dl_Castle_005_mesh_layer_1),
		GEO_TRANSLATE_NODE_WITH_DL(1, 2264, 2646, -1717, ccm_dl_Castle_006_mesh_layer_1),
		GEO_TRANSLATE_NODE_WITH_DL(1, 1131, 2760, -3149, ccm_dl_Castle_007_mesh_layer_1),
		GEO_TRANSLATE_NODE_WITH_DL(1, -914, 2760, -143, ccm_dl_Castle_008_mesh_layer_1),
		GEO_TRANSLATE_NODE_WITH_DL(1, 10774, 2723, -2982, ccm_dl_Castle_009_mesh_layer_1),
		GEO_TRANSLATE_NODE_WITH_DL(1, 10924, 2723, -8010, ccm_dl_Castle_010_mesh_layer_1),
		GEO_TRANSLATE_NODE_WITH_DL(1, 13384, 2689, -12911, ccm_dl_Castle_011_mesh_layer_1),
		GEO_TRANSLATE_NODE_WITH_DL(1, 14919, 2723, -13094, ccm_dl_Castle_012_mesh_layer_1),
		GEO_TRANSLATE_NODE_WITH_DL(1, 16301, 2723, -12677, ccm_dl_Castle_013_mesh_layer_1),
		GEO_TRANSLATE_NODE_WITH_DL(1, 16977, 2723, -9538, ccm_dl_Castle_014_mesh_layer_1),
		GEO_TRANSLATE_NODE_WITH_DL(1, 17220, 2723, -5776, ccm_dl_Castle_015_mesh_layer_1),
		GEO_TRANSLATE_NODE_WITH_DL(5, 14919, 4700, -5710, ccm_dl_falling_lava_mesh_layer_5),
		GEO_TRANSLATE_NODE_WITH_DL(5, -1489, 4700, -6652, ccm_dl_falling_lava_001_mesh_layer_5),
		GEO_TRANSLATE_NODE_WITH_DL(5, -431, 4700, 2590, ccm_dl_falling_lava_002_mesh_layer_5),
		GEO_TRANSLATE_NODE_WITH_DL(5, 8312, 4700, -2862, ccm_dl_falling_lava_003_mesh_layer_5),
		GEO_TRANSLATE_NODE_WITH_DL(5, 17201, 4700, -13883, ccm_dl_falling_lava_004_mesh_layer_5),
		GEO_TRANSLATE_NODE_WITH_DL(1, -9136, 2127, 6238, ccm_dl_Ground_mesh_layer_1),
		GEO_TRANSLATE_NODE_WITH_DL(1, -13841, 2127, -4276, ccm_dl_Ground_002_mesh_layer_1),
		GEO_TRANSLATE_NODE_WITH_DL(1, -9065, 2127, 2073, ccm_dl_Ground_003_mesh_layer_1),
		GEO_TRANSLATE_NODE_WITH_DL(1, -12651, 2127, -834, ccm_dl_Ground_004_mesh_layer_1),
		GEO_TRANSLATE_NODE_WITH_DL(1, -7371, 2127, -4565, ccm_dl_Ground_005_mesh_layer_1),
		GEO_TRANSLATE_NODE_WITH_DL(1, 0, 310, 0, ccm_dl_Lava_mesh_layer_1),
	GEO_CLOSE_NODE(),
	GEO_RETURN(),
};
const GeoLayout ccm_area_1[] = {
	GEO_NODE_SCREEN_AREA(10, SCREEN_WIDTH/2, SCREEN_HEIGHT/2, SCREEN_WIDTH/2, SCREEN_HEIGHT/2),
	GEO_OPEN_NODE(),
		GEO_ZBUFFER(0),
		GEO_OPEN_NODE(),
			GEO_NODE_ORTHO(100.0000),
			GEO_OPEN_NODE(),
				GEO_BACKGROUND(BACKGROUND_FLAMING_SKY, geo_skybox_main),
			GEO_CLOSE_NODE(),
		GEO_CLOSE_NODE(),
		GEO_ZBUFFER(1),
		GEO_OPEN_NODE(),
			GEO_CAMERA_FRUSTUM_WITH_FUNC(45.0000, 100, 30000, geo_camera_fov),
			GEO_OPEN_NODE(),
				GEO_CAMERA(CAMERA_MODE_8_DIRECTIONS, 0, 0, 0, 0, -100, 0, geo_camera_main),
				GEO_OPEN_NODE(),
					GEO_BRANCH(1, ccm_area_1_geo),
					GEO_RENDER_OBJ(),
					GEO_ASM(ENVFX_MODE_NONE, geo_envfx_main),
				GEO_CLOSE_NODE(),
			GEO_CLOSE_NODE(),
		GEO_CLOSE_NODE(),
		GEO_DISPLAY_LIST(1, ccm_dl_material_revert_render_settings),
		GEO_DISPLAY_LIST(5, ccm_dl_material_revert_render_settings),
	GEO_CLOSE_NODE(),
	GEO_END(),
};
