// -----------------------------------------------------------------------------
// Project:     Circle Area and Circumference Calculator
// Description: Calculates the area and circumference of a circle based on
//              user-provided radius input with validation and formatted output.
// Version:     "1.0.0"
// -----------------------------------------------------------------------------
// License: MIT
// Author:  Jeong
// -----------------------------------------------------------------------------


#include <iostream>
#include <cmath>
#include <iomanip>

// Circle Area and Circumference Calculator in C++
// This C++ program calculates the area and circumference of a circle based on the radius input by the user.

using namespace std;

// Function to calculate area
double calculateArea(double radius) {
    const double PI = 3.141592653589793;
    return PI * radius * radius;
}

// Function to calculate circumference
double calculateCircumference(double radius) {
    const double PI = 3.141592653589793;
    return 2 * PI * radius;
}

int main() {
    double radius;

    // Prompt the user to enter the radius
    cout << "Enter the radius of the circle: ";
    if (!(cin >> radius) || radius <= 0) {
        cout << "Invalid input. Radius must be a positive number.\n";
        return 1;
    }

    // Calculate area and circumference
    double area = calculateArea(radius);
    double circumference = calculateCircumference(radius);

    // Set the output precision to 2 decimal places
    cout << fixed << setprecision(2);

    // Output the results
    cout << "The area of the circle with radius " << radius << " is: " << area << endl;
    cout << "The circumference of the circle with radius " << radius << " is: " << circumference << endl;

    return 0;
}
