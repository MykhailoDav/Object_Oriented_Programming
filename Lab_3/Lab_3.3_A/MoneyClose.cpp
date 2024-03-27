#include "MoneyClose.h"
#include <iostream>
#include <iomanip>
#include <cmath>
#include <stdlib.h>
#include <sstream>
using namespace std;
MoneyClose::MoneyClose() :Money() {}
MoneyClose::MoneyClose(int _500HRN, int _200HRN, int _100HRN, int _50HRN, int _20HRN, int _10HRN, int _5HRN, int _2HRN, int _1HRN,
	int _50KOP, int _25KOP, int _10KOP, int _5KOP, int _2KOP, int _1KOP)
	: Money(_500HRN, _200HRN, _100HRN, _50HRN, _20HRN, _10HRN, _5HRN, _2HRN, _1HRN, _50KOP, _25KOP, _10KOP, _5KOP, _2KOP, _1KOP) {}
MoneyClose::MoneyClose(const MoneyClose& s) :Money(s) {}


MoneyClose& MoneyClose::operator=(const MoneyClose& other) {
	if (this != &other) {
		set500hrn(other.get500hrn());
		set200hrn(other.get200hrn());
		set100hrn(other.get100hrn());
		set50hrn(other.get50hrn());
		set20hrn(other.get20hrn());
		set10hrn(other.get10hrn());
		set5hrn(other.get5hrn());
		set2hrn(other.get2hrn());
		set1hrn(other.get1hrn());
		set50kop(other.get50kop());
		set25kop(other.get25kop());
		set10kop(other.get10kop());
		set5kop(other.get5kop());
		set2kop(other.get2kop());
		set1kop(other.get1kop());

	}
	return *this;
}

MoneyClose operator+(const MoneyClose& money1, const MoneyClose& money2) {
	MoneyClose result;
	result.set500hrn(money1.get500hrn() + money2.get500hrn());
	result.set200hrn(money1.get200hrn() + money2.get200hrn());
	result.set100hrn(money1.get100hrn() + money2.get100hrn());
	result.set50hrn(money1.get50hrn() + money2.get50hrn());
	result.set20hrn(money1.get20hrn() + money2.get20hrn());
	result.set10hrn(money1.get10hrn() + money2.get10hrn());
	result.set5hrn(money1.get5hrn() + money2.get5hrn());
	result.set2hrn(money1.get2hrn() + money2.get2hrn());
	result.set1hrn(money1.get1hrn() + money2.get1hrn());

	result.set50kop(money1.get50kop() + money2.get50kop());
	result.set25kop(money1.get25kop() + money2.get25kop());
	result.set10kop(money1.get10kop() + money2.get10kop());
	result.set5kop(money1.get5kop() + money2.get5kop());
	result.set2kop(money1.get2kop() + money2.get2kop());
	result.set1kop(money1.get1kop() + money2.get1kop());

	return result;
}
MoneyClose operator-(const MoneyClose& money1, const MoneyClose& money2) {
	MoneyClose result;

	result.set500hrn(money1.get500hrn() - money2.get500hrn());
	result.set200hrn(money1.get200hrn() - money2.get200hrn());
	result.set100hrn(money1.get100hrn() - money2.get100hrn());
	result.set50hrn(money1.get50hrn() - money2.get50hrn());
	result.set20hrn(money1.get20hrn() - money2.get20hrn());
	result.set10hrn(money1.get10hrn() - money2.get10hrn());
	result.set5hrn(money1.get5hrn() - money2.get5hrn());
	result.set2hrn(money1.get2hrn() - money2.get2hrn());
	result.set1hrn(money1.get1hrn() - money2.get1hrn());

	result.set50kop(money1.get50kop() - money2.get50kop());
	result.set25kop(money1.get25kop() - money2.get25kop());
	result.set10kop(money1.get10kop() - money2.get10kop());
	result.set5kop(money1.get5kop() - money2.get5kop());
	result.set2kop(money1.get2kop() - money2.get2kop());
	result.set1kop(money1.get1kop() - money2.get1kop());

	return result;
}
MoneyClose operator*(const MoneyClose& money, double multiplier) {
	MoneyClose result;

	result.set500hrn(static_cast<int>(money.get500hrn() * multiplier));
	result.set200hrn(static_cast<int>(money.get200hrn() * multiplier));
	result.set100hrn(static_cast<int>(money.get100hrn() * multiplier));
	result.set50hrn(static_cast<int>(money.get50hrn() * multiplier));
	result.set20hrn(static_cast<int>(money.get20hrn() * multiplier));
	result.set10hrn(static_cast<int>(money.get10hrn() * multiplier));
	result.set5hrn(static_cast<int>(money.get5hrn() * multiplier));
	result.set2hrn(static_cast<int>(money.get2hrn() * multiplier));
	result.set1hrn(static_cast<int>(money.get1hrn() * multiplier));

	result.set50kop(static_cast<int>(money.get50kop() * multiplier));
	result.set25kop(static_cast<int>(money.get25kop() * multiplier));
	result.set10kop(static_cast<int>(money.get10kop() * multiplier));
	result.set5kop(static_cast<int>(money.get5kop() * multiplier));
	result.set2kop(static_cast<int>(money.get2kop() * multiplier));
	result.set1kop(static_cast<int>(money.get1kop() * multiplier));

	return result;
}

MoneyClose& MoneyClose::operator++() { // Prefix increment operator
	set500hrn(get500hrn() + 1);
	return *this;
}

MoneyClose& MoneyClose::operator--() { // Prefix decrement operator
	set500hrn(get500hrn() - 1);
	return *this;
}

MoneyClose MoneyClose::operator++(int) { // Postfix increment operator
	MoneyClose tmp = *this;
	set100hrn(get100hrn() + 1);
	return tmp;
}

MoneyClose MoneyClose::operator--(int) { // Postfix decrement operator
	MoneyClose tmp = *this;
	set100hrn(get100hrn() - 1);
	return tmp;
}

istream& operator >>(istream& in, MoneyClose& m)
{
	cout << "Кількість банкнот по 500 грн.: ";
	in >> m._500hrn;
	cout << "Кількість банкнот по 200 грн.: ";
	in >> m._200hrn;
	cout << "Кількість банкнот по 100 грн.: ";
	in >> m._100hrn;
	cout << "Кількість банкнот по 50 грн.: ";
	in >> m._50hrn;
	cout << "Кількість банкнот по 20 грн.: ";
	in >> m._20hrn;
	cout << "Кількість банкнот по 10 грн.: ";
	in >> m._10hrn;
	cout << "Кількість банкнот по 5 грн.: ";
	in >> m._5hrn;
	cout << "Кількість банкнот по 2 грн.: ";
	in >> m._2hrn;
	cout << "Кількість банкнот по 1 грн.: ";
	in >> m._1hrn;
	cout << "Кількість монет по 50 коп.: ";
	in >> m._50kop;
	cout << "Кількість монет по 25 коп.: ";
	in >> m._25kop;
	cout << "Кількість монет по 10 коп.: ";
	in >> m._10kop;
	cout << "Кількість монет по 5 коп.: ";
	in >> m._5kop;
	cout << "Кількість монет по 2 коп.: ";
	in >> m._2kop;
	cout << "Кількість монет по 1 коп.: ";
	in >> m._1kop;
	return in;
}
ostream& operator <<(ostream& out, const MoneyClose& m)
{
	out << string(m) << endl;
	return out;
}
MoneyClose::operator string() const
{
	stringstream sout;
	sout << "Кількість банкнот по 500 грн.: " << _500hrn << "\n";
	sout << "Кількість банкнот по 200 грн.: " << _200hrn << "\n";
	sout << "Кількість банкнот по 100 грн.: " << _100hrn << "\n";
	sout << "Кількість банкнот по 50 грн.: " << _50hrn << "\n";
	sout << "Кількість банкнот по 20 грн.: " << _20hrn << "\n";
	sout << "Кількість банкнот по 10 грн.: " << _10hrn << "\n";
	sout << "Кількість банкнот по 5 грн.: " << _5hrn << "\n";
	sout << "Кількість банкнот по 2 грн.: " << _2hrn << "\n";
	sout << "Кількість банкнот по 1 грн.: " << _1hrn << "\n";
	sout << "Кількість монет по 50 коп.: " << _50kop << "\n";
	sout << "Кількість монет по 25 коп.: " << _25kop << "\n";
	sout << "Кількість монет по 10 коп.: " << _10kop << "\n";
	sout << "Кількість монет по 5 коп.: " << _5kop << "\n";
	sout << "Кількість монет по 2 коп.: " << _2kop << "\n";
	sout << "Кількість монет по 1 коп.: " << _1kop;
	return sout.str();
}
