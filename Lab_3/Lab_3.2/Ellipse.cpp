#include "Ellipse.h"
#include <cmath>
const double pi = std::acos(-1); // Defining pi

Ellipse::Ellipse(double x, double y, double semiMajorAxis, double semiMinorAxis) : Point(x, y) {
	if (semiMajorAxis <= 0 || semiMinorAxis <= 0) {
		std::cerr << "Error: Semi-axes must be greater than zero." << std::endl;
		exit(EXIT_FAILURE);
	}
	this->semiMajorAxis = semiMajorAxis;
	this->semiMinorAxis = semiMinorAxis;
}

double Ellipse::getSemiMajorAxis() const {
	return semiMajorAxis;
}

double Ellipse::getSemiMinorAxis() const {
	return semiMinorAxis;
}

double Ellipse::area() const {
	return pi * semiMajorAxis * semiMinorAxis;
}

Ellipse::operator std::string() const {
	std::stringstream ss;
	ss << "Center: " << static_cast<const Point&>(*this) << ", Semi-major Axis: " << semiMajorAxis << ", Semi-minor Axis: " << semiMinorAxis;
	return ss.str();
}

std::ostream& operator<<(std::ostream& out, const Ellipse& ellipse) {
	out << "Center: " << static_cast<const Point&>(ellipse) << ", Semi-axes: " << ellipse.semiMajorAxis << " " << ellipse.semiMinorAxis << ", area: " << ellipse.area();
	return out;
}

std::istream& operator>>(std::istream& in, Ellipse& ellipse) {
	in >> static_cast<Point&>(ellipse) >> ellipse.semiMajorAxis >> ellipse.semiMinorAxis;
	if (ellipse.semiMajorAxis <= 0 || ellipse.semiMinorAxis <= 0) {
		std::cerr << "Error: Semi-axes must be greater than zero." << std::endl;
		exit(EXIT_FAILURE);
	}
	return in;
}

Ellipse::~Ellipse() {}
