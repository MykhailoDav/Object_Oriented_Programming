#pragma once
#include "Point.h"

class Circle : public Point {
private:
    double radius;

public:
    Circle(double x, double y, double radius);

    double getRadius() const;
    double area() const;

    operator std::string() const;

    friend std::ostream& operator<<(std::ostream& out, const Circle& circle);
    friend std::istream& operator>>(std::istream& in, Circle& circle);

    ~Circle();
};
