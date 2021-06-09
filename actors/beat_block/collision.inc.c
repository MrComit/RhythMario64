const Collision beat_block_collision[] = {
	COL_INIT(),
	COL_VERTEX_INIT(8),
	COL_VERTEX(-187, -188, 187),
	COL_VERTEX(-187, 188, 187),
	COL_VERTEX(-188, 188, -188),
	COL_VERTEX(-188, -188, -188),
	COL_VERTEX(188, 188, 188),
	COL_VERTEX(188, -188, 188),
	COL_VERTEX(188, -188, -188),
	COL_VERTEX(188, 188, -188),
	COL_TRI_INIT(SURFACE_NOT_SLIPPERY, 12),
	COL_TRI(0, 1, 2),
	COL_TRI(0, 2, 3),
	COL_TRI(4, 1, 0),
	COL_TRI(4, 0, 5),
	COL_TRI(6, 7, 4),
	COL_TRI(6, 4, 5),
	COL_TRI(6, 3, 2),
	COL_TRI(6, 2, 7),
	COL_TRI(2, 1, 4),
	COL_TRI(2, 4, 7),
	COL_TRI(3, 6, 5),
	COL_TRI(3, 5, 0),
	COL_TRI_STOP(),
	COL_END()
};
