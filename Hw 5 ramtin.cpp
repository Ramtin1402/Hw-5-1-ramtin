#include <iostream>
#include <math.h>

using  namespace std;

int main() {
	float a;
	cin >> a;
	if ( a < 6000000) {
		cout << " you do not have pay a taxes :"
		<< fixed << a;
	}
	else if ( a >= 6000000 && a < 8000000) {
		cout << "salary after tax deduction :"
		<< fixed <<(float) a * 0.95;
	}
	else if ( a >= 8000000 && a < 1000000) {
		cout << "salary after tax deduction :"
		<< fixed <<(float) a * 0.90;
	}
	else if ( a >= 10000000 && a < 14000000) {
		cout << "salary after tax deduction :"
		<< fixed <<(float) a * 0.85;
	}
	else if ( a >= 14000000 && a < 18000000) {
		cout << "salary after tax deduction :"
		<< fixed <<(float) a * 0.80;
	}
	else if ( a >= 18000000 && a < 25000000) {
		cout << "salary after tax deduction :"
		<< fixed << (float) a * 0.75;
	}
	else if ( a >= 25000000) {
		cout << "salary after tax deduction :"
		<< fixed << (float) a * 0.65;
	}
}