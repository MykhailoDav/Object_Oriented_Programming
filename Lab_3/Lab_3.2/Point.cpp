#include "Point.h"

Point::Point() : x(0.0), y(0.0) {}

Point::Point(double x, double y) {
    this->x = x;
    this->y = y;
}

void Point::setX(double x) {
    this->x = x;
}

void Point::setY(double y) {
    this->y = y;
}

double Point::getX() const {
    return x;
}

double Point::getY() const {
    return y;
}

Point::operator std::string() const {
    std::stringstream ss;
    ss << "(" << x << ", " << y << ")";
    return ss.str();
}

std::ostream& operator<<(std::ostream& out, const Point& point) {
    out << "(" << point.x << ", " << point.y << ")";
    return out;
}

std::istream& operator>>(std::istream& in, Point& point) {
    in >> point.x >> point.y;
    return in;
}

Point::~Point() {}
