// ============================================================
// Problem 10: Sum of Five Decimal Numbers (Rounded)
// Author: Muhammad Anas
//
// Description:
// This program prompts the user to enter five decimal numbers.
// It calculates the sum, rounds the result to the nearest
// integer, and prints the result.
// ============================================================

#include <iostream>
#include <cmath>    // for round()
using namespace std;

int main() {
    // Declare variables
    double num1, num2, num3, num4, num5, sum;
    int roundedSum;

    // Input
    cout << "Enter 5 decimal numbers separated by spaces: ";
    cin >> num1 >> num2 >> num3 >> num4 >> num5;

    // Calculate sum
    sum = num1 + num2 + num3 + num4 + num5;

    // Round to nearest integer
    roundedSum = round(sum);

    // Output
    cout << "\n--- Result ---" << endl;
    cout << "Sum (rounded to nearest integer) = " << roundedSum << endl;

    return 0;
}
