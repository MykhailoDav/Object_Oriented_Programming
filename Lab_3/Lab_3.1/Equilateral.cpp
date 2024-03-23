#include "Equilateral.h"
#include <iostream>
#include <cmath>
#include <sstream>
using namespace std;
//#pragma pack(push, 1)
// 
// constructors
Equilateral::Equilateral(int side) : area(0) {
	if (side > 0) {
		setSideA(side);
		setSideB(side);
		setSideC(side);
	}
	else {
		cout << "Side of triangle must be greater than 0" << endl;
		return;
	}
}
Equilateral::Equilateral(const double a, const double b, const double c) : area(0) {
	if (a == b == c) {
		setSideA(a);
		setSideB(b);
		setSideC(c);
	}
	else {
		cout << "Side of Equilateral triangle must be equal" << endl;
		return;
	}
}
// Copy constructor
Equilateral::Equilateral(const Triangle& other) : area(0) {
	if (getSideA() == getSideB() == getSideC()) {
		setSideA(other.getSideA());
		setSideB(other.getSideB());
		setSideC(other.getSideC());
		calculateArea(); // Calculate the area
	}
	else {
		std::cout << "Sides should be equal for an equilateral triangle" << std::endl;
		setSideA(0);
		setSideB(0);
		setSideC(0);
	}
}
Equilateral::Equilateral(const Equilateral& other) : area(other.area) {
	setSideA(other.getSideA());
	setSideB(other.getSideB());
	setSideC(other.getSideC());
}
// Destructor
Equilateral::~Equilateral(void) {}


// Method to calculate area
void Equilateral::calculateArea() {
	double s = perimeter() / 2; // Semi-perimeter of the triangle
	area = std::sqrt(s * (s - getSideA()) * (s - getSideB()) * (s - getSideC())); // Heron's formula

}

// Output operation
std::ostream& operator<<(std::ostream& out, const Equilateral& eq) {
	out << "Equilateral:" << endl;
	out << "Side A: " << eq.getSideA() << endl;
	out << "Side B: " << eq.getSideB() << endl;
	out << "Side C: " << eq.getSideC() << endl;
	out << "Area: " << eq.area;
	return out;
}

// Input operation
istream& operator >> (istream& in, Equilateral& e) {
	double side;
	cout << "Enter side of equilateral:";	in >> side;
	e.setSideA(side);
	e.setSideB(side);
	e.setSideC(side);
	e.calculateArea();
	return in;
}
// Assignment operator
Equilateral& Equilateral::operator=(const Equilateral& other) {
	if (this != &other) {
		setSideA(other.getSideA());
		setSideB(other.getSideB());
		setSideC(other.getSideC());
	}
	return *this;
}

// Conversion to string
Equilateral::operator string() const {
	stringstream ss;
	ss << "Equilateral Triangle:" << std::endl;
	ss << operator std::string();
	ss << "Area: " << area << std::endl;
	return ss.str();
}
