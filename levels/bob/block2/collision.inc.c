const Collision block2_collision[] = {
	COL_INIT(),
	COL_VERTEX_INIT(8),
	COL_VERTEX(62, 0, -62),
	COL_VERTEX(62, 0, 62),
	COL_VERTEX(-62, 0, 62),
	COL_VERTEX(-62, 0, -62),
	COL_VERTEX(62, 125, 62),
	COL_VERTEX(-62, 125, 62),
	COL_VERTEX(62, 125, -63),
	COL_VERTEX(-62, 125, -63),
	COL_TRI_INIT(SURFACE_DEFAULT, 10),
	COL_TRI(0, 1, 2),
	COL_TRI(0, 2, 3),
	COL_TRI(2, 1, 4),
	COL_TRI(2, 4, 5),
	COL_TRI(1, 0, 6),
	COL_TRI(1, 6, 4),
	COL_TRI(0, 3, 7),
	COL_TRI(0, 7, 6),
	COL_TRI(3, 2, 5),
	COL_TRI(3, 5, 7),
	COL_TRI_STOP(),
	COL_END()
};
