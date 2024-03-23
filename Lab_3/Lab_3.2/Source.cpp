#include <iostream>
#include "Point.h"
#include "Circle.h"
#include "Ellipse.h"

using namespace std;

// Function to print shape details using base class pointer
void printShapeDetails(const Point* shape) {
    cout << "Shape details: " << *shape << endl;
    cout << "Area: ";
    if (dynamic_cast<const Circle*>(shape)) {
        cout << static_cast<const Circle*>(shape)->area() << endl;
    }
    else if (dynamic_cast<const Ellipse*>(shape)) {
        cout << static_cast<const Ellipse*>(shape)->area() << endl;
    }
    else {
        cout << "N/A" << endl;
    }
}
int main() {
    // Creating a Point object
    cout << "Creating a Point object..." << endl;
    Point point1(2.5, 3.5);
    cout << "Point coordinates: " << point1 << endl;

    // Creating a Circle object
    cout << "\nCreating a Circle object..." << endl;
    Circle circle1(4.0, 5.0, 6.0);
    cout << "Circle details: " << circle1 << endl;
    cout << "Circle area: " << circle1.area() << endl;

    // Creating an Ellipse object
    cout << "\nCreating an Ellipse object..." << endl;
    Ellipse ellipse1(1.0, 2.0, 4.0, 3.0);
    cout << "Ellipse details: " << ellipse1 << endl;
    cout << "Ellipse area: " << ellipse1.area() << endl;

    // Using the << and >> operators
    cout << "\nTesting the << and >> operators..." << endl;
    Circle circle2(0, 0, 1);
    cout << "Enter circle details (x y radius): ";
    cin >> circle2;
    cout << "You entered: " << circle2 << endl;

    return 0;
}
