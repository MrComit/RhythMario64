const Collision tipping_platform_collision[] = {
	COL_INIT(),
	COL_VERTEX_INIT(7),
	COL_VERTEX(433, 500, -250),
	COL_VERTEX(433, 500, 250),
	COL_VERTEX(0, 0, 0),
	COL_VERTEX(0, 500, 500),
	COL_VERTEX(-433, 500, 250),
	COL_VERTEX(-433, 500, -250),
	COL_VERTEX(0, 500, -500),
	COL_TRI_INIT(SURFACE_DEFAULT, 10),
	COL_TRI(0, 1, 2),
	COL_TRI(3, 4, 2),
	COL_TRI(5, 6, 2),
	COL_TRI(6, 0, 2),
	COL_TRI(1, 3, 2),
	COL_TRI(4, 5, 2),
	COL_TRI(6, 5, 4),
	COL_TRI(4, 3, 1),
	COL_TRI(1, 0, 6),
	COL_TRI(4, 1, 6),
	COL_TRI_STOP(),
	COL_END()
};