#include <iostream>
#include <string>
#include <cassert>

class Rational {
private:
    static const int MAX_SIZE = 100;
    unsigned char numerator[MAX_SIZE];
    unsigned char denominator[MAX_SIZE];
    int size;

public:
    // Constructors
    Rational();
    Rational(int numSize, int denSize);
    Rational(const Rational& other);

    // Destructor
    ~Rational();

    // Access methods
    int getNumerator(int index) const;
    void setNumerator(int index, int value);
    int getDenominator(int index) const;
    void setDenominator(int index, int value);
    int getSize() const;

    // Overloaded operators
    Rational& operator=(const Rational& other);
    bool operator==(const Rational& other) const;
    Rational operator+(const Rational& other) const;
    Rational operator-(const Rational& other) const;
    Rational operator*(const Rational& other) const;
    Rational operator/(const Rational& other) const;
    Rational& operator++();
    Rational operator++(int);
    Rational& operator--();
    Rational operator--(int);
    Rational& operator+=(const Rational& other);
    Rational& operator-=(const Rational& other);
    Rational& operator*=(const Rational& other);
    Rational& operator/=(const Rational& other);
    Rational operator-() const;

    // Input and output
    friend std::ostream& operator<<(std::ostream& out, const Rational& rational);
    friend std::istream& operator>>(std::istream& in, Rational& rational);

    // Conversion
    explicit operator std::string() const;

    // Additional methods
    Rational& simplify();
    void display() const;
};
