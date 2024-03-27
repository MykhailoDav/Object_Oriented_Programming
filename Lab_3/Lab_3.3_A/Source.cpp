#include "Money.h"
#include "MoneyClose.h"
#include "MoneyOpen.h"
#include <iostream>
#include <Windows.h>

using namespace std;
int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);


	Money m(1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1);
	cout << endl << m << endl;

	MoneyOpen mo(2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2);
	cout << endl << mo << endl;

	MoneyClose mc1(1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1);
	cout << endl << mc1 << endl;

	MoneyClose mc2;
	cin >> mc2;
	cout << endl << mc2 << endl;

	MoneyClose mct;
	mct = mc1 + mc2;
	cout << mct << endl;
	cout << mc2-mc1 << endl;
	cout << mc1 * 5 << endl;
	cout << mc1++ << endl;
	cout << mc1-- << endl;
	cout << ++mc1 << endl;
	cout << --mc1 << endl;
}