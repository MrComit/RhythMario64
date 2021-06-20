Vtx note_rect_mesh_vtx_0[4] = {
	{{{0, 0, 0},0, {-16, 1008},{0x0, 0x0, 0x7F, 0xFF}}},
	{{{4, 0, 0},0, {1008, 1008},{0x0, 0x0, 0x7F, 0xFF}}},
	{{{4, 4, 0},0, {1008, -16},{0x0, 0x0, 0x7F, 0xFF}}},
	{{{0, 4, 0},0, {-16, -16},{0x0, 0x0, 0x7F, 0xFF}}},
};

Gfx note_rect_mesh_tri_0[] = {
	gsSPVertex(note_rect_mesh_vtx_0 + 0, 4, 0),
	gsSP1Triangle(0, 1, 2, 0),
	gsSP1Triangle(0, 2, 3, 0),
	gsSPEndDisplayList(),
};

Gfx mat_note_note[] = {
	gsDPPipeSync(),
	gsDPSetCombineLERP(0, 0, 0, ENVIRONMENT, 0, 0, 0, 1, 0, 0, 0, ENVIRONMENT, 0, 0, 0, 1),
	gsSPTexture(65535, 65535, 0, 0, 1),
	gsSPEndDisplayList(),
};

Gfx note_rect_mesh[] = {
	gsSPDisplayList(mat_note_note),
	gsSPDisplayList(note_rect_mesh_tri_0),
	gsDPPipeSync(),
	gsSPSetGeometryMode(G_LIGHTING),
	gsSPClearGeometryMode(G_TEXTURE_GEN),
	gsDPSetCombineLERP(0, 0, 0, SHADE, 0, 0, 0, ENVIRONMENT, 0, 0, 0, SHADE, 0, 0, 0, ENVIRONMENT),
	gsSPTexture(65535, 65535, 0, 0, 0),
	gsSPEndDisplayList(),
};

