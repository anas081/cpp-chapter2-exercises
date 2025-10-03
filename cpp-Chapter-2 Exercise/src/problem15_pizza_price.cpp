// ============================================================
// Problem 15: Pizza Price Per Square Inch
// Author: Muhammad Anas
//
// Description:
// This program calculates the price of a pizza per square inch.
// It prompts the user to enter the radius (in inches) and the
// price of the pizza. It then computes the area of the pizza
// and divides the price by the area.
//
// Formula:
//   Area = PI * radius^2
//   Price per square inch = Price / Area
//
// (PI is declared as a named constant.)
// ============================================================

#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    const double PI = 3.141593;   // Named constant for PI
    double radius, price, area, pricePerSqInch;

    // Input
    cout << "Enter the radius of the pizza (in inches): ";
    cin >> radius;

    cout << "Enter the price of the pizza ($): ";
    cin >> price;

    // Calculate area and price per square inch
    area = PI * radius * radius;
    pricePerSqInch = price / area;

    // Output
    cout << fixed << setprecision(4);
    cout << "\n--- Pizza Price Analysis ---" << endl;
    cout << "Radius (inches)     = " << radius << endl;
    cout << "Price ($)           = " << price << endl;
    cout << "Area (sq. inches)   = " << area << endl;
    cout << "Price per sq. inch  = $" << pricePerSqInch << endl;

    return 0;
}
