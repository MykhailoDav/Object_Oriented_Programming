#pragma once
#include <iostream>
#include <string>
using namespace std;

//#pragma pack(push, 1)

class Matrix {
private:
    int** data;
    int size;

public:
    // Constructors
    Matrix(int N); // Constructor to initialize matrix with size N
    Matrix();      // Default constructor
    Matrix(const Matrix& other); // Copy constructor

    // Destructor
    ~Matrix();

    // Access methods
    int getSize() const;
    int getElement(int i, int j) const;

    // Set methods
    void setSize(int N);
    void setElement(int i, int j, int value);

    // Matrix operations
    double calculateNorm() const;
    void displayMenu();

    // Overloaded operators

    Matrix& operator ++ ();
    Matrix& operator -- ();
    Matrix operator ++ (int);
    Matrix operator -- (int);


    Matrix& operator=(const Matrix& other); // Assignment operator
    friend Matrix operator*(int scalar) const;     // Scalar multiplication
    friend bool operator==(const Matrix& other) const; // Matrix comparison
    friend bool operator!=(const Matrix& other) const; // Matrix comparison
    operator string () const;
    // Overloaded indexing operator for accessing rows
    int* operator[](int index);
    const int* operator[](int index) const;
    // Input and output
    friend istream& operator>>(istream&, Matrix& );
    friend ostream& operator<<(ostream&, const Matrix&);
};

