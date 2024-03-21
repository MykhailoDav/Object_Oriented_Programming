#pragma once
#include <iostream>
#include <string>

using namespace std;

class Equilateral {
private:
	double area;
	static int counter;

public:
	class Triangle {
	private:
		double sideA;
		double sideB;
		double sideC;
		static int counter;
	public:
		// Constructors
		Triangle(); // Default constructor
		Triangle(double a, double b, double c); // Initialization constructor
		Triangle(const Triangle& other); // Copy constructor

		// Destructor
		~Triangle();

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
		bool isInvalid() const;
		static int getCounter();

	};

	// Default constructor
	Equilateral();

	// Parameterized constructor
	Equilateral(double side);

	// Copy constructor
	Equilateral(const Triangle& other);

	// Destructor
	~Equilateral();

	// Getter and setter methods
	double getArea() const { return area; }
	Triangle getTriangle() const { return triangle; }
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
	static int getCounter();

private: Triangle triangle;
};


