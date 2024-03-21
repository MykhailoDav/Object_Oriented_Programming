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
    // ��������� ��������� � ��������� 3, 4, 5
    Equilateral::Triangle t1(3, 4, 5);

    // �������� ���������� ��� ���������
    cout << "Triangle t1:" << endl;
    cout << t1 << endl;
    cout << "perimetr = " << t1.perimeter() << endl;
    double a, b, c;
    t1.calculateAngles(a, b, c);
    cout << "Angles" << endl << a << endl << b << endl << c << endl;
    cout << "Equilateral : " << Equilateral::getCounter() << endl;
    cout << "Equilateral::Equilateral : " << Equilateral::Equilateral::getCounter() << endl;

    // ��������� ������������ ��������� �� ����� ���������� t1
    Equilateral eq1(t1);

    // �������� ���������� ��� ������������ ���������
    cout << "Equilateral eq1:" << endl;
    cout << eq1 << endl;

    // ���� ������ ��������������� ����������
    cin >> eq1;
    cout << "Equilateral eq1 after resizing:" << endl;
    cout << eq1 << endl;

    // ������� ������������ ��������� ���������� �� ����������
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
