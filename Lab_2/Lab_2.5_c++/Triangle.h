#pragma once
#include <iostream>
#include <string>
using namespace std;

//#pragma pack(push, 1)
namespace Lab_1_5 {
	class Triangle {
	private:
		double sideA;
		double sideB;
		double sideC;

	public:
		bool init(double a, double b, double c);
		void read();
		void display() const;
		double perimeter() const;
		void calculateAngles(double& angleA, double& angleB, double& angleC) const;

		// Getters
		double getSideA() const { return sideA; }
		double getSideB() const { return sideB; }
		double getSideC() const { return sideC; }

		// Setters
		void setSideA(double a);
		void setSideB(double b);
		void setSideC(double c);
	};
}

