#pragma once
#include <iostream>
#include <string>
using namespace std;


class Triangle {
private:
	double sideA;
	double sideB;
	double sideC;

public:
	// Constructors
	Triangle() : sideA(0), sideB(0), sideC(0) {} // Default constructor
	Triangle(double a, double b, double c); // Initialization constructor
	Triangle(const Triangle& other); // Copy constructor

	// Destructor
	~Triangle() {}

	// Getters
	double getSideA() const { return sideA; }
	double getSideB() const { return sideB; }
	double getSideC() const { return sideC; }

	// Setters
	void setSideA(double a);
	void setSideB(double b);
	void setSideC(double c);


	double perimeter() const;
	void calculateAngles(double& angleA, double& angleB, double& angleC) const;

	// Input and output

	Triangle& operator = (const Triangle& m);
    bool operator == (const Triangle& m);
	friend ostream& operator << (ostream& out, const Triangle& m);
	friend istream& operator >> (istream& in, Triangle& m);

	operator string () const;

	Triangle& operator ++ ();
	Triangle& operator -- ();
	Triangle operator ++ (int);
	Triangle operator -- (int);
};


