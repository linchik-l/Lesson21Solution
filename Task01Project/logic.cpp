#include <cmath>

double get_lenght(int x1, int y1, int x2, int y2) {
	return sqrt((x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1));
}


double calculate_perimetr(int x1, int y1, int x2, int y2, int x3, int y3) {
	double a = get_lenght(x1, y1, x2, y2);
	double b = get_lenght(x1, y1, x3, y3);
	double c = get_lenght(x3, y3, x2, y2);

	return a + b + c;
}


double calculate_area(int x1, int y1, int x2, int y2, int x3, int y3) {
	double a = get_lenght(x1, y1, x2, y2);
	double b = get_lenght(x1, y1, x3, y3);
	double c = get_lenght(x3, y3, x2, y2);
	double p = (a + b + c) / 2;

	return sqrt(p * (p - a) * (p - b) * (p - c));
}