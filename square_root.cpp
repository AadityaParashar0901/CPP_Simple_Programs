#include <iostream>
using namespace std;
class NegativeNumber {};
double approxSquareRoot (double t) {
	if (t < 0) throw (NegativeNumber());
	double number = 0, d = 1;
	double product = 0;
	while (t - product > 0.000001) {
		while ((number + d) * (number + d) > t) d /= 10;
		number += d;
		product = number * number;
	}
	return number; }
int main() { double n;
	cout << "Enter a Number: "; cin >> n;
	try { cout << approxSquareRoot(n) << endl; } catch (NegativeNumber) { cout << "Number cannot be negative\n"; }
	return 0; }
