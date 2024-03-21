#include "Equilateral.h"
#include <iostream>
#include <cmath>
#include <sstream>
using namespace std;


//#pragma pack(push, 1)
// Default constructor

Equilateral::Equilateral() : area(0), triangle(nullptr) {}

// Parameterized constructor
Equilateral::Equilateral(const Triangle& t) : area(0) {
	if (t.getSideA() == t.getSideB() && t.getSideB() == t.getSideC()) {
		triangle = new Triangle(t); // Memory allocation and copying of the triangle
		calculateArea(); // Calculate the area
	}
	else {
		std::cout << "Sides should be equal for an equilateral triangle" << std::endl;
		triangle = nullptr; // Set the pointer to nullptr in case of incorrect triangle sides
	}
}

// Copy constructor
Equilateral::Equilateral(const Equilateral& other) : area(other.area) {
	if (other.triangle != nullptr) {
		triangle = new Triangle(*(other.triangle)); // Copying the triangle
	}
	else {
		triangle = nullptr;
	}
}

// Destructor
Equilateral::~Equilateral() {
	delete triangle; // Freeing memory
}

// Getter for area
double Equilateral::getArea() const {
	return area;
}

// Getter for triangle
const Triangle* Equilateral::getTriangle() const {
	return triangle;
}

// Setter for triangle
void Equilateral::setTriangle(const Triangle& t) {
	delete triangle; // Delete the previous triangle
	if (t.getSideA() == t.getSideB() && t.getSideB() == t.getSideC()) {
		triangle = new Triangle(t); // Memory allocation and copying of the triangle
		calculateArea(); // Calculate the area
	}
	else {
		std::cout << "Sides should be equal for an equilateral triangle" << std::endl;
		triangle = nullptr; // Set the pointer to nullptr in case of incorrect triangle sides
	}
}

// Method to calculate area
void Equilateral::calculateArea() {
	if (triangle != nullptr) {
		double s = triangle->perimeter() / 2; // Semi-perimeter of the triangle
		area = std::sqrt(s * (s - triangle->getSideA()) * (s - triangle->getSideB()) * (s - triangle->getSideC())); // Heron's formula
	}
}

// Output operation
std::ostream& operator<<(std::ostream& out, const Equilateral& eq) {
	out << std::string(eq);
	return out;
}

// Input operation
istream& operator>>(std::istream& in, Equilateral& t) {
	double side;
	std::cout << "Enter side of equilateral:";
	in >> side;
	// Створення рівностороннього трикутника зі введеним значенням сторони
	t.setTriangle(Triangle(side, side, side));
	return in;
}


// Assignment operator
Equilateral& Equilateral::operator=(const Equilateral& other) {
	if (this != &other) {
		triangle = other.triangle;
		area = other.area;
	}
	return *this;
}

// Conversion to string
Equilateral::operator string() const {
	stringstream ss;
	if (triangle != nullptr) {
		ss << "Equilateral Triangle:" << std::endl;
		ss << triangle->operator std::string();
		ss << "Area: " << area << std::endl;
	}
	else {
		ss << "Invalid Equilateral Triangle" << std::endl;
	}
	return ss.str();
}

// Prefix increment operator
Equilateral& Equilateral::operator++() {
	if (triangle != nullptr) {
		++(*triangle);
		calculateArea();
	}
	return *this;
}

// Prefix decrement operator
Equilateral& Equilateral::operator--() {
	if (triangle != nullptr) {
		--(*triangle);
		calculateArea();
	}
	return *this;
}

// Postfix increment operator
Equilateral Equilateral::operator++(int) {
	Equilateral temp(*this);
	if (triangle != nullptr) {
		++(++(*triangle));
		calculateArea();
	}
	return temp;
}

// Postfix decrement operator
Equilateral Equilateral::operator--(int) {
	Equilateral temp(*this);
	if (triangle != nullptr) {
		--(--(*triangle));
		calculateArea();
	}
	return temp;
}


