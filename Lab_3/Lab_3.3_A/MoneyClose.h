#pragma once
#include <string>
#include "Money.h"
class MoneyClose : private Money
{
public:
	MoneyClose();
	MoneyClose(int _500hrn, int _200hrn, int _100hrn, int _50hrn, int _20hrn, int _10hrn, int _5hrn, int _2hrn, int _1hrn,
		int _50kop, int _25kop, int _10kop, int _5kop, int _2kop, int _1kop);
	MoneyClose(const MoneyClose&);

	friend MoneyClose operator+(const MoneyClose& money1, const MoneyClose& money2);
	friend MoneyClose operator-(const MoneyClose& money1, const MoneyClose& money2);
	friend MoneyClose operator*(const MoneyClose& money, double multiplier);

	MoneyClose& operator=(const MoneyClose&);

	MoneyClose& operator ++();
	MoneyClose& operator --();
	MoneyClose operator ++(int);
	MoneyClose operator --(int);

	friend ostream& operator <<(ostream&, const MoneyClose&);
	friend istream& operator >>(istream& in, MoneyClose& m);
	operator string() const;
};

