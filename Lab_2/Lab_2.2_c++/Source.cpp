#include <iostream>
#include "Double.h"
using namespace std;

int main() {
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