#include "Triangle.h"
#include <iostream>
#include <cmath>
#include <sstream>

using namespace std;

//#pragma pack(push, 1)
Triangle::Triangle(double a, double b, double c) {
	if (a > 0 && b > 0 && c > 0) {
		sideA = a;
		sideB = b;
		sideC = c;
	}
	else {
		cout << "Invalid side lengths, initializing to default values." << endl;
		sideA = sideB = sideC = 0;
	}
}
Triangle::Triangle(const Triangle& other) {
	sideA = other.sideA;
	sideB = other.sideB;
	sideC = other.sideC;
}


void Triangle::setSideA(double a) {
	if (a > 0)
	{
		sideA = a;
	}
}
void Triangle::setSideB(double b) {
	if (b > 0)
	{
		sideB = b;
	}
}
void Triangle::setSideC(double c) {
	if (c > 0)
	{
		sideC = c;
	}
}

istream& operator>>(istream& in, Triangle& t) {
	Triangle tr;
	cout << "Enter side A:";
	in >> tr.sideA;

	cout << "Enter side B:";
	in >> tr.sideB;

	std::cout << "Enter side C:";
	in >> tr.sideC;
	return in;
}
ostream& operator<<(ostream& output, const Triangle& t) {
	output << string(t);
	return output;
}
Triangle::operator string () const
{
	stringstream ss;
	ss << endl;
	ss << "Side A: " << sideA << std::endl;
	ss << "Side B: " << sideB << std::endl;
	ss << "Side C: " << sideC << std::endl;
	return ss.str();
}
// Assignment operator
Triangle& Triangle::operator=(const Triangle& other) {
	if (this != &other) {
		sideA = other.sideA;
		sideB = other.sideB;
		sideC = other.sideC;
	}
	return *this;
}
bool Triangle::operator==(const Triangle& other) {
	return sideA == other.sideA && sideB == other.sideB && sideC == other.sideC;
}
// Increment and Decrement operators
Triangle& Triangle::operator++() {
	++sideA;
	++sideB;
	++sideC;
	return *this;
}

Triangle& Triangle::operator--() {
	--sideA;
	--sideB;
	--sideC;
	return *this;
}

Triangle Triangle::operator++(int) {
	Triangle temp = *this;
	++(*this);
	return temp;
}

Triangle Triangle::operator--(int) {
	Triangle temp = *this;
	--(*this);
	return temp;
}
double Triangle::perimeter() const {
	return sideA + sideB + sideC;
}

void Triangle::calculateAngles(double& angleA, double& angleB, double& angleC) const {
	const double PI = 3.14159265358979323846;
	angleA = std::round(std::acos((sideB * sideB + sideC * sideC - sideA * sideA) / (2 * sideB * sideC)) * (180 / PI));
	angleB = std::round(std::acos((sideA * sideA + sideC * sideC - sideB * sideB) / (2 * sideA * sideC)) * (180 / PI));
	angleC = 180 - angleA - angleB;
}
