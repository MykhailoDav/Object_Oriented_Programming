#include "circle.h"
#include <cmath>

const double pi = std::acos(-1); // Defining pi

Circle::Circle(double x, double y, double radius) : Point(x, y) {
	if (radius <= 0) {
		std::cerr << "Error: Radius must be greater than zero." << std::endl;
		exit(EXIT_FAILURE);
	}
	this->radius = radius;
}

double Circle::getRadius() const {
	return radius;
}

double Circle::area() const {
	return pi * radius * radius;
}

Circle::operator std::string() const {
	std::stringstream ss;
	ss << "Center: " << static_cast<const Point&>(*this) << ", Radius: " << radius;
	return ss.str();
}

std::ostream& operator<<(std::ostream& out, const Circle& circle) {
	out << "Center: " << static_cast<const Point&>(circle) << ", Radius: " << circle.radius << ", area: " << circle.area();
	return out;
}

std::istream& operator>>(std::istream& in, Circle& circle) {
	in >> static_cast<Point&>(circle) >> circle.radius;
	if (circle.radius <= 0) {
		std::cerr << "Error: Radius must be greater than zero." << std::endl;
		exit(EXIT_FAILURE);
	}
	return in;
}

Circle::~Circle() {}
