#include <iostream>
using  namespace std;

bool is_iteresting_number(int number);

int main() {
	int number;

	cout << "Input three-digit number: ";
	cin >> number;

	bool result = is_iteresting_number(number);

	string ui = result ? "Yes, number is interesting." : "No, number isn't interesting.";

	cout << ui << endl;
	return 0;
}