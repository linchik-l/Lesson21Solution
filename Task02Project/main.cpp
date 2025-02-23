#include <iostream>
using  namespace std;

bool is_same_color(int x1, int y1, int x2, int y2);

int main() {
	int x1, y1;
	int x2, y2;

	cout << "Input first cage(x, y) : ";
	cin >> x1 >> y1;

	cout << "Input second cage(x, y) : ";
	cin >> x2 >> y2;

	bool result = is_same_color(x1, y1, x2, y2);
	
	string user_interface = result ? "Yes, these fields have the same color" 
		: "No, these fields are different.";

	cout << user_interface << endl;
	return 0;
}