#include <iostream>
#include "Triangle.h"
#include "Equilateral.h"

using namespace std;

int main() {
    Triangle t1(3, 4, 5);

    cout << "Triangle t1:" << endl;
    cout << t1 << endl;
    cout << "perimetr = " << t1.perimeter() << endl;
    double a, b, c;
    t1.calculateAngles(a, b, c);
    cout << "Angles" << endl << a << endl << b << endl << c << endl;
    cin >> t1;
    cout << t1 << endl;

    Equilateral eq;
    cin >> eq;
    cout << eq << endl;

  Equilateral
        eq1,
        eq2(5), 
        eq3(t1),
        eq4(eq2);

    cout << "Equilateral:" << endl;
    cout << eq1 << endl;
    return 0;
}
