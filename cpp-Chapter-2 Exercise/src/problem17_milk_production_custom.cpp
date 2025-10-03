// ============================================================
// Problem 17: Milk Production with User-Defined Costs & Profit
// Author: Muhammad Anas
//
// Description:
// - Each milk carton holds 3.78 liters
// - The user enters:
//     * Total milk produced
//     * Cost of producing 1 liter
//     * Profit per carton
//
// The program calculates:
//   * Number of cartons needed (rounded to nearest integer)
//   * Cost of production
//   * Profit
// ============================================================

#include <iostream>
using namespace std;

int main() {
    // Constants
    double cartonCapacity = 3.78;

    // Variables
    double totalMilkLiters, costPerLiter, profitPerCarton;
    int numCartons;
    double cost, profit;

    // Input
    cout << "Enter total amount of milk produced this morning (in liters): ";
    cin >> totalMilkLiters;

    cout << "Enter cost of producing 1 liter of milk: $";
    cin >> costPerLiter;

    cout << "Enter profit on each carton: $";
    cin >> profitPerCarton;

    // Calculations
    numCartons = totalMilkLiters / cartonCapacity + 0.5; // simple rounding
    cost = totalMilkLiters * costPerLiter;
    profit = numCartons * profitPerCarton;

    // Output
    cout << "\n--- Milk Production Report ---\n";
    cout << "Milk Cartons Needed  = " << numCartons << endl;
    cout << "Cost of Production   = $" << cost << endl;
    cout << "Profit               = $" << profit << endl;

    return 0;
}
