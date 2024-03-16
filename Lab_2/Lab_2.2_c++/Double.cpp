#include "Double.h"
#include <sstream>

Double::Double() {
    x = 0;
}

Double::Double(double y) {
    x = y;
}

Double::Double(const Double& r) {
    x = r.x;
}

Double::~Double() {
    // TODO
}

double Double::GetX() const {
    return x;
}

void Double::SetX(double value) {
    x = value;
}

Double operator+(const Double& a, const Double& b) {
    Double t(0);
    t.x = a.x + b.x;
    return t;
}

Double operator-(const Double& a, const Double& b) {
    Double t(0);
    t.x = a.x - b.x;
    return t;
}

Double operator*(const Double& a, const Double& b) {
    Double t(0);
    t.x = a.x * b.x;
    return t;
}

Double operator/(const Double& a, const Double& b) {
    if (b.x != 0) {
        Double t(0);
        t.x = a.x / b.x;
        return t;
    }
    else {
        cout << "Error!" << endl;
        return -1; // Return a special value in case of an error
    }
}

Double operator%(const Double& a, const Double& b) {
    if (a.x != 0) {
        Double t(0);
        t.x = fmod(a.x, b.x);
        return t;
    }
    else {
        cout << "Error!" << endl;
        return -1; // Return a special value in case of an error
    }
}

Double operator^(const Double& a, const Double& b) {
    Double t(0);
    if (a.x == 0) return t; // 0 raised to any power = 0
    else t.x = 1; // Initial value = 1

    if (b.x == 0) return t; // Any number raised to power 0 = 1
    else if (b.x > 0) {
        for (int i = 1; i <= b.x; i++) t.x *= a.x;
    }
    else if (b.x < 0) {
        for (int i = 1; i <= -b.x; i++) t.x /= a.x;
    }
    return t;
}

Double Double::operator--() {
    x--;
    return *this;
}

Double::operator std::string() const {
    std::ostringstream oss;
    oss << x;
    return oss.str();
}

ostream& operator<<(ostream& out, const Double& a) {
    out << a.x << endl;
    return out;
}

istream& operator>>(istream& in, Double& a) {
    in >> a.x;
    return in;
}