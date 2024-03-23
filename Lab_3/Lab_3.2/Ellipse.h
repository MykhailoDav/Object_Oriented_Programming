#pragma once
#include "point.h"

class Ellipse : public Point {
private:
    double semiMajorAxis;
    double semiMinorAxis;

public:
    Ellipse(double x, double y, double semiMajorAxis, double semiMinorAxis);

    double getSemiMajorAxis() const;
    double getSemiMinorAxis() const;
    double area() const;

    operator std::string() const;

    friend std::ostream& operator<<(std::ostream& out, const Ellipse& ellipse);
    friend std::istream& operator>>(std::istream& in, Ellipse& ellipse);

    ~Ellipse();
};