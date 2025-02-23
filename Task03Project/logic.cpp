int get_max(int a, int b, int c) {
	int max = a > b ? a : b;
	max = max > c ? max : c;
	return max;
}

int get_min(int a, int b, int c) {
	int min = a < b ? a : b;
	min = min < c ? min : c;
	return min;
}

bool is_iteresting_number(int number) {
	number = number < 0 ? -number : number;
	if (number < 100 || number > 999) {
		return false;
	}

	int a = number / 100;
	int b = number / 10 % 10;
	int c = number % 10;

	int max = get_max(a, b, c);
	int min = get_min(a, b, c);
	
	return (a + b + c - min - max) == max - min;
}