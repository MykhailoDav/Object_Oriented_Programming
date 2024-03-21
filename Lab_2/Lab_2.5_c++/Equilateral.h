#pragma once
#include "Triangle.h" // Including the definition of the Triangle class
#include <iostream>

class Equilateral {
private:
	double area;
	Triangle* triangle; // Pointer to a Triangle object

public:
	// Default constructor
	Equilateral();

	// Parameterized constructor
	Equilateral(const Triangle& t);

	// Copy constructor
	Equilateral(const Equilateral& other);

	// Destructor
	~Equilateral();

	// Getter and setter methods
	double getArea() const;
	const Triangle* getTriangle() const;
	void setTriangle(const Triangle& t);

	// Method to calculate the area
	void calculateArea();

	// Output operation
	friend std::ostream& operator<<(std::ostream& out, const Equilateral& eq);
	friend istream& operator >> (istream& in, Equilateral& m);

	// Conversion to string
	operator string() const;

	// Assignment operator
	Equilateral& operator=(const Equilateral& m);

	// Increment and decrement operators
	Equilateral& operator++();
	Equilateral& operator--();
	Equilateral operator++(int);
	Equilateral operator--(int);
};


