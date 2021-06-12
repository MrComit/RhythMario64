Vtx water_tri_Plane_mesh_vtx_0[4] = {
	{{{-4, -4, 0},0, {-16, 1008},{0x0, 0x0, 0x7F, 0xFF}}},
	{{{324, -4, 0},0, {1008, 1008},{0x0, 0x0, 0x7F, 0xFF}}},
	{{{324, 244, 0},0, {1008, -16},{0x0, 0x0, 0x7F, 0xFF}}},
	{{{-4, 244, 0},0, {-16, -16},{0x0, 0x0, 0x7F, 0xFF}}},
};

Gfx water_tri_Plane_mesh_tri_0[] = {
	gsSPVertex(water_tri_Plane_mesh_vtx_0 + 0, 4, 0),
	gsSP1Triangle(0, 1, 2, 0),
	gsSP1Triangle(0, 2, 3, 0),
	gsSPEndDisplayList(),
};

Gfx mat_water_tri_blue_layer1[] = {
	gsDPPipeSync(),
	gsDPSetCombineLERP(0, 0, 0, ENVIRONMENT, 0, 0, 0, ENVIRONMENT, 0, 0, 0, ENVIRONMENT, 0, 0, 0, ENVIRONMENT),
	gsDPSetRenderMode(G_RM_ZB_XLU_SURF, G_RM_ZB_XLU_SURF2),
	gsSPTexture(65535, 65535, 0, 0, 1),
	gsDPSetEnvColor(63, 192, 254, 31),
	gsSPEndDisplayList(),
};

Gfx mat_revert_water_tri_blue_layer1[] = {
	gsDPPipeSync(),
	gsDPSetRenderMode(G_RM_AA_ZB_OPA_SURF, G_RM_AA_ZB_OPA_SURF2),
	gsSPEndDisplayList(),
};

Gfx water_tri_Plane_mesh[] = {
	gsSPDisplayList(mat_water_tri_blue_layer1),
	gsSPDisplayList(water_tri_Plane_mesh_tri_0),
	gsSPDisplayList(mat_revert_water_tri_blue_layer1),
	gsDPPipeSync(),
	gsSPSetGeometryMode(G_LIGHTING),
	gsSPClearGeometryMode(G_TEXTURE_GEN),
	gsDPSetCombineLERP(0, 0, 0, SHADE, 0, 0, 0, ENVIRONMENT, 0, 0, 0, SHADE, 0, 0, 0, ENVIRONMENT),
	gsSPTexture(65535, 65535, 0, 0, 0),
	gsSPEndDisplayList(),
};

