// ============================================================
// Problem 16: Milk Production Cost and Profit
// Author: Muhammad Anas
//
// Description:
// - Each milk carton holds 3.78 liters
// - Cost of producing 1 liter = $0.38
// - Profit per carton = $0.27
//
// The program asks the user for the total milk produced,
// then calculates:
//   * Number of cartons needed (approximate integer)
//   * Cost of production
//   * Profit
// ============================================================

#include <iostream>
using namespace std;

int main() {
    // Constants
    double cartonCapacity = 3.78;
    double costPerLiter = 0.38;
    double profitPerCarton = 0.27;

    // Variables
    double totalMilkLiters;
    int numCartons;      // use int instead of round for simplicity
    double cost, profit;

    // Input
    cout << "Enter total amount of milk produced this morning (in liters): ";
    cin >> totalMilkLiters;

    // Calculations
    numCartons = totalMilkLiters / cartonCapacity + 0.5;  // simple rounding
    cost = totalMilkLiters * costPerLiter;
    profit = numCartons * profitPerCarton;

    // Output
    cout << "\n--- Milk Production Report ---\n";
    cout << "Milk Cartons Needed  = " << numCartons << endl;
    cout << "Cost of Production   = $" << cost << endl;
    cout << "Profit               = $" << profit << endl;

    return 0;
}
