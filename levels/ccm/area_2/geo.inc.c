#include "src/game/envfx_snow.h"

const GeoLayout ccm_area_2_geo[] = {
	GEO_NODE_START(),
	GEO_OPEN_NODE(),
		GEO_TRANSLATE_NODE_WITH_DL(1, 0, -75, 420, ccm_dl_castle_mesh_layer_1),
		GEO_TRANSLATE_NODE_WITH_DL(1, 0, 500, 0, ccm_dl_castle_pillars_mesh_layer_1),
		GEO_OPEN_NODE(),
			GEO_DISPLAY_LIST(2, ccm_dl_castle_pillars_mesh_layer_2),
		GEO_CLOSE_NODE(),
		GEO_DISPLAY_LIST(1, ccm_dl_lava_mesh_layer_1),
		GEO_TRANSLATE_NODE_WITH_DL(4, 4, 2446, -3454, ccm_dl_Library_001_mesh_layer_4),
		GEO_TRANSLATE_NODE_WITH_DL(1, 0, 869, -2066, ccm_dl_Pole_mesh_layer_1),
		GEO_TRANSLATE_NODE_WITH_DL(1, 0, 141, -1830, ccm_dl_Record_mesh_layer_1),
	GEO_CLOSE_NODE(),
	GEO_RETURN(),
};
const GeoLayout ccm_area_2[] = {
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
				GEO_CAMERA(CAMERA_MODE_8_DIRECTIONS, 65534, 0, 0, 65534, -100, 0, geo_camera_main),
				GEO_OPEN_NODE(),
					GEO_BRANCH(1, ccm_area_2_geo),
					GEO_RENDER_OBJ(),
					GEO_ASM(ENVFX_MODE_NONE, geo_envfx_main),
				GEO_CLOSE_NODE(),
			GEO_CLOSE_NODE(),
		GEO_CLOSE_NODE(),
		GEO_DISPLAY_LIST(1, ccm_dl_material_revert_render_settings),
		GEO_DISPLAY_LIST(4, ccm_dl_material_revert_render_settings),
		GEO_DISPLAY_LIST(2, ccm_dl_material_revert_render_settings),
	GEO_CLOSE_NODE(),
	GEO_END(),
};
