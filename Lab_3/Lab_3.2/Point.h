#pragma once
#include <iostream>
#include <string>
#include <sstream>

class Point {
private:
	double x;
	double y;

public:
	Point();
	Point(double x, double y);

	void setX(double x);
	void setY(double y);

	double getX() const;
	double getY() const;

	operator std::string() const;

	friend std::ostream& operator<<(std::ostream& out, const Point& point);
	friend std::istream& operator>>(std::istream& in, Point& point);

	virtual  ~Point();
};