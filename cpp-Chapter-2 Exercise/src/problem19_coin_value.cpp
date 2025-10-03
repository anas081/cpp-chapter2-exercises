// ============================================================
// Problem 19: Total Coin Value in Pennies
// Author: Muhammad Anas
//
// Description:
// This program asks the user for the number of quarters, dimes,
// and nickels. It then calculates the total value of these
// coins in pennies.
//
// Conversion:
//   1 quarter = 25 pennies
//   1 dime    = 10 pennies
//   1 nickel  = 5 pennies
// ============================================================

#include <iostream>
using namespace std;

int main() {
    // Variables
    int quarters, dimes, nickels;
    int totalPennies;

    // Input
    cout << "Enter number of quarters: ";
    cin >> quarters;

    cout << "Enter number of dimes: ";
    cin >> dimes;

    cout << "Enter number of nickels: ";
    cin >> nickels;

    // Calculation
    totalPennies = (quarters * 25) + (dimes * 10) + (nickels * 5);

    // Output
    cout << "\n--- Coin Value ---\n";
    cout << "Total value = " << totalPennies << " pennies" << endl;

    return 0;
}
