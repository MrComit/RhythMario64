void scroll_rr_dl_falling_lava_mesh_layer_5_vtx_0() {
	int i = 0;
	int count = 18;
	int width = 64 * 0x20;
	int height = 64 * 0x20;

	static int currentX = 0;
	int deltaX;
	Vtx *vertices = segmented_to_virtual(rr_dl_falling_lava_mesh_layer_5_vtx_0);

	deltaX = (int)(0.4000000059604645 * 0x20) % width;

	if (absi(currentX) > width) {
		deltaX -= (int)(absi(currentX) / width) * width * signum_positive(deltaX);
	}

	for (i = 0; i < count; i++) {
		vertices[i].n.tc[0] += deltaX;
	}
	currentX += deltaX;

}
void scroll_rr_dl_falling_lava_001_mesh_layer_5_vtx_0() {
	int i = 0;
	int count = 12;
	int width = 64 * 0x20;
	int height = 64 * 0x20;

	static int currentX = 0;
	int deltaX;
	Vtx *vertices = segmented_to_virtual(rr_dl_falling_lava_001_mesh_layer_5_vtx_0);

	deltaX = (int)(0.4000000059604645 * 0x20) % width;

	if (absi(currentX) > width) {
		deltaX -= (int)(absi(currentX) / width) * width * signum_positive(deltaX);
	}

	for (i = 0; i < count; i++) {
		vertices[i].n.tc[0] += deltaX;
	}
	currentX += deltaX;

}
void scroll_rr_dl_falling_lava_002_mesh_layer_5_vtx_0() {
	int i = 0;
	int count = 18;
	int width = 64 * 0x20;
	int height = 64 * 0x20;

	static int currentX = 0;
	int deltaX;
	Vtx *vertices = segmented_to_virtual(rr_dl_falling_lava_002_mesh_layer_5_vtx_0);

	deltaX = (int)(0.4000000059604645 * 0x20) % width;

	if (absi(currentX) > width) {
		deltaX -= (int)(absi(currentX) / width) * width * signum_positive(deltaX);
	}

	for (i = 0; i < count; i++) {
		vertices[i].n.tc[0] += deltaX;
	}
	currentX += deltaX;

}
void scroll_rr_dl_falling_lava_003_mesh_layer_5_vtx_0() {
	int i = 0;
	int count = 12;
	int width = 64 * 0x20;
	int height = 64 * 0x20;

	static int currentX = 0;
	int deltaX;
	Vtx *vertices = segmented_to_virtual(rr_dl_falling_lava_003_mesh_layer_5_vtx_0);

	deltaX = (int)(0.4000000059604645 * 0x20) % width;

	if (absi(currentX) > width) {
		deltaX -= (int)(absi(currentX) / width) * width * signum_positive(deltaX);
	}

	for (i = 0; i < count; i++) {
		vertices[i].n.tc[0] += deltaX;
	}
	currentX += deltaX;

}
void scroll_rr_dl_falling_lava_004_mesh_layer_5_vtx_0() {
	int i = 0;
	int count = 6;
	int width = 64 * 0x20;
	int height = 64 * 0x20;

	static int currentX = 0;
	int deltaX;
	Vtx *vertices = segmented_to_virtual(rr_dl_falling_lava_004_mesh_layer_5_vtx_0);

	deltaX = (int)(0.4000000059604645 * 0x20) % width;

	if (absi(currentX) > width) {
		deltaX -= (int)(absi(currentX) / width) * width * signum_positive(deltaX);
	}

	for (i = 0; i < count; i++) {
		vertices[i].n.tc[0] += deltaX;
	}
	currentX += deltaX;

}
void scroll_rr_dl_Lava_mesh_layer_1_vtx_0() {
	int i = 0;
	int count = 37;
	int width = 64 * 0x20;
	int height = 64 * 0x20;

	static int currentX = 0;
	int deltaX;
	Vtx *vertices = segmented_to_virtual(rr_dl_Lava_mesh_layer_1_vtx_0);

	deltaX = (int)(0.20000000298023224 * 0x20) % width;

	if (absi(currentX) > width) {
		deltaX -= (int)(absi(currentX) / width) * width * signum_positive(deltaX);
	}

	for (i = 0; i < count; i++) {
		vertices[i].n.tc[0] += deltaX;
	}
	currentX += deltaX;

}
void scroll_rr_dl_lava_mesh_layer_1_vtx_0() {
	int i = 0;
	int count = 4;
	int width = 64 * 0x20;
	int height = 64 * 0x20;

	static int currentX = 0;
	int deltaX;
	Vtx *vertices = segmented_to_virtual(rr_dl_lava_mesh_layer_1_vtx_0);

	deltaX = (int)(0.20000000298023224 * 0x20) % width;

	if (absi(currentX) > width) {
		deltaX -= (int)(absi(currentX) / width) * width * signum_positive(deltaX);
	}

	for (i = 0; i < count; i++) {
		vertices[i].n.tc[0] += deltaX;
	}
	currentX += deltaX;

}
void scroll_rr() {
	scroll_rr_dl_falling_lava_mesh_layer_5_vtx_0();
	scroll_rr_dl_falling_lava_001_mesh_layer_5_vtx_0();
	scroll_rr_dl_falling_lava_002_mesh_layer_5_vtx_0();
	scroll_rr_dl_falling_lava_003_mesh_layer_5_vtx_0();
	scroll_rr_dl_falling_lava_004_mesh_layer_5_vtx_0();
	scroll_rr_dl_Lava_mesh_layer_1_vtx_0();
	scroll_rr_dl_lava_mesh_layer_1_vtx_0();
}
