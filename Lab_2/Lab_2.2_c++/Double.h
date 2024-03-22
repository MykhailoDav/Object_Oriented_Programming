#pragma once
#include <iostream>
#include <string>
using namespace std;
//#pragma pack(push, 1)

class Double {
private:
    double x;

public:
    // Constructors
    Double(); // Default constructor
    Double(double); // Initialization constructor
    Double(const Double&); // Copy constructor

    ~Double(); // Destructor

    // Access methods
    double GetX() const; // Constant method to read the value of the x field
    void SetX(double value); // Method to write the value of the x field

    // Overloaded operators
    friend Double operator+(const Double&, const Double&);
    friend Double operator-(const Double&, const Double&);
    friend Double operator*(const Double&, const Double&);
    friend Double operator/(const Double&, const Double&);
    friend Double operator%(const Double&, const Double&);
    friend Double operator^(const Double&, const Double&);

    // Type conversion operator
    operator std::string() const;

    // Stream operators
    friend ostream& operator<<(ostream&, const Double&);
    friend istream& operator>>(istream&, Double&);

    Double& operator ++();
    Double& operator --();
    Double operator ++(int);
    Double operator --(int);

};