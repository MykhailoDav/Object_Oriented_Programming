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


istream& operator >>(istream& in, Money& m)
{
	cout << "ʳ������ ������� �� 500 ���.: ";
	in >> m._500hrn;
	cout << "ʳ������ ������� �� 200 ���.: ";
	in >> m._200hrn;
	cout << "ʳ������ ������� �� 100 ���.: ";
	in >> m._100hrn;
	cout << "ʳ������ ������� �� 50 ���.: ";
	in >> m._50hrn;
	cout << "ʳ������ ������� �� 20 ���.: ";
	in >> m._20hrn;
	cout << "ʳ������ ������� �� 10 ���.: ";
	in >> m._10hrn;
	cout << "ʳ������ ������� �� 5 ���.: ";
	in >> m._5hrn;
	cout << "ʳ������ ������� �� 2 ���.: ";
	in >> m._2hrn;
	cout << "ʳ������ ������� �� 1 ���.: ";
	in >> m._1hrn;
	cout << "ʳ������ ����� �� 50 ���.: ";
	in >> m._50kop;
	cout << "ʳ������ ����� �� 25 ���.: ";
	in >> m._25kop;
	cout << "ʳ������ ����� �� 10 ���.: ";
	in >> m._10kop;
	cout << "ʳ������ ����� �� 5 ���.: ";
	in >> m._5kop;
	cout << "ʳ������ ����� �� 2 ���.: ";
	in >> m._2kop;
	cout << "ʳ������ ����� �� 1 ���.: ";
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
	sout << "ʳ������ ������� �� 500 ���.: " << _500hrn << "\n";
	sout << "ʳ������ ������� �� 200 ���.: " << _200hrn << "\n";
	sout << "ʳ������ ������� �� 100 ���.: " << _100hrn << "\n";
	sout << "ʳ������ ������� �� 50 ���.: " << _50hrn << "\n";
	sout << "ʳ������ ������� �� 20 ���.: " << _20hrn << "\n";
	sout << "ʳ������ ������� �� 10 ���.: " << _10hrn << "\n";
	sout << "ʳ������ ������� �� 5 ���.: " << _5hrn << "\n";
	sout << "ʳ������ ������� �� 2 ���.: " << _2hrn << "\n";
	sout << "ʳ������ ������� �� 1 ���.: " << _1hrn << "\n";
	sout << "ʳ������ ����� �� 50 ���.: " << _50kop << "\n";
	sout << "ʳ������ ����� �� 25 ���.: " << _25kop << "\n";
	sout << "ʳ������ ����� �� 10 ���.: " << _10kop << "\n";
	sout << "ʳ������ ����� �� 5 ���.: " << _5kop << "\n";
	sout << "ʳ������ ����� �� 2 ���.: " << _2kop << "\n";
	sout << "ʳ������ ����� �� 1 ���.: " << _1kop;
	return sout.str();
}
