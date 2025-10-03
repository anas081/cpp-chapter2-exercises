// ============================================================
// Problem 22: Rice Bags Needed for One Metric Ton
// Author: Muhammad Anas
//
// Description:
// One metric ton ≈ 2205 pounds.
// The program asks the user to enter the capacity of a rice bag (in pounds),
// then calculates how many such bags are required to store 1 metric ton
// of rice.
// ============================================================

#include <iostream>
using namespace std;

int main() {
    // Constant
    const double METRIC_TON = 2205; // pounds

    // Variables
    double bagCapacity;
    double numBags;

    // Input
    cout << "Enter the capacity of one rice bag (in pounds): ";
    cin >> bagCapacity;

    // Calculation
    numBags = METRIC_TON / bagCapacity;

    // Output
    cout << "\n--- Rice Storage Report ---\n";
    cout << "One metric ton = " << METRIC_TON << " pounds" << endl;
    cout << "Bag capacity   = " << bagCapacity << " pounds" << endl;
    cout << "Number of bags needed = " << numBags << endl;

    return 0;
}
