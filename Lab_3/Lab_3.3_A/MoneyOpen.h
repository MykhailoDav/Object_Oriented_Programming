#pragma once
#include <string>
#include "Money.h"
class MoneyOpen : public Money
{
public:
	MoneyOpen();
	MoneyOpen(int _500hrn, int _200hrn, int _100hrn, int _50hrn, int _20hrn, int _10hrn, int _5hrn, int _2hrn, int _1hrn,
		int _50kop, int _25kop, int _10kop, int _5kop, int _2kop, int _1kop);
	MoneyOpen(const MoneyOpen&);

	double CalculateTotal();

	friend MoneyOpen operator+(const MoneyOpen& money1, const MoneyOpen& money2);
	friend MoneyOpen operator-(const MoneyOpen& money1, const MoneyOpen& money2);
	friend MoneyOpen operator*(const MoneyOpen& money, double multiplier);

	MoneyOpen& operator=(const MoneyOpen&);

	MoneyOpen& operator ++();
	MoneyOpen& operator --();
	MoneyOpen operator ++(int);
	MoneyOpen operator --(int);
};

