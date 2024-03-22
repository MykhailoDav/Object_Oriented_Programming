#include "Money.h"
#include <iostream>
#include <iomanip>
#include <cmath>
#include <stdlib.h>
#include <sstream>

using namespace std;

Money::Money() {
	_500hrn = _200hrn = _100hrn = _50hrn = _20hrn = _10hrn = _5hrn = _2hrn = _1hrn = 0;
	_50kop = _25kop = _10kop = _5kop = _2kop = _1kop = 0;
}
Money::Money(int _500HRN, int _200HRN, int _100HRN, int _50HRN, int _20HRN, int _10HRN, int _5HRN, int _2HRN, int _1HRN,
	int _50KOP, int _25KOP, int _10KOP, int _5KOP, int _2KOP, int _1KOP) {
	if (_500HRN >= 0 || _200HRN >= 0 || _100HRN >= 0 || _50HRN >= 0 || _20HRN >= 0 || _10HRN >= 0 || _5HRN >= 0 || _2HRN >= 0 || _1HRN >= 0 ||
		_50KOP >= 0 || _25KOP >= 0 || _10KOP >= 0 || _5KOP >= 0 || _2KOP >= 0 || _1KOP >= 0) {

			{

				_500hrn = _500HRN;
				_200hrn = _200HRN;
				_100hrn = _100HRN;
				_50hrn = _50HRN;
				_20hrn = _20HRN;
				_10hrn = _10HRN;
				_5hrn = _5HRN;
				_2hrn = _2HRN;
				_1hrn = _1HRN;
				_50kop = _50KOP;
				_25kop = _25KOP;
				_10kop = _10KOP;
				_5kop = _5KOP;
				_2kop = _2KOP;
				_1kop = _1KOP;

			}
	}
}
Money::Money(const Money& m) {
	*this = m;
}
void Money::set500hrn(int value) {
	if (value >= 0) {
		_500hrn = value;
	}
	else {
		cout << "Error: value must be greater than or equal to 0." << endl;
	}
}

void Money::set200hrn(int value) {
	if (value >= 0) {
		_200hrn = value;
	}
	else {
		cout << "Error: value must be greater than or equal to 0." << endl;
	}
}
void Money::set100hrn(int value) {
	if (value >= 0) {
		_100hrn = value;
	}
	else {
		cout << "Error: value must be greater than or equal to 0." << endl;
	}
}

void Money::set50hrn(int value) {
	if (value >= 0) {
		_50hrn = value;
	}
	else {
		cout << "Error: value must be greater than or equal to 0." << endl;
	}
}

void Money::set20hrn(int value) {
	if (value >= 0) {
		_20hrn = value;
	}
	else {
		cout << "Error: value must be greater than or equal to 0." << endl;
	}
}

void Money::set10hrn(int value) {
	if (value >= 0) {
		_10hrn = value;
	}
	else {
		cout << "Error: value must be greater than or equal to 0." << endl;
	}
}

void Money::set5hrn(int value) {
	if (value >= 0) {
		_5hrn = value;
	}
	else {
		cout << "Error: value must be greater than or equal to 0." << endl;
	}
}

void Money::set2hrn(int value) {
	if (value >= 0) {
		_2hrn = value;
	}
	else {
		cout << "Error: value must be greater than or equal to 0." << endl;
	}
}

void Money::set1hrn(int value) {
	if (value >= 0) {
		_1hrn = value;
	}
	else {
		cout << "Error: value must be greater than or equal to 0." << endl;
	}
}

void Money::set50kop(int value) {
	if (value >= 0) {
		_50kop = value;
	}
	else {
		cout << "Error: value must be greater than or equal to 0." << endl;
	}
}

void Money::set25kop(int value) {
	if (value >= 0) {
		_25kop = value;
	}
	else {
		cout << "Error: value must be greater than or equal to 0." << endl;
	}
}

void Money::set10kop(int value) {
	if (value >= 0) {
		_10kop = value;
	}
	else {
		cout << "Error: value must be greater than or equal to 0." << endl;
	}
}

void Money::set5kop(int value) {
	if (value >= 0) {
		_5kop = value;
	}
	else {
		cout << "Error: value must be greater than or equal to 0." << endl;
	}
}

void Money::set2kop(int value) {
	if (value >= 0) {
		_2kop = value;
	}
	else {
		cout << "Error: value must be greater than or equal to 0." << endl;
	}
}

void Money::set1kop(int value) {
	if (value >= 0) {
		_1kop = value;
	}
	else {
		cout << "Error: value must be greater than or equal to 0." << endl;
	}
}

Money& Money::operator++() { // Prefix increment operator
	++_500hrn;
	return *this;
}

Money& Money::operator--() { // Prefix decrement operator
	--_500hrn;
	return *this;
}

Money Money::operator++(int) { // Postfix increment operator
	Money tmp = *this;
	_100hrn++;
	return tmp;
}

Money Money::operator--(int) { // Postfix decrement operator
	Money tmp = *this;
	_100hrn--;
	return tmp;
}
Money& Money::operator=(const Money& other) {
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


istream& operator >>(istream& in, Money& m)
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
ostream& operator <<(ostream& out, const Money& m)
{
	out << string(m) << endl;
	return out;
}
Money::operator string() const
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

double Money::CalculateTotal() {
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


Money Money::Suma(const Money& money1, const Money& money2) {
	Money newMoney;

	newMoney._500hrn = money1._500hrn + money2._500hrn;
	newMoney._200hrn = money1._200hrn + money2._200hrn;
	newMoney._100hrn = money1._100hrn + money2._100hrn;
	newMoney._50hrn = money1._50hrn + money2._50hrn;
	newMoney._20hrn = money1._20hrn + money2._20hrn;
	newMoney._10hrn = money1._10hrn + money2._10hrn;
	newMoney._5hrn = money1._5hrn + money2._5hrn;
	newMoney._2hrn = money1._2hrn + money2._2hrn;
	newMoney._1hrn = money1._1hrn + money2._1hrn;

	newMoney._50kop = money1._50kop + money2._50kop;
	newMoney._25kop = money1._25kop + money2._25kop;
	newMoney._10kop = money1._10kop + money2._10kop;
	newMoney._5kop = money1._5kop + money2._5kop;
	newMoney._2kop = money1._2kop + money2._2kop;
	newMoney._1kop = money1._1kop + money2._1kop;

	return newMoney;
}

Money Money::Subtract(const Money& money1, const Money& money2) {

	Money newMoney;

	newMoney._500hrn = money1._500hrn - money2._500hrn;
	newMoney._200hrn = money1._200hrn - money2._200hrn;
	newMoney._100hrn = money1._100hrn - money2._100hrn;
	newMoney._50hrn = money1._50hrn - money2._50hrn;
	newMoney._20hrn = money1._20hrn - money2._20hrn;
	newMoney._10hrn = money1._10hrn - money2._10hrn;
	newMoney._5hrn = money1._5hrn - money2._5hrn;
	newMoney._2hrn = money1._2hrn - money2._2hrn;
	newMoney._1hrn = money1._1hrn - money2._1hrn;

	newMoney._50kop = money1._50kop - money2._50kop;
	newMoney._25kop = money1._25kop - money2._25kop;
	newMoney._10kop = money1._10kop - money2._10kop;
	newMoney._5kop = money1._5kop - money2._5kop;
	newMoney._2kop = money1._2kop - money2._2kop;
	newMoney._1kop = money1._1kop - money2._1kop;

	return newMoney;
}
Money Money::MultiplyByDecimal(double multiplier) {
	Money newMoney(
		_500hrn = (int)(_500hrn * multiplier),
		_200hrn = (int)(_200hrn * multiplier),
		_100hrn = (int)(_100hrn * multiplier),
		_50hrn = (int)(_50hrn * multiplier),
		_20hrn = (int)(_20hrn * multiplier),
		_10hrn = (int)(_10hrn * multiplier),
		_5hrn = (int)(_5hrn * multiplier),
		_2hrn = (int)(_2hrn * multiplier),
		_1hrn = (int)(_1hrn * multiplier),

		_50kop = (int)(_50kop * multiplier),
		_25kop = (int)(_25kop * multiplier),
		_10kop = (int)(_10kop * multiplier),
		_5kop = (int)(_5kop * multiplier),
		_2kop = (int)(_2kop * multiplier),
		_1kop = (int)(_1kop * multiplier));


	return newMoney;
}
Money operator+(const Money& money1, const Money& money2) {
	Money result;
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
}

Money operator-(const Money& money1, const Money& money2) {
	Money result;
	result._500hrn = money1._500hrn - money2._500hrn;
	result._200hrn = money1._200hrn - money2._200hrn;
	result._100hrn = money1._100hrn - money2._100hrn;
	result._50hrn = money1._50hrn - money2._50hrn;
	result._20hrn = money1._20hrn - money2._20hrn;
	result._10hrn = money1._10hrn - money2._10hrn;
	result._5hrn = money1._5hrn - money2._5hrn;
	result._2hrn = money1._2hrn - money2._2hrn;
	result._1hrn = money1._1hrn - money2._1hrn;

	result._50kop = money1._50kop - money2._50kop;
	result._25kop = money1._25kop - money2._25kop;
	result._10kop = money1._10kop - money2._10kop;
	result._5kop = money1._5kop - money2._5kop;
	result._2kop = money1._2kop - money2._2kop;
	result._1kop = money1._1kop - money2._1kop;

	return result;
}

Money operator*(const Money& money, double multiplier) {
	Money result;
	result._500hrn = static_cast<int>(money._500hrn * multiplier);
	result._200hrn = static_cast<int>(money._200hrn * multiplier);
	result._100hrn = static_cast<int>(money._100hrn * multiplier);
	result._50hrn = static_cast<int>(money._50hrn * multiplier);
	result._20hrn = static_cast<int>(money._20hrn * multiplier);
	result._10hrn = static_cast<int>(money._10hrn * multiplier);
	result._5hrn = static_cast<int>(money._5hrn * multiplier);
	result._2hrn = static_cast<int>(money._2hrn * multiplier);
	result._1hrn = static_cast<int>(money._1hrn * multiplier);

	result._50kop = static_cast<int>(money._50kop * multiplier);
	result._25kop = static_cast<int>(money._25kop * multiplier);
	result._10kop = static_cast<int>(money._10kop * multiplier);
	result._5kop = static_cast<int>(money._5kop * multiplier);
	result._2kop = static_cast<int>(money._2kop * multiplier);
	result._1kop = static_cast<int>(money._1kop * multiplier);

	return result;
}
