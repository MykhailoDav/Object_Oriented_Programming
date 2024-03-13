#include "FloatRange.h"
#include <iostream>

using namespace std;

int main() {
	// Size of the class without #pragma pack(1)
	cout << "Size of FloatRange class without #pragma pack(1): " << sizeof(FloatRange) << " bytes" << endl;

	// Size of the class with #pragma pack(1)
#pragma pack(1)
	cout << "Size of FloatRange class with #pragma pack(1): " << sizeof(FloatRange) << " bytes" << endl;

	// Returning to the default packing mode
#pragma pack()
	FloatRange a(1, 1);
	FloatRange b(3, 4);
	FloatRange c(b);

	cout << "1\t" << a << endl;
	a++;
	cout << "2\t" << a << endl;
	++a;
	cout << "3\t" << a << endl;

	FloatRange x;
	cout << "Input float range (x) ->" << endl;
	cin >> x;

	FloatRange y;
	y = a * (x ^ 2) + b * x + c;

	cout << "Result: y = a*(x^2) + b*x + c = " << endl;
	cout << y;
	cin.get();
	return 0;
}
