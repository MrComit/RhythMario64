void scroll_bob_dl_cloud_floor_mesh_layer_1_vtx_0() {
	int i = 0;
	int count = 25;
	int width = 32 * 0x20;
	int height = 32 * 0x20;

	static int currentX = 0;
	int deltaX;
	static int currentY = 0;
	int deltaY;
	Vtx *vertices = segmented_to_virtual(bob_dl_cloud_floor_mesh_layer_1_vtx_0);

	deltaX = (int)(0.10000000149011612 * 0x20) % width;
	deltaY = (int)(0.10000000149011612 * 0x20) % height;

	if (absi(currentX) > width) {
		deltaX -= (int)(absi(currentX) / width) * width * signum_positive(deltaX);
	}
	if (absi(currentY) > height) {
		deltaY -= (int)(absi(currentY) / height) * height * signum_positive(deltaY);
	}

	for (i = 0; i < count; i++) {
		vertices[i].n.tc[0] += deltaX;
		vertices[i].n.tc[1] += deltaY;
	}
	currentX += deltaX;
	currentY += deltaY;

}
void scroll_bob_dl_main_mesh_layer_1_vtx_1() {
	int i = 0;
	int count = 179;
	int width = 64 * 0x20;
	int height = 64 * 0x20;

	static int currentX = 0;
	int deltaX;
	Vtx *vertices = segmented_to_virtual(bob_dl_main_mesh_layer_1_vtx_1);

	deltaX = (int)(1.0 * 0x20) % width;

	if (absi(currentX) > width) {
		deltaX -= (int)(absi(currentX) / width) * width * signum_positive(deltaX);
	}

	for (i = 0; i < count; i++) {
		vertices[i].n.tc[0] += deltaX;
	}
	currentX += deltaX;

}
void scroll_bob() {
	scroll_bob_dl_cloud_floor_mesh_layer_1_vtx_0();
	scroll_bob_dl_main_mesh_layer_1_vtx_1();
}
