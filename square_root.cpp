#include <iostream>

using namespace std;

class NegativeNumber {};

float approxSquareRoot (float t) {
	if (t < 0) throw (NegativeNumber());
	float number = 0, d = 1;
	float product = 0;
	while (t - product > 0.001) {
		product = (number + d) * (number + d);
		if (product > t) d /= 10;
		number += d;
		product = number * number;
	}
	return number;
}

int main() {
	float n;
	cout << "Enter a Number: ";
	cin >> n;
	try {
		cout << approxSquareRoot(n) << endl;
	} catch (NegativeNumber) {
		cout << "Number cannot be negative\n";
	}
	return 0;
}