Vtx barrier_Border_mesh_layer_5_vtx_cull[8] = {
	{{{0, 0, -9027},0, {-16, -16},{0x0, 0x0, 0x0, 0x0}}},
	{{{0, 0, 9027},0, {-16, -16},{0x0, 0x0, 0x0, 0x0}}},
	{{{0, 9983, 9027},0, {-16, -16},{0x0, 0x0, 0x0, 0x0}}},
	{{{0, 9983, -9027},0, {-16, -16},{0x0, 0x0, 0x0, 0x0}}},
	{{{0, 0, -9027},0, {-16, -16},{0x0, 0x0, 0x0, 0x0}}},
	{{{0, 0, 9027},0, {-16, -16},{0x0, 0x0, 0x0, 0x0}}},
	{{{0, 9983, 9027},0, {-16, -16},{0x0, 0x0, 0x0, 0x0}}},
	{{{0, 9983, -9027},0, {-16, -16},{0x0, 0x0, 0x0, 0x0}}},
};

Vtx barrier_Border_mesh_layer_5_vtx_0[4] = {
	{{{0, 9983, 9027},0, {-16, 1008},{0x7F, 0x0, 0x0, 0xFF}}},
	{{{0, 0, 9027},0, {1008, 1008},{0x7F, 0x0, 0x0, 0xFF}}},
	{{{0, 0, -9027},0, {1008, -16},{0x7F, 0x0, 0x0, 0xFF}}},
	{{{0, 9983, -9027},0, {-16, -16},{0x7F, 0x0, 0x0, 0xFF}}},
};

Gfx barrier_Border_mesh_layer_5_tri_0[] = {
	gsSPVertex(barrier_Border_mesh_layer_5_vtx_0 + 0, 4, 0),
	gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
	gsSPEndDisplayList(),
};


Gfx mat_barrier_Border_001[] = {
	gsDPPipeSync(),
	gsDPSetCombineLERP(0, 0, 0, ENVIRONMENT, 0, 0, 0, ENVIRONMENT, 0, 0, 0, ENVIRONMENT, 0, 0, 0, ENVIRONMENT),
	gsSPClearGeometryMode(G_CULL_BACK),
	gsSPTexture(65535, 65535, 0, 0, 1),
	gsDPSetEnvColor(118, 189, 254, 127),
	gsSPEndDisplayList(),
};

Gfx mat_revert_barrier_Border_001[] = {
	gsDPPipeSync(),
	gsSPSetGeometryMode(G_CULL_BACK),
	gsSPEndDisplayList(),
};

Gfx barrier_Border_mesh_layer_5[] = {
	gsSPClearGeometryMode(G_LIGHTING),
	gsSPVertex(barrier_Border_mesh_layer_5_vtx_cull + 0, 8, 0),
	gsSPSetGeometryMode(G_LIGHTING),
	gsSPCullDisplayList(0, 7),
	gsSPDisplayList(mat_barrier_Border_001),
	gsSPDisplayList(barrier_Border_mesh_layer_5_tri_0),
	gsSPDisplayList(mat_revert_barrier_Border_001),
	gsSPEndDisplayList(),
};

Gfx barrier_material_revert_render_settings[] = {
	gsDPPipeSync(),
	gsSPSetGeometryMode(G_LIGHTING),
	gsSPClearGeometryMode(G_TEXTURE_GEN),
	gsDPSetCombineLERP(0, 0, 0, SHADE, 0, 0, 0, ENVIRONMENT, 0, 0, 0, SHADE, 0, 0, 0, ENVIRONMENT),
	gsSPTexture(65535, 65535, 0, 0, 0),
	gsDPSetEnvColor(255, 255, 255, 255),
	gsDPSetAlphaCompare(G_AC_NONE),
	gsSPEndDisplayList(),
};

