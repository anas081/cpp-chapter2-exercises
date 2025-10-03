// ============================================================
// Problem 20: Used Car Salesperson Commission Range
// Author: Muhammad Anas
//
// Description:
// For each used car sold, commission is paid as:
//   Fixed commission + percentage of (selling price - cost)
//
// The program asks the user to enter:
//   * Fixed commission amount
//   * Commission percentage
//   * Purchasing cost of the car
//   * Minimum amount to add to cost
//   * Maximum amount to add to cost
//
// It then calculates:
//   * Minimum selling price
//   * Maximum selling price
//   * Commission range (min to max)
// ============================================================

#include <iostream>
using namespace std;

int main() {
    // Variables
    double fixedCommission, commissionPercent;
    double cost, minAdd, maxAdd;
    double minSellingPrice, maxSellingPrice;
    double minCommission, maxCommission;

    // Input
    cout << "Enter salesperson's fixed commission: $";
    cin >> fixedCommission;

    cout << "Enter commission percentage: ";
    cin >> commissionPercent;

    cout << "Enter purchasing cost of the car: $";
    cin >> cost;

    cout << "Enter minimum amount to add to cost: $";
    cin >> minAdd;

    cout << "Enter maximum amount to add to cost: $";
    cin >> maxAdd;

    // Calculations
    minSellingPrice = cost + minAdd;
    maxSellingPrice = cost + maxAdd;

    minCommission = fixedCommission + (commissionPercent / 100.0) * (minSellingPrice - cost);
    maxCommission = fixedCommission + (commissionPercent / 100.0) * (maxSellingPrice - cost);

    // Output
    cout << "\n--- Commission Report ---\n";
    cout << "Minimum Selling Price = $" << minSellingPrice << endl;
    cout << "Maximum Selling Price = $" << maxSellingPrice << endl;
    cout << "Minimum Commission    = $" << minCommission << endl;
    cout << "Maximum Commission    = $" << maxCommission << endl;

    return 0;
}
