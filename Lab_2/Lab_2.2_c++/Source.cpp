#include <iostream>
#include "Double.h"
using namespace std;

int main() {
	// Size of the class without #pragma pack(1)
	cout << "Size of FloatRange class without #pragma pack(1): " << sizeof(Double) << " bytes" << endl;

	// Size of the class with #pragma pack(1)
#pragma pack(1)
	cout << "Size of FloatRange class with #pragma pack(1): " << sizeof(Double) << " bytes" << endl;

	// Returning to the default packing mode
#pragma pack()
	Double a, b;
	cout << "a = "; cin >> a;
	cout << "b = "; cin >> b;
	cout << endl;

	cout << "a + b = " << a + b << endl;
	cout << "a - b = " << a - b << endl;
	cout << "a * b = " << a * b << endl;
	cout << "a / b = " << a / b << endl;
	cout << "a % b = " << a % b << endl;
	cout << "a ^ b = " << (a ^ b) << endl;
	cout << "--a = " << (--a) << endl;

	return 0;
}