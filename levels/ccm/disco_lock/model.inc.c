Lights1 disco_lock_Lock_002_lights = gdSPDefLights1(
	0x7F, 0x7F, 0x7F,
	0xFE, 0xFE, 0xFE, 0x28, 0x28, 0x28);

Gfx disco_lock_lock_ia8_aligner[] = {gsSPEndDisplayList()};
u8 disco_lock_lock_ia8[] = {
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0xc0, 0xc0, 0xc0, 0xc0, 
	0xb0, 0xb0, 0xb0, 0xb0, 0xd0, 0xd0, 0xd0, 0xd0, 
	0xc0, 0xc0, 0xc0, 0xc0, 0xd0, 0xd0, 0xd0, 0xd0, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0xc0, 0xc0, 0xc0, 0xc0, 
	0xb0, 0xb0, 0xb0, 0xb0, 0xd0, 0xd0, 0xaf, 0xaf, 
	0xaf, 0xaf, 0xaf, 0xaf, 0xaf, 0xaf, 0xcf, 0xcf, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0xc0, 0xc0, 0xc0, 0xc0, 
	0xb0, 0xb0, 0xbf, 0xbf, 0xcf, 0xcf, 0xaf, 0xcf, 
	0xbf, 0xcf, 0xcf, 0xcf, 0xdf, 0xdf, 0xdf, 0xdf, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0xc0, 0xc0, 0xbf, 0xbf, 
	0xaf, 0xaf, 0xbf, 0xbf, 0xdf, 0xdf, 0xdf, 0xdf, 
	0xcf, 0xcf, 0xcf, 0xcf, 0xcf, 0xaf, 0xaf, 0xaf, 
	0x00, 0x00, 0x00, 0x00, 0xb0, 0xb0, 0xb0, 0xb0, 
	0xb0, 0xb0, 0xb0, 0xb0, 0xbf, 0xbf, 0xaf, 0xaf, 
	0xaf, 0xaf, 0xbf, 0xdf, 0xdf, 0xdf, 0xbf, 0xbf, 
	0xaf, 0xaf, 0xcf, 0xcf, 0xaf, 0xaf, 0xaf, 0xaf, 
	0x00, 0x00, 0x00, 0x00, 0xb0, 0xb0, 0xb0, 0xb0, 
	0xb0, 0xb0, 0xbf, 0xbf, 0xaf, 0xaf, 0xaf, 0xbf, 
	0xcf, 0xcf, 0xdf, 0xcf, 0xbf, 0xbf, 0xaf, 0xaf, 
	0xaf, 0xaf, 0xcf, 0xcf, 0xcf, 0xaf, 0xaf, 0xcf, 
	0x00, 0x00, 0x00, 0x00, 0xb0, 0xb0, 0xb0, 0xb0, 
	0xbf, 0xbf, 0xaf, 0xbf, 0xbf, 0xcf, 0xdf, 0xdf, 
	0xdf, 0xcf, 0xcf, 0xbf, 0xbf, 0xaf, 0x8f, 0xdf, 
	0xef, 0xcf, 0xaf, 0xcf, 0xcf, 0xcf, 0x8f, 0xaf, 
	0x00, 0x00, 0x00, 0x00, 0xb0, 0xb0, 0xb0, 0xbf, 
	0xbf, 0xaf, 0xaf, 0xbf, 0xcf, 0xdf, 0xcf, 0xbf, 
	0xaf, 0xaf, 0xaf, 0xbf, 0xbf, 0xbf, 0xaf, 0x8f, 
	0xaf, 0xaf, 0xaf, 0xbf, 0xcf, 0xcf, 0xcf, 0xbf, 
	0xb0, 0xb0, 0xb0, 0xb0, 0xd0, 0xd0, 0xcf, 0xbf, 
	0xaf, 0xbf, 0xbf, 0xcf, 0xdf, 0xbf, 0xbf, 0x7f, 
	0xaf, 0xef, 0xef, 0xbf, 0xbf, 0xcf, 0xcf, 0xaf, 
	0xaf, 0xbf, 0xbf, 0xbf, 0xbf, 0xbf, 0xbf, 0xbf, 
	0xb0, 0xb0, 0xb0, 0xb0, 0xd0, 0xbf, 0xbf, 0xbf, 
	0xcf, 0xcf, 0xcf, 0xcf, 0xbf, 0xbf, 0xbf, 0x7f, 
	0xaf, 0xbf, 0xbf, 0xaf, 0xbf, 0xcf, 0xcf, 0xcf, 
	0xcf, 0xbf, 0xbf, 0xbf, 0xbf, 0xbf, 0xbf, 0xbf, 
	0xb0, 0xb0, 0xb0, 0xb0, 0xcf, 0xbf, 0xcf, 0xdf, 
	0xcf, 0xcf, 0xcf, 0xbf, 0xbf, 0xbf, 0xbf, 0xbf, 
	0xbf, 0xaf, 0xaf, 0xbf, 0xcf, 0xcf, 0xcf, 0xcf, 
	0x9f, 0x9f, 0x9f, 0xcf, 0xcf, 0xcf, 0xbf, 0xbf, 
	0xb0, 0xb0, 0xb0, 0xbf, 0xcf, 0xbf, 0xdf, 0xdf, 
	0xbf, 0xbf, 0x8f, 0xaf, 0xbf, 0xdf, 0xbf, 0xbf, 
	0xbf, 0xcf, 0xcf, 0xbf, 0xcf, 0xcf, 0xcf, 0x9f, 
	0x9f, 0x9f, 0x9f, 0x9f, 0x9f, 0xcf, 0xcf, 0xcf, 
	0xd0, 0xd0, 0xd0, 0xbf, 0xbf, 0xbf, 0xdf, 0xbf, 
	0xaf, 0xaf, 0x9f, 0x6f, 0xbf, 0xdf, 0xbf, 0x9f, 
	0xbf, 0xbf, 0xbf, 0xbf, 0xbf, 0xbf, 0xbf, 0xcf, 
	0x9f, 0x9f, 0x9f, 0x9f, 0x9f, 0x9f, 0xbf, 0xbf, 
	0xd0, 0xd0, 0xbf, 0xcf, 0xbf, 0xdf, 0xbf, 0xaf, 
	0xaf, 0xaf, 0xaf, 0x9f, 0x9f, 0x9f, 0x9f, 0xbf, 
	0xbf, 0xbf, 0xbf, 0xbf, 0xbf, 0xbf, 0xbf, 0xbf, 
	0xbf, 0xbf, 0x9f, 0x9f, 0x9f, 0x9f, 0x9f, 0xbf, 
	0xd0, 0xd0, 0xbf, 0xcf, 0xdf, 0xdf, 0xbf, 0x8f, 
	0xaf, 0xaf, 0xaf, 0xaf, 0xbf, 0xbf, 0xbf, 0xbf, 
	0xbf, 0xbf, 0xbf, 0xbf, 0xbf, 0xbf, 0xbf, 0xbf, 
	0xbf, 0xbf, 0xbf, 0xbf, 0x9f, 0x9f, 0x9f, 0x9f, 
	0xd0, 0xd0, 0xbf, 0xdf, 0xdf, 0xdf, 0xaf, 0x8f, 
	0x9f, 0x9f, 0x9f, 0xdf, 0xdf, 0xbf, 0xbf, 0xbf, 
	0xbf, 0xbf, 0xbf, 0xbf, 0xbf, 0xbf, 0xbf, 0xbf, 
	0xbf, 0xbf, 0xbf, 0xbf, 0xbf, 0x9f, 0x9f, 0x9f, 
	0xd0, 0xd0, 0xcf, 0xdf, 0xef, 0xef, 0xaf, 0x8f, 
	0x9f, 0x8f, 0x8f, 0xbf, 0xbf, 0x9f, 0x9f, 0xbf, 
	0xbf, 0xbf, 0xbf, 0xbf, 0xbf, 0xbf, 0xbf, 0xbf, 
	0xbf, 0xbf, 0xbf, 0x9f, 0x9f, 0x9f, 0x9f, 0x9f, 
	0xd0, 0xd0, 0xcf, 0xcf, 0xef, 0xef, 0xcf, 0x8f, 
	0x9f, 0xbf, 0x8f, 0x8f, 0x9f, 0x9f, 0xbf, 0xbf, 
	0xbf, 0xbf, 0xbf, 0xbf, 0xbf, 0xbf, 0xbf, 0xbf, 
	0xbf, 0x9f, 0x9f, 0x9f, 0x9f, 0x9f, 0x9f, 0x9f, 
	0xd0, 0xd0, 0xbf, 0xcf, 0xcf, 0xcf, 0xef, 0xaf, 
	0x9f, 0x9f, 0xbf, 0xbf, 0xbf, 0xbf, 0xbf, 0xbf, 
	0xbf, 0xbf, 0xbf, 0xbf, 0xbf, 0xbf, 0xbf, 0xbf, 
	0x9f, 0x9f, 0x9f, 0x9f, 0x9f, 0x9f, 0xbf, 0xbf, 
	0xd0, 0xd0, 0xbf, 0xbf, 0xcf, 0xcf, 0xef, 0xef, 
	0x9f, 0x9f, 0x9f, 0x7f, 0xcf, 0xdf, 0xdf, 0xbf, 
	0xaf, 0xaf, 0xbf, 0xbf, 0xbf, 0xbf, 0xbf, 0x9f, 
	0x9f, 0x9f, 0x9f, 0x9f, 0xbf, 0xbf, 0xbf, 0xbf, 
	0xb0, 0xb0, 0xb0, 0xbf, 0xcf, 0xcf, 0xcf, 0xdf, 
	0xbf, 0x9f, 0x8f, 0x8f, 0x9f, 0xcf, 0x9f, 0x9f, 
	0xaf, 0xaf, 0xaf, 0xbf, 0xbf, 0xbf, 0xbf, 0xbf, 
	0x9f, 0x9f, 0xbf, 0xbf, 0xbf, 0xaf, 0xaf, 0xaf, 
	0xb0, 0xb0, 0xb0, 0xb0, 0xcf, 0xcf, 0xdf, 0xcf, 
	0xbf, 0xbf, 0xaf, 0x9f, 0x9f, 0x7f, 0x9f, 0xaf, 
	0xaf, 0xaf, 0xaf, 0xaf, 0xaf, 0xaf, 0xaf, 0xaf, 
	0xaf, 0xaf, 0xaf, 0xaf, 0xaf, 0xaf, 0xaf, 0xaf, 
	0xb0, 0xb0, 0xb0, 0xb0, 0xd0, 0xdf, 0xdf, 0xcf, 
	0xbf, 0xbf, 0xbf, 0xaf, 0xaf, 0xaf, 0xaf, 0x9f, 
	0xcf, 0xcf, 0xef, 0xbf, 0xaf, 0xaf, 0xaf, 0xaf, 
	0xaf, 0xaf, 0xaf, 0xaf, 0xaf, 0xaf, 0xaf, 0xaf, 
	0xb0, 0xb0, 0xb0, 0xb0, 0xd0, 0xd0, 0xdf, 0xdf, 
	0xbf, 0xbf, 0xbf, 0xbf, 0xcf, 0xaf, 0xaf, 0x7f, 
	0x9f, 0xcf, 0xcf, 0x9f, 0xaf, 0xaf, 0x9f, 0x9f, 
	0x9f, 0x9f, 0x9f, 0x8f, 0x8f, 0x9f, 0x9f, 0x9f, 
	0x00, 0x00, 0x00, 0x00, 0xc0, 0xc0, 0xc0, 0xcf, 
	0xcf, 0xcf, 0xbf, 0xbf, 0xbf, 0xcf, 0xbf, 0x9f, 
	0x7f, 0x7f, 0x7f, 0x9f, 0xaf, 0xaf, 0xaf, 0xaf, 
	0xdf, 0xbf, 0xaf, 0xaf, 0x9f, 0x9f, 0x9f, 0x9f, 
	0x00, 0x00, 0x00, 0x00, 0xc0, 0xc0, 0xc0, 0xc0, 
	0xcf, 0xcf, 0xcf, 0xbf, 0x9f, 0x9f, 0xbf, 0xcf, 
	0xbf, 0xaf, 0xaf, 0xaf, 0xaf, 0x8f, 0x8f, 0xbf, 
	0xdf, 0xbf, 0x8f, 0xaf, 0xaf, 0xaf, 0x9f, 0xcf, 
	0x00, 0x00, 0x00, 0x00, 0xc0, 0xc0, 0xc0, 0xc0, 
	0xc0, 0xc0, 0xcf, 0xcf, 0xcf, 0xbf, 0xaf, 0xaf, 
	0xaf, 0xbf, 0xbf, 0xaf, 0xaf, 0xaf, 0x7f, 0x7f, 
	0x8f, 0x8f, 0x8f, 0xaf, 0xaf, 0x9f, 0x8f, 0xaf, 
	0x00, 0x00, 0x00, 0x00, 0xc0, 0xc0, 0xc0, 0xc0, 
	0xc0, 0xc0, 0xc0, 0xc0, 0xcf, 0xcf, 0xcf, 0xbf, 
	0xaf, 0xaf, 0xaf, 0xbf, 0xbf, 0xbf, 0xaf, 0xaf, 
	0xaf, 0xaf, 0xaf, 0xaf, 0x9f, 0x9f, 0x8f, 0x8f, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0xd0, 0xd0, 0xcf, 0xcf, 
	0xcf, 0xcf, 0xcf, 0xcf, 0xcf, 0xcf, 0xcf, 0xcf, 
	0xcf, 0xcf, 0xbf, 0xbf, 0xaf, 0xaf, 0xaf, 0xaf, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0xd0, 0xd0, 0xd0, 0xd0, 
	0xc0, 0xc0, 0xbf, 0xcf, 0xdf, 0xdf, 0xdf, 0xdf, 
	0xdf, 0xcf, 0xcf, 0xcf, 0xdf, 0xdf, 0xdf, 0xdf, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0xd0, 0xd0, 0xd0, 0xd0, 
	0xc0, 0xc0, 0xc0, 0xc0, 0xd0, 0xd0, 0xcf, 0xcf, 
	0xcf, 0xcf, 0xdf, 0xdf, 0xdf, 0xdf, 0xdf, 0xdf, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0xd0, 0xd0, 0xd0, 0xd0, 
	0xc0, 0xc0, 0xc0, 0xc0, 0xd0, 0xd0, 0xd0, 0xd0, 
	0xd0, 0xd0, 0xd0, 0xd0, 0xd0, 0xd0, 0xd0, 0xd0, 
	
};

Vtx disco_lock_Lock_mesh_vtx_0[25] = {
	{{{-209, 0, -18},0, {327, 590},{0x53, 0x53, 0x53, 0xFF}}},
	{{{-147, -147, -18},0, {327, 590},{0x53, 0x53, 0x53, 0xFF}}},
	{{{-147, -147, 14},0, {327, 590},{0x53, 0x53, 0x53, 0xFF}}},
	{{{0, -209, 14},0, {327, 590},{0x53, 0x53, 0x53, 0xFF}}},
	{{{0, -209, -18},0, {327, 590},{0x53, 0x53, 0x53, 0xFF}}},
	{{{147, -147, 14},0, {327, 590},{0x53, 0x53, 0x53, 0xFF}}},
	{{{147, -147, -18},0, {327, 590},{0x53, 0x53, 0x53, 0xFF}}},
	{{{209, 0, 14},0, {327, 590},{0x53, 0x53, 0x53, 0xFF}}},
	{{{209, 0, -18},0, {327, 590},{0x53, 0x53, 0x53, 0xFF}}},
	{{{147, 147, 14},0, {327, 590},{0x53, 0x53, 0x53, 0xFF}}},
	{{{147, 147, -18},0, {327, 590},{0x53, 0x53, 0x53, 0xFF}}},
	{{{0, 209, 14},0, {327, 590},{0x53, 0x53, 0x53, 0xFF}}},
	{{{0, 209, -18},0, {327, 590},{0x53, 0x53, 0x53, 0xFF}}},
	{{{-147, 147, 14},0, {327, 590},{0x53, 0x53, 0x53, 0xFF}}},
	{{{-147, 147, -18},0, {327, 590},{0x53, 0x53, 0x53, 0xFF}}},
	{{{-209, 0, 14},0, {327, 590},{0x53, 0x53, 0x53, 0xFF}}},
	{{{-147, 147, 14},0, {309, 147},{0x53, 0x53, 0x53, 0xFF}}},
	{{{-209, 0, 14},0, {20, 496},{0x53, 0x53, 0x53, 0xFF}}},
	{{{0, 0, 37},0, {1008, 496},{0x53, 0x53, 0x53, 0xFF}}},
	{{{-147, -147, 14},0, {309, 845},{0x53, 0x53, 0x53, 0xFF}}},
	{{{0, -209, 14},0, {1008, 990},{0x53, 0x53, 0x53, 0xFF}}},
	{{{147, -147, 14},0, {1707, 845},{0x53, 0x53, 0x53, 0xFF}}},
	{{{209, 0, 14},0, {1996, 496},{0x53, 0x53, 0x53, 0xFF}}},
	{{{147, 147, 14},0, {1707, 147},{0x53, 0x53, 0x53, 0xFF}}},
	{{{0, 209, 14},0, {1008, 2},{0x53, 0x53, 0x53, 0xFF}}},
};

Gfx disco_lock_Lock_mesh_tri_0[] = {
	gsSPVertex(disco_lock_Lock_mesh_vtx_0 + 0, 25, 0),
	gsSP2Triangles(0, 1, 2, 0, 1, 3, 2, 0),
	gsSP2Triangles(1, 4, 3, 0, 4, 5, 3, 0),
	gsSP2Triangles(4, 6, 5, 0, 6, 7, 5, 0),
	gsSP2Triangles(6, 8, 7, 0, 8, 9, 7, 0),
	gsSP2Triangles(8, 10, 9, 0, 10, 11, 9, 0),
	gsSP2Triangles(10, 12, 11, 0, 12, 13, 11, 0),
	gsSP2Triangles(12, 14, 13, 0, 14, 15, 13, 0),
	gsSP2Triangles(14, 0, 15, 0, 0, 2, 15, 0),
	gsSP2Triangles(16, 17, 18, 0, 17, 19, 18, 0),
	gsSP2Triangles(19, 20, 18, 0, 20, 21, 18, 0),
	gsSP2Triangles(21, 22, 18, 0, 22, 23, 18, 0),
	gsSP2Triangles(23, 24, 18, 0, 24, 16, 18, 0),
	gsSPEndDisplayList(),
};


Gfx mat_disco_lock_Lock_002[] = {
	gsDPPipeSync(),
	gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, 1, TEXEL0, 0, SHADE, 0, 0, 0, 0, 1),
	gsSPClearGeometryMode(G_LIGHTING),
	gsSPTexture(65535, 65535, 0, 0, 1),
	gsDPTileSync(),
	gsDPSetTextureImage(G_IM_FMT_IA, G_IM_SIZ_8b, 32, disco_lock_lock_ia8),
	gsDPSetTile(G_IM_FMT_IA, G_IM_SIZ_8b, 4, 0, 7, 0, G_TX_WRAP | G_TX_NOMIRROR, 5, 0, G_TX_WRAP | G_TX_MIRROR, 5, 0),
	gsDPLoadSync(),
	gsDPLoadTile(7, 0, 0, 124, 124),
	gsDPPipeSync(),
	gsDPSetTile(G_IM_FMT_IA, G_IM_SIZ_8b, 4, 0, 0, 0, G_TX_WRAP | G_TX_NOMIRROR, 5, 0, G_TX_WRAP | G_TX_MIRROR, 5, 0),
	gsDPSetTileSize(0, 0, 0, 124, 124),
	gsSPSetLights1(disco_lock_Lock_002_lights),
	gsSPEndDisplayList(),
};

Gfx mat_revert_disco_lock_Lock_002[] = {
	gsDPPipeSync(),
	gsSPSetGeometryMode(G_LIGHTING),
	gsSPEndDisplayList(),
};

Gfx disco_lock_Lock_mesh[] = {
	gsSPDisplayList(mat_disco_lock_Lock_002),
	gsSPDisplayList(disco_lock_Lock_mesh_tri_0),
	gsSPDisplayList(mat_revert_disco_lock_Lock_002),
	gsSPEndDisplayList(),
};

Gfx disco_lock_material_revert_render_settings[] = {
	gsDPPipeSync(),
	gsSPSetGeometryMode(G_LIGHTING),
	gsSPClearGeometryMode(G_TEXTURE_GEN),
	gsDPSetCombineLERP(0, 0, 0, SHADE, 0, 0, 0, ENVIRONMENT, 0, 0, 0, SHADE, 0, 0, 0, ENVIRONMENT),
	gsSPTexture(65535, 65535, 0, 0, 0),
	gsDPSetEnvColor(255, 255, 255, 255),
	gsDPSetAlphaCompare(G_AC_NONE),
	gsSPEndDisplayList(),
};

