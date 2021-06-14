void scroll_lava_spire_LavaSpire_mesh_layer_1_vtx_0() {
	int i = 0;
	int count = 27;
	int width = 64 * 0x20;
	int height = 64 * 0x20;

	static int currentY = 0;
	int deltaY;
	Vtx *vertices = segmented_to_virtual(lava_spire_LavaSpire_mesh_layer_1_vtx_0);

	deltaY = (int)(-1.7999999523162842 * 0x20) % height;

	if (absi(currentY) > height) {
		deltaY -= (int)(absi(currentY) / height) * height * signum_positive(deltaY);
	}

	for (i = 0; i < count; i++) {
		vertices[i].n.tc[1] += deltaY;
	}
	currentY += deltaY;

}
void scroll_ccm_level_geo_lava_spire() {
	scroll_lava_spire_LavaSpire_mesh_layer_1_vtx_0();
}
