#include "MoneyOpen.h"
#include "Money.h"

MoneyOpen::MoneyOpen() :Money() {}
MoneyOpen::MoneyOpen(int _500HRN, int _200HRN, int _100HRN, int _50HRN, int _20HRN, int _10HRN, int _5HRN, int _2HRN, int _1HRN,
	int _50KOP, int _25KOP, int _10KOP, int _5KOP, int _2KOP, int _1KOP)
	: Money(_500HRN, _200HRN, _100HRN, _50HRN, _20HRN, _10HRN, _5HRN, _2HRN, _1HRN, _50KOP, _25KOP, _10KOP, _5KOP, _2KOP, _1KOP){}
MoneyOpen::MoneyOpen(const MoneyOpen& s) :Money(s) {}

double MoneyOpen::CalculateTotal() {
	double total = 0;

	total += _500hrn * 500;
	total += _200hrn * 200;
	total += _100hrn * 100;
	total += _50hrn * 50;
	total += _20hrn * 20;
	total += _10hrn * 10;
	total += _5hrn * 5;
	total += _2hrn * 2;
	total += _1hrn;

	total += _50kop * 0.5;
	total += _25kop * 0.25;
	total += _10kop * 0.1;
	total += _5kop * 0.05;
	total += _2kop * 0.02;
	total += _1kop * 0.01;

	return total;
}


MoneyOpen& MoneyOpen::operator=(const MoneyOpen& other) {
	if (this != &other) {
		_500hrn = other._500hrn;
		_200hrn = other._200hrn;
		_100hrn = other._100hrn;
		_50hrn = other._50hrn;
		_20hrn = other._20hrn;
		_10hrn = other._10hrn;
		_5hrn = other._5hrn;
		_2hrn = other._2hrn;
		_1hrn = other._1hrn;

		_50kop = other._50kop;
		_25kop = other._25kop;
		_10kop = other._10kop;
		_5kop = other._5kop;
		_2kop = other._2kop;
		_1kop = other._1kop;
	}
	return *this;
}


MoneyOpen operator+(const MoneyOpen& money1, const MoneyOpen& money2) {
	MoneyOpen result;
	result._500hrn = money1._500hrn + money2._500hrn;
	result._200hrn = money1._200hrn + money2._200hrn;
	result._100hrn = money1._100hrn + money2._100hrn;
	result._50hrn = money1._50hrn + money2._50hrn;
	result._20hrn = money1._20hrn + money2._20hrn;
	result._10hrn = money1._10hrn + money2._10hrn;
	result._5hrn = money1._5hrn + money2._5hrn;
	result._2hrn = money1._2hrn + money2._2hrn;
	result._1hrn = money1._1hrn + money2._1hrn;

	result._50kop = money1._50kop + money2._50kop;
	result._25kop = money1._25kop + money2._25kop;
	result._10kop = money1._10kop + money2._10kop;
	result._5kop = money1._5kop + money2._5kop;
	result._2kop = money1._2kop + money2._2kop;
	result._1kop = money1._1kop + money2._1kop;

	return result;
}MoneyOpen operator-(const MoneyOpen& money1, const MoneyOpen& money2) {
	MoneyOpen result;

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

MoneyOpen operator*(const MoneyOpen& money, double multiplier) {
	MoneyOpen result;

	result.set500hrn(money.get500hrn() * multiplier);
	result.set200hrn(money.get200hrn() * multiplier);
	result.set100hrn(money.get100hrn() * multiplier);
	result.set50hrn(money.get50hrn() * multiplier);
	result.set20hrn(money.get20hrn() * multiplier);
	result.set10hrn(money.get10hrn() * multiplier);
	result.set5hrn(money.get5hrn() * multiplier);
	result.set2hrn(money.get2hrn() * multiplier);
	result.set1hrn(money.get1hrn() * multiplier);

	result.set50kop(money.get50kop() * multiplier);
	result.set25kop(money.get25kop() * multiplier);
	result.set10kop(money.get10kop() * multiplier);
	result.set5kop(money.get5kop() * multiplier);
	result.set2kop(money.get2kop() * multiplier);
	result.set1kop(money.get1kop() * multiplier);

	return result;
}


MoneyOpen& MoneyOpen::operator++() { // Prefix increment operator
	set500hrn(get500hrn() + 1);
	return *this;
}

MoneyOpen& MoneyOpen::operator--() { // Prefix decrement operator
	set500hrn(get500hrn() - 1);
	return *this;
}

MoneyOpen MoneyOpen::operator++(int) { // Postfix increment operator
	MoneyOpen tmp = *this;
	set100hrn(get100hrn() + 1);
	return tmp;
}

MoneyOpen MoneyOpen::operator--(int) { // Postfix decrement operator
	MoneyOpen tmp = *this;
	set100hrn(get100hrn() - 1);
	return tmp;
}

