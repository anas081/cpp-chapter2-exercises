// ============================================================
// Problem 11: Automobile Fuel Tank Mileage
// Author: Muhammad Anas
//
// Description:
// This program prompts the user to enter the capacity of an
// automobile fuel tank (in gallons) and the miles per gallon
// (mpg) the automobile can be driven. It calculates and outputs
// the total number of miles the automobile can be driven without
// refueling.
// ============================================================

#include <iostream>
using namespace std;

int main() {
    // Declare variables
    double capacityGallons, milesPerGallon, totalMiles;

    // Input
    cout << "Enter the fuel tank capacity (in gallons): ";
    cin >> capacityGallons;

    cout << "Enter the miles per gallon (mpg) of the automobile: ";
    cin >> milesPerGallon;

    // Calculate total miles
    totalMiles = capacityGallons * milesPerGallon;

    // Output
    cout << "\n--- Result ---" << endl;
    cout << "The automobile can be driven " << totalMiles
         << " miles without refueling." << endl;

    return 0;
}
