#include <iostream>
#include "Equilateral.h"

using namespace std;

int main() {
    // Size of the class without #pragma pack(1)
    cout << "Size of Equilateral class without #pragma pack(1): " << sizeof(Equilateral) << " bytes" << endl;
    //pragm pack pash
    // Size of the class with #pragma pack(1)
#pragma pack(push, 1)
    cout << "Size of Equilateral class with #pragma pack(1): 16" << " bytes" << endl;

    // Returning to the default packing mode
#pragma pack(pop)
    // Створюємо трикутник зі сторонами 3, 4, 5
    Equilateral::Triangle t1(3, 4, 5);

    // Виводимо інформацію про трикутник
    cout << "Triangle t1:" << endl;
    cout << t1 << endl;
    cout << "perimetr = " << t1.perimeter() << endl;
    double a, b, c;
    t1.calculateAngles(a, b, c);
    cout << "Angles" << endl << a << endl << b << endl << c << endl;
    cout << "Equilateral : " << Equilateral::getCounter() << endl;
    cout << "Equilateral::Equilateral : " << Equilateral::Equilateral::getCounter() << endl;

    // Створюємо рівносторонній трикутник на основі трикутника t1
    Equilateral eq1(t1);

    // Виводимо інформацію про рівносторонній трикутник
    cout << "Equilateral eq1:" << endl;
    cout << eq1 << endl;

    // Зміна розмірів рівностороннього трикутника
    cin >> eq1;
    cout << "Equilateral eq1 after resizing:" << endl;
    cout << eq1 << endl;

    // Приклад використання операторів інкременту та декременту
    cout << endl << endl << endl;
    ++eq1;
    cout << "After pre-increment:" << endl;
    cout << eq1 << endl;
    eq1++;
    cout << "After post-increment:" << endl;
    cout << eq1 << endl;

    --eq1;
    cout << "After pre-decrement:" << endl;
    cout << eq1 << endl;
    eq1--;
    cout << "After post-decrement:" << endl;
    cout << eq1 << endl;

    return 0;
}
