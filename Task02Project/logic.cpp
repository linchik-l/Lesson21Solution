bool is_same_color(int x1, int y1, int x2, int y2) {
	if (x1 < 1 || x1 > 8 || y1 < 1 || y1 > 8
		|| x2 < 1 || x2 > 8 || y2 < 1 || y2 > 8) {
		return false;
	}
	return (x1 + y1) % 2 == (x2 + y2) % 2;
}