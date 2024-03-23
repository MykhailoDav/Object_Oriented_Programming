#pragma once
#include "Triangle.h" // Including the definition of the Triangle class
#include <iostream>

class Equilateral : public Triangle
{
private:
	double area;


public:

	Equilateral(int side);
	Equilateral(const double a = 0, const double b = 0, const double c = 0);
	Equilateral(const Triangle& other);
	Equilateral(const Equilateral& other);

	// Destructor
	~Equilateral(void);

	// Getter and setter methods
	double getArea() const { return area; };

	// Method to calculate the area
	void calculateArea();

	// Output operation
	friend std::ostream& operator<<(std::ostream& out, const Equilateral& eq);
	friend istream& operator >> (istream& in, Equilateral& e);

	// Conversion to string
	operator string() const;

	// Assignment operator
	Equilateral& operator=(const Equilateral& m);
};


