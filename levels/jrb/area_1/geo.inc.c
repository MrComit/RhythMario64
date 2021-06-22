#include "src/game/envfx_snow.h"

const GeoLayout jrb_area_1_geo[] = {
	GEO_NODE_START(),
	GEO_OPEN_NODE(),
		GEO_DISPLAY_LIST(1, jrb_dl_main_mesh_layer_1),
		GEO_DISPLAY_LIST(5, jrb_dl_main_mesh_layer_5),
		GEO_DISPLAY_LIST(4, jrb_dl_main_mesh_layer_4),
		GEO_DISPLAY_LIST(1, jrb_dl_nocol_mesh_layer_1),
		GEO_DISPLAY_LIST(5, jrb_dl_nocol_mesh_layer_5),
		GEO_TRANSLATE_NODE_WITH_DL(1, 5000, 7500, -9000, jrb_dl_sub_mesh_layer_1),
		GEO_OPEN_NODE(),
			GEO_DISPLAY_LIST(4, jrb_dl_sub_mesh_layer_4),
		GEO_CLOSE_NODE(),
	GEO_CLOSE_NODE(),
	GEO_RETURN(),
};
const GeoLayout jrb_area_1[] = {
	GEO_NODE_SCREEN_AREA(10, SCREEN_WIDTH/2, SCREEN_HEIGHT/2, SCREEN_WIDTH/2, SCREEN_HEIGHT/2),
	GEO_OPEN_NODE(),
		GEO_ZBUFFER(0),
		GEO_OPEN_NODE(),
			GEO_NODE_ORTHO(100.0000),
			GEO_OPEN_NODE(),
				GEO_BACKGROUND(BACKGROUND_UNDERWATER_CITY, geo_skybox_main),
			GEO_CLOSE_NODE(),
		GEO_CLOSE_NODE(),
		GEO_ZBUFFER(1),
		GEO_OPEN_NODE(),
			GEO_CAMERA_FRUSTUM_WITH_FUNC(45.0000, 100, 30000, geo_camera_fov),
			GEO_OPEN_NODE(),
				GEO_CAMERA(CAMERA_MODE_8_DIRECTIONS, 0, 0, 0, 0, -500, 0, geo_camera_main),
				GEO_OPEN_NODE(),
					GEO_BRANCH(1, jrb_area_1_geo),
					GEO_RENDER_OBJ(),
					GEO_ASM(ENVFX_MODE_NONE, geo_envfx_main),
				GEO_CLOSE_NODE(),
			GEO_CLOSE_NODE(),
		GEO_CLOSE_NODE(),
		GEO_DISPLAY_LIST(5, jrb_dl_material_revert_render_settings),
		GEO_DISPLAY_LIST(4, jrb_dl_material_revert_render_settings),
		GEO_DISPLAY_LIST(1, jrb_dl_material_revert_render_settings),
	GEO_CLOSE_NODE(),
	GEO_END(),
};
