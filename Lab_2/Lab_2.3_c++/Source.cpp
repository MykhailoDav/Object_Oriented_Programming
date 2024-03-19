#include "Money.h"
#include <Windows.h> // п≥дключаЇмо б≥бл≥отеку, €ка забезпечуЇ в≥дображенн€ кирилиц≥

#include <iomanip> 
#include <locale> 
#include <iostream>
using namespace std;

int main()
{
	SetConsoleCP(1251); // встановленн€ кодовоњ стор≥нки win-cp1251
	// (кирилиц€) в пот≥к вводу
	SetConsoleOutputCP(1251); // встановленн€ кодовоњ стор≥нки win-cp1251
	// (кирилиц€) в пот≥к виводу

	// Size of the class without #pragma pack(1)
	cout << "Size of FloatRange class without #pragma pack(1): " << sizeof(Money) << " bytes" << endl;

	// Size of the class with #pragma pack(1)
#pragma pack(1)
	cout << "Size of FloatRange class with #pragma pack(1): " << sizeof(Money) << " bytes" << endl;

	// Returning to the default packing mode
#pragma pack()
	 // Create a Money object using default constructor
	Money money1;
	cout << "Money1 (default constructor):" << endl;
	cout << money1 << endl << endl;

	// Create a Money object using parameterized constructor
	Money money2(2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16);
	cout << "Money2 (parameterized constructor):" << endl;
	cout << money2 << endl << endl;

	// Copy constructor
	Money money3(money2);
	cout << "Money3 (copy constructor):" << endl;
	cout << money3 << endl << endl;

	// Prefix increment operator
	cout << "Prefix increment operator:" << endl;
	++money3;
	cout << money3 << endl << endl;

	// Prefix decrement operator
	cout << "Prefix decrement operator:" << endl;
	--money3;
	cout << money3 << endl << endl;

	// Postfix increment operator
	cout << "Postfix increment operator:" << endl;
	Money money4 = money3++;
	cout << "Money3 after postfix increment:" << endl;
	cout << money3 << endl;
	cout << "Money4 (result of postfix increment):" << endl;
	cout << money4 << endl << endl;

	// Postfix decrement operator
	cout << "Postfix decrement operator:" << endl;
	money4 = money3--;
	cout << "Money3 after postfix decrement:" << endl;
	cout << money3 << endl;
	cout << "Money4 (result of postfix decrement):" << endl;
	cout << money4 << endl << endl;

	// Assignment operator
	Money money5;
	cout << "Money5 (before assignment operator):" << endl;
	cout << money5 << endl;
	money5 = money2;
	cout << "Money5 (after assignment operator):" << endl;
	cout << money5 << endl << endl;

	// Calculate Total
	cout.imbue(locale("")); // Set the locale to use the default system locale
	cout << "Total money in Money5: " << fixed << setprecision(2) << money5.CalculateTotal() << " UAN" << endl << endl;	// Suma
	cout << "Sum of Money2 and Money5:" << endl;
	Money sum = Money::Suma(money2, money5);
	cout << sum << endl << endl;

	// Subtract
	cout << "Subtract Money5 from Money2:" << endl;
	Money difference = Money::Subtract(money2, money5);
	cout << difference << endl << endl;

	// Multiply by Decimal
	cout << "Multiply Money5 by 2.5:" << endl;
	Money multiplied = money5.MultiplyByDecimal(2.5);
	cout << multiplied << endl;

	return 0;
}
