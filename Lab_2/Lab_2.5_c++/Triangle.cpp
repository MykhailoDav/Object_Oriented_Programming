#include "Triangle.h"
#include <iostream>
#include <cmath>
#include <sstream>

using namespace std;
namespace Lab_1_5 {
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

	void Triangle::read() {
		double a, b, c;
		do {
			std::cout << "Введіть довжину сторони A:";
			std::cin >> a;

			std::cout << "Введіть довжину сторони B:";
			std::cin >> b;

			std::cout << "Введіть довжину сторони C:";
			std::cin >> c;
		} while (!init(a, b, c));
	}

	void Triangle::display() const {
		std::cout << "Сторона A: " << sideA << std::endl;
		std::cout << "Сторона B: " << sideB << std::endl;
		std::cout << "Сторона C: " << sideC << std::endl;
	}
	// Input and output
	istream& operator>>(istream& input, Triangle& t) {

		input >> matrix.data[i][j];

		return input;
	}
	ostream& operator<<(ostream& output, const Triangle& t) {
		output << string(matrix);
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

	double Triangle::perimeter() const {
		return sideA + sideB + sideC;
	}

	void Triangle::calculateAngles(double& angleA, double& angleB, double& angleC) const {

		angleA = std::round(std::acos((sideB * sideB + sideC * sideC - sideA * sideA) / (2 * sideB * sideC)) * (180 / M_PI));
		angleB = std::round(std::acos((sideA * sideA + sideC * sideC - sideB * sideB) / (2 * sideA * sideC)) * (180 / M_PI));
		angleC = 180 - angleA - angleB;
	}
}
