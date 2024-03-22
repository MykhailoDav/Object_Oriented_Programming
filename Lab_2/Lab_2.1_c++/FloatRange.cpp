#include "FloatRange.h"
#include <sstream>

FloatRange::FloatRange() : first(0), second(0) {}

FloatRange::FloatRange(double f, double s) : first(f), second(s) {}

FloatRange::FloatRange(const FloatRange& other) : first(other.first), second(other.second) {}

FloatRange::~FloatRange() {}

void FloatRange::SetFirst(double f) {
	first = f;
}

void FloatRange::SetSecond(double s) {
	second = s;
}

double FloatRange::GetFirst() const {
	return first;
}

double FloatRange::GetSecond() const {
	return second;
}

FloatRange& FloatRange::operator=(const FloatRange& other) {
	if (this != &other) {
		first = other.first;
		second = other.second;
	}
	return *this;
}

FloatRange::operator string() const {
	stringstream ss;
	ss << "First value: " << first << endl;
	ss << "Second value: " << second << endl;
	return ss.str();
}

FloatRange operator+(const FloatRange& x, const FloatRange& y) {
	return FloatRange(x.first + y.first, x.second + y.second);
}

FloatRange operator-(const FloatRange& x, const FloatRange& y) {
	return FloatRange(x.first - y.first, x.second - y.second);
}

FloatRange operator*(const FloatRange& x, const FloatRange& y) {
	return FloatRange(x.first * y.first, x.second * y.second);
}

FloatRange operator/(const FloatRange& x, const FloatRange& y) {
	if (y.first == 0 || y.second == 0) {
		cout << "Division by zero!" << endl;
		return FloatRange();
	}
	return FloatRange(x.first / y.first, x.second / y.second);
}

FloatRange operator^(const FloatRange& x, const unsigned n) {
	FloatRange result(1, 1);
	for (unsigned i = 0; i < n; ++i) {
		result.first *= x.first;
		result.second *= x.second;
	}
	return result;
}

ostream& operator<<(ostream& out, const FloatRange& range) {
	out << string(range);
	return out;
}

istream& operator>>(istream& in, FloatRange& range) {
	cout << "Enter first value: ";
	in >> range.first;
	cout << "Enter second value: ";
	in >> range.second;
	return in;
}

FloatRange& FloatRange::operator++() {
	first++;
	return *this;
}

FloatRange& FloatRange::operator--() {
	first--;
	return *this;
}

FloatRange FloatRange::operator++(int) {
	FloatRange temp=*this;
	second++;
	return temp;
}

FloatRange FloatRange::operator--(int) {
	FloatRange temp = *this;
	second--;
	return temp;
}

bool FloatRange::RangeCheck(double x) const {

	return (first <= x && x <= second);
}
