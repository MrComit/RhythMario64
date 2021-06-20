Lights1 rank_checker_layer1_lights = gdSPDefLights1(
	0x7F, 0x7F, 0x7F,
	0xFE, 0xFE, 0xFE, 0x28, 0x28, 0x28);

Gfx rank_rankcheckerboard_rgba16_aligner[] = {gsSPEndDisplayList()};
u8 rank_rankcheckerboard_rgba16[] = {
	0x04, 0xbf, 0x04, 0xbf, 0x04, 0xbf, 0x04, 0xbf, 
	0x01, 0x7f, 0x01, 0x7f, 0x01, 0x7f, 0x01, 0x7f, 
	0x04, 0xbf, 0x04, 0xbf, 0x04, 0xbf, 0x04, 0xbf, 
	0x01, 0x7f, 0x01, 0x7f, 0x01, 0x7f, 0x01, 0x7f, 
	0x04, 0xbf, 0x04, 0xbf, 0x04, 0xbf, 0x04, 0xbf, 
	0x01, 0x7f, 0x01, 0x7f, 0x01, 0x7f, 0x01, 0x7f, 
	0x04, 0xbf, 0x04, 0xbf, 0x04, 0xbf, 0x04, 0xbf, 
	0x01, 0x7f, 0x01, 0x7f, 0x01, 0x7f, 0x01, 0x7f, 
	0x01, 0x7f, 0x01, 0x7f, 0x01, 0x7f, 0x01, 0x7f, 
	0x04, 0xbf, 0x04, 0xbf, 0x04, 0xbf, 0x04, 0xbf, 
	0x01, 0x7f, 0x01, 0x7f, 0x01, 0x7f, 0x01, 0x7f, 
	0x04, 0xbf, 0x04, 0xbf, 0x04, 0xbf, 0x04, 0xbf, 
	0x01, 0x7f, 0x01, 0x7f, 0x01, 0x7f, 0x01, 0x7f, 
	0x04, 0xbf, 0x04, 0xbf, 0x04, 0xbf, 0x04, 0xbf, 
	0x01, 0x7f, 0x01, 0x7f, 0x01, 0x7f, 0x01, 0x7f, 
	0x04, 0xbf, 0x04, 0xbf, 0x04, 0xbf, 0x04, 0xbf, 
	
};

Vtx rank_screen_mesh_vtx_0[24] = {
	{{{120, 16, 0},0, {-640, 768},{0xFF, 0xFF, 0xFF, 0xBF}}},
	{{{208, 16, 0},0, {768, 768},{0xFF, 0xFF, 0xFF, 0xBF}}},
	{{{208, 104, 0},0, {768, -640},{0xFF, 0xFF, 0xFF, 0xBF}}},
	{{{120, 104, 0},0, {-640, -640},{0xFF, 0xFF, 0xFF, 0xBF}}},
	{{{120, 104, 0},0, {-512, 768},{0xFF, 0xFF, 0xFF, 0xBF}}},
	{{{208, 104, 0},0, {896, 768},{0xFF, 0xFF, 0xFF, 0xBF}}},
	{{{208, 192, 0},0, {896, -640},{0xFF, 0xFF, 0xFF, 0xBF}}},
	{{{120, 192, 0},0, {-512, -640},{0xFF, 0xFF, 0xFF, 0xBF}}},
	{{{32, 104, 0},0, {-640, 768},{0xFF, 0xFF, 0xFF, 0xBF}}},
	{{{120, 104, 0},0, {768, 768},{0xFF, 0xFF, 0xFF, 0xBF}}},
	{{{120, 192, 0},0, {768, -640},{0xFF, 0xFF, 0xFF, 0xBF}}},
	{{{32, 192, 0},0, {-640, -640},{0xFF, 0xFF, 0xFF, 0xBF}}},
	{{{32, 16, 0},0, {-512, 768},{0xFF, 0xFF, 0xFF, 0xBF}}},
	{{{120, 16, 0},0, {896, 768},{0xFF, 0xFF, 0xFF, 0xBF}}},
	{{{120, 104, 0},0, {896, -640},{0xFF, 0xFF, 0xFF, 0xBF}}},
	{{{32, 104, 0},0, {-512, -640},{0xFF, 0xFF, 0xFF, 0xBF}}},
	{{{208, 16, 0},0, {-512, 768},{0xFF, 0xFF, 0xFF, 0xBF}}},
	{{{288, 16, 0},0, {768, 768},{0xFF, 0xFF, 0xFF, 0xBF}}},
	{{{288, 104, 0},0, {768, -640},{0xFF, 0xFF, 0xFF, 0xBF}}},
	{{{208, 104, 0},0, {-512, -640},{0xFF, 0xFF, 0xFF, 0xBF}}},
	{{{208, 104, 0},0, {-384, 768},{0xFF, 0xFF, 0xFF, 0xBF}}},
	{{{288, 104, 0},0, {896, 768},{0xFF, 0xFF, 0xFF, 0xBF}}},
	{{{288, 192, 0},0, {896, -640},{0xFF, 0xFF, 0xFF, 0xBF}}},
	{{{208, 192, 0},0, {-384, -640},{0xFF, 0xFF, 0xFF, 0xBF}}},
};

Gfx rank_screen_mesh_tri_0[] = {
	gsSPVertex(rank_screen_mesh_vtx_0 + 0, 16, 0),
	gsSP1Triangle(0, 1, 2, 0),
	gsSP1Triangle(0, 2, 3, 0),
	gsSP1Triangle(4, 5, 6, 0),
	gsSP1Triangle(4, 6, 7, 0),
	gsSP1Triangle(8, 9, 10, 0),
	gsSP1Triangle(8, 10, 11, 0),
	gsSP1Triangle(12, 13, 14, 0),
	gsSP1Triangle(12, 14, 15, 0),
	gsSPVertex(rank_screen_mesh_vtx_0 + 16, 8, 0),
	gsSP1Triangle(0, 1, 2, 0),
	gsSP1Triangle(0, 2, 3, 0),
	gsSP1Triangle(4, 5, 6, 0),
	gsSP1Triangle(4, 6, 7, 0),
	gsSPEndDisplayList(),
};

Vtx rank_screen_mesh_vtx_1[24] = {
	{{{288, 200, 0},0, {-16, 1008},{0x0, 0x0, 0x7F, 0xBF}}},
	{{{32, 200, 0},0, {-16, 1008},{0x0, 0x0, 0x7F, 0xBF}}},
	{{{32, 192, 0},0, {-16, 1008},{0x0, 0x0, 0x7F, 0xBF}}},
	{{{288, 192, 0},0, {-16, 1008},{0x0, 0x0, 0x7F, 0xBF}}},
	{{{288, 16, 0},0, {-16, 1008},{0x0, 0x0, 0x7F, 0xBF}}},
	{{{32, 16, 0},0, {-16, 1008},{0x0, 0x0, 0x7F, 0xBF}}},
	{{{32, 8, 0},0, {-16, 1008},{0x0, 0x0, 0x7F, 0xBF}}},
	{{{288, 8, 0},0, {-16, 1008},{0x0, 0x0, 0x7F, 0xBF}}},
	{{{24, 16, 0},0, {-16, 1008},{0x0, 0x0, 0x7F, 0xBF}}},
	{{{26, 10, 0},0, {-16, 1008},{0x0, 0x0, 0x7F, 0xBF}}},
	{{{32, 8, 0},0, {-16, 1008},{0x0, 0x0, 0x7F, 0xBF}}},
	{{{32, 16, 0},0, {-16, 1008},{0x0, 0x0, 0x7F, 0xBF}}},
	{{{24, 192, 0},0, {-16, 1008},{0x0, 0x0, 0x7F, 0xBF}}},
	{{{32, 192, 0},0, {-16, 1008},{0x0, 0x0, 0x7F, 0xBF}}},
	{{{32, 200, 0},0, {-16, 1008},{0x0, 0x0, 0x7F, 0xBF}}},
	{{{26, 198, 0},0, {-16, 1008},{0x0, 0x0, 0x7F, 0xBF}}},
	{{{296, 192, 0},0, {-16, 1008},{0x0, 0x0, 0x7F, 0xBF}}},
	{{{294, 198, 0},0, {-16, 1008},{0x0, 0x0, 0x7F, 0xBF}}},
	{{{288, 200, 0},0, {-16, 1008},{0x0, 0x0, 0x7F, 0xBF}}},
	{{{288, 192, 0},0, {-16, 1008},{0x0, 0x0, 0x7F, 0xBF}}},
	{{{296, 16, 0},0, {-16, 1008},{0x0, 0x0, 0x7F, 0xBF}}},
	{{{288, 16, 0},0, {-16, 1008},{0x0, 0x0, 0x7F, 0xBF}}},
	{{{288, 8, 0},0, {-16, 1008},{0x0, 0x0, 0x7F, 0xBF}}},
	{{{294, 10, 0},0, {-16, 1008},{0x0, 0x0, 0x7F, 0xBF}}},
};

Gfx rank_screen_mesh_tri_1[] = {
	gsSPVertex(rank_screen_mesh_vtx_1 + 0, 16, 0),
	gsSP1Triangle(0, 1, 2, 0),
	gsSP1Triangle(0, 2, 3, 0),
	gsSP1Triangle(4, 5, 6, 0),
	gsSP1Triangle(4, 6, 7, 0),
	gsSP1Triangle(8, 9, 10, 0),
	gsSP1Triangle(8, 10, 11, 0),
	gsSP1Triangle(12, 8, 11, 0),
	gsSP1Triangle(12, 11, 13, 0),
	gsSP1Triangle(14, 12, 13, 0),
	gsSP1Triangle(14, 15, 12, 0),
	gsSPVertex(rank_screen_mesh_vtx_1 + 16, 8, 0),
	gsSP1Triangle(0, 1, 2, 0),
	gsSP1Triangle(0, 2, 3, 0),
	gsSP1Triangle(3, 4, 0, 0),
	gsSP1Triangle(3, 5, 4, 0),
	gsSP1Triangle(6, 4, 5, 0),
	gsSP1Triangle(6, 7, 4, 0),
	gsSPEndDisplayList(),
};

Gfx mat_rank_checker_layer1[] = {
	gsDPPipeSync(),
	gsDPSetCombineLERP(0, 0, 0, TEXEL0, 0, 0, 0, SHADE, 0, 0, 0, TEXEL0, 0, 0, 0, SHADE),
	gsSPClearGeometryMode(G_LIGHTING),
	gsDPSetTextureFilter(G_TF_POINT),
	gsDPSetRenderMode(G_RM_ZB_XLU_SURF, G_RM_ZB_XLU_SURF2),
	gsSPTexture(65535, 65535, 0, 0, 1),
	gsDPTileSync(),
	gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_16b_LOAD_BLOCK, 1, rank_rankcheckerboard_rgba16),
	gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b_LOAD_BLOCK, 0, 0, 7, 0, G_TX_WRAP | G_TX_NOMIRROR, 3, 0, G_TX_WRAP | G_TX_NOMIRROR, 3, 0),
	gsDPLoadSync(),
	gsDPLoadBlock(7, 0, 0, 63, 1024),
	gsDPPipeSync(),
	gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 2, 0, 0, 0, G_TX_WRAP | G_TX_NOMIRROR, 3, 0, G_TX_WRAP | G_TX_NOMIRROR, 3, 0),
	gsDPSetTileSize(0, 0, 0, 28, 28),
	gsSPSetLights1(rank_checker_layer1_lights),
	gsSPEndDisplayList(),
};

Gfx mat_revert_rank_checker_layer1[] = {
	gsDPPipeSync(),
	gsSPSetGeometryMode(G_LIGHTING),
	gsDPSetTextureFilter(G_TF_BILERP),
	gsDPSetRenderMode(G_RM_AA_ZB_OPA_SURF, G_RM_AA_ZB_OPA_SURF2),
	gsSPEndDisplayList(),
};

Gfx mat_rank_black_layer1[] = {
	gsDPPipeSync(),
	gsDPSetCombineLERP(0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 1),
	gsDPSetRenderMode(G_RM_AA_ZB_OPA_SURF, G_RM_AA_ZB_OPA_SURF2),
	gsSPTexture(65535, 65535, 0, 0, 1),
	gsSPEndDisplayList(),
};

Gfx mat_revert_rank_black_layer1[] = {
	gsDPPipeSync(),
	gsDPSetRenderMode(G_RM_AA_ZB_OPA_SURF, G_RM_AA_ZB_OPA_SURF2),
	gsSPEndDisplayList(),
};

Gfx rank_screen_mesh[] = {
	gsSPDisplayList(mat_rank_checker_layer1),
	gsSPDisplayList(rank_screen_mesh_tri_0),
	gsSPDisplayList(mat_revert_rank_checker_layer1),
	gsSPDisplayList(mat_rank_black_layer1),
	gsSPDisplayList(rank_screen_mesh_tri_1),
	gsSPDisplayList(mat_revert_rank_black_layer1),
	gsDPPipeSync(),
	gsSPSetGeometryMode(G_LIGHTING),
	gsSPClearGeometryMode(G_TEXTURE_GEN),
	gsDPSetCombineLERP(0, 0, 0, SHADE, 0, 0, 0, ENVIRONMENT, 0, 0, 0, SHADE, 0, 0, 0, ENVIRONMENT),
	gsSPTexture(65535, 65535, 0, 0, 0),
	gsSPEndDisplayList(),
};

