#include <iostream>
using  namespace std;

double calculate_perimetr(int x1, int y1, int x2, int y2, int x3, int y3);
double calculate_area(int x1, int y1, int x2, int y2, int x3, int y3);


int main() {
	int x1, y1;
	int x2, y2;
	int x3, y3;

	cout << "Input first point(x, y): ";
	cin >> x1 >> y1;

	cout << "Input second point(x, y): ";
	cin >> x2 >> y2;	
	
	cout << "Input third point(x, y): ";
	cin >> x3 >> y3;

	double perimetr = calculate_perimetr(x1, y1, x2, y2, x3, y3);
	double area = calculate_area(x1, y1, x2, y2, x3, y3);

	cout << "Area = " << area << endl;
	cout << "Perimetr = " << perimetr << endl;


	return 0;
}