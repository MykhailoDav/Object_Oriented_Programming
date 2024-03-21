#include "Equilateral.h"
#include <iostream>
#include <sstream>

using namespace std;
//#pragma pack(push, 1)
int Equilateral::counter = 0;
// Default constructor
Equilateral::Equilateral() : area(0), triangle() { Equilateral::counter++; }

// Parameterized constructor
Equilateral::Equilateral(double side) : area(0) {
	Triangle triangle(side, side, side); // Memory allocation and copying of the triangle
	calculateArea(); // Calculate the area
	Equilateral::counter++;
}
// Copy constructor
Equilateral::Equilateral(const Equilateral::Triangle& other) : area(0) {
  Triangle triangle(other); 
  Equilateral::counter++;
}

// Destructor
Equilateral::~Equilateral() {
	Equilateral::counter--;
}

// Setter for triangle
void Equilateral::setTriangle(const Triangle& t) {
	if (t.getSideA() == t.getSideB() && t.getSideB() == t.getSideC()) {
		triangle = t; // Assign the triangle object directly
		calculateArea(); // Calculate the area
	}
	else {
		std::cout << "Sides should be equal for an equilateral triangle" << std::endl;
		triangle = Triangle(); // Set the triangle to a default triangle
	}
}

// Method to calculate area
void Equilateral::calculateArea() {
	double s = triangle.perimeter() / 2; // Semi-perimeter of the triangle
	area = std::sqrt(s * (s - triangle.getSideA()) * (s - triangle.getSideB()) * (s - triangle.getSideC())); // Heron's formula
}

// Output operation
std::ostream& operator<<(std::ostream& out, const Equilateral& eq) {
	out << std::string(eq);
	return out;
}

// Input operation
std::istream& operator>>(std::istream& in, Equilateral& t) {
	double side;
	std::cout << "Enter side of equilateral:";
	in >> side;
	Equilateral::Triangle temp(side, side, side);
	t.setTriangle(temp);
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
Equilateral::operator std::string() const {
	std::stringstream ss;
	if (!triangle.isInvalid()) {
		ss << "Equilateral Triangle:" << std::endl;
		ss << triangle << std::endl;
		ss << "Area: " << area << std::endl;
	}
	else {
		ss << "Invalid Equilateral Triangle" << std::endl;
	}
	return ss.str();
}
// Method to check if the triangle is invalid (e.g., one side is zero)
bool Equilateral::Triangle::isInvalid() const {
	return sideA <= 0 || sideB <= 0 || sideC <= 0;
}

// Prefix increment operator
Equilateral& Equilateral::operator++() {
	++triangle;
	calculateArea();
	return *this;
}

// Prefix decrement operator
Equilateral& Equilateral::operator--() {
	--triangle;
	calculateArea();
	return *this;
}

// Postfix increment operator
Equilateral Equilateral::operator++(int) {
	Equilateral temp(*this);
	++(*this);
	return temp;
}

// Postfix decrement operator
Equilateral Equilateral::operator--(int) {
	Equilateral temp(*this);
	--(*this);
	return temp;
}
int Equilateral::getCounter()
{
	return Equilateral::counter;
}





///////////////////Triangle///////////////////////////
int Equilateral::Triangle::counter = 0;
Equilateral::Triangle::Triangle() : sideA(0), sideB(0), sideC(0) { Equilateral::Triangle::counter++; } // Default constructor

Equilateral::Triangle::Triangle(double a, double b, double c) {
	if (a > 0 && b > 0 && c > 0) {
		sideA = a;
		sideB = b;
		sideC = c;
	}
	else {
		cout << "Invalid side lengths, initializing to default values." << endl;
		sideA = sideB = sideC = 0;
	}
	Equilateral::Triangle::counter++;
}
Equilateral::Triangle::Triangle(const Triangle& other) {
	sideA = other.sideA;
	sideB = other.sideB;
	sideC = other.sideC;
	Equilateral::Triangle::counter++;
}
Equilateral::Triangle::~Triangle() {
	Equilateral::Triangle::counter--;
}
void Equilateral::Triangle::setSideA(double a) {
	if (a > 0)
	{
		sideA = a;
	}
}
void Equilateral::Triangle::setSideB(double b) {
	if (b > 0)
	{
		sideB = b;
	}
}
void Equilateral::Triangle::setSideC(double c) {
	if (c > 0)
	{
		sideC = c;
	}
}

istream& operator>>(istream& in, Equilateral::Triangle& t) {
	Equilateral::Triangle tr;
	cout << "Enter side A:";
	in >> tr.sideA;

	cout << "Enter side B:";
	in >> tr.sideB;

	std::cout << "Enter side C:";
	in >> tr.sideC;
	return in;
}
ostream& operator<<(ostream& output, const Equilateral::Triangle& t) {
	output << string(t);
	return output;
}

Equilateral::Triangle::operator string () const
{
	stringstream ss;
	ss << endl;
	ss << "Side A: " << sideA << std::endl;
	ss << "Side B: " << sideB << std::endl;
	ss << "Side C: " << sideC << std::endl;
	return ss.str();
}
// Assignment operator
Equilateral::Triangle& Equilateral::Triangle::operator=(const Equilateral::Triangle& other) {
	if (this != &other) {
		sideA = other.sideA;
		sideB = other.sideB;
		sideC = other.sideC;
	}
	return *this;
}
bool Equilateral::Triangle::operator==(const Triangle& other) {
	return sideA == other.sideA && sideB == other.sideB && sideC == other.sideC;
}

// Increment and Decrement operators
Equilateral::Triangle& Equilateral::Triangle::operator++() {
	++sideA;
	++sideB;
	++sideC;
	return *this;
}

Equilateral::Triangle& Equilateral::Triangle::operator--() {
	--sideA;
	--sideB;
	--sideC;
	return *this;
}

Equilateral::Triangle Equilateral::Triangle::operator++(int) {
	Triangle temp = *this;
	++(*this);
	return temp;
}

Equilateral::Triangle Equilateral::Triangle::operator--(int) {
	Triangle temp = *this;
	--(*this);
	return temp;
}
double Equilateral::Triangle::perimeter() const {
	return sideA + sideB + sideC;
}

void Equilateral::Triangle::calculateAngles(double& angleA, double& angleB, double& angleC) const {
	const double PI = 3.14159265358979323846;
	angleA = std::round(std::acos((sideB * sideB + sideC * sideC - sideA * sideA) / (2 * sideB * sideC)) * (180 / PI));
	angleB = std::round(std::acos((sideA * sideA + sideC * sideC - sideB * sideB) / (2 * sideA * sideC)) * (180 / PI));
	angleC = 180 - angleA - angleB;
}
int  Equilateral::Triangle::getCounter()
{
	return  Equilateral::Triangle::counter;
}

