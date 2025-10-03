// ============================================================
// Problem 23: Cindy's Stock Investment
// Author: Muhammad Anas
//
// Description:
// A brokerage firm charges 1.5% service charge on each transaction
// (buy or sell). Cindy buys and sells shares, and wants to know
// if she gained or lost.
//
// Program asks the user for:
//   * Number of shares
//   * Purchase price per share
//   * Selling price per share
//
// It calculates and displays:
//   * Amount invested
//   * Total service charges
//   * Amount received after selling
//   * Gain or loss
// ============================================================

#include <iostream>
using namespace std;

int main() {
    // Constant
    const double SERVICE_CHARGE_RATE = 0.015; // 1.5%

    // Variables
    int shares;
    double purchasePrice, sellingPrice;
    double amountInvested, purchaseCost, sellValue;
    double purchaseCharge, sellingCharge, totalCharges;
    double amountReceived, gainOrLoss;

    // Input
    cout << "Enter number of shares: ";
    cin >> shares;

    cout << "Enter purchase price per share: $";
    cin >> purchasePrice;

    cout << "Enter selling price per share: $";
    cin >> sellingPrice;

    // Calculations
    purchaseCost = shares * purchasePrice;
    purchaseCharge = purchaseCost * SERVICE_CHARGE_RATE;

    sellValue = shares * sellingPrice;
    sellingCharge = sellValue * SERVICE_CHARGE_RATE;

    amountInvested = purchaseCost + purchaseCharge;
    amountReceived = sellValue - sellingCharge;

    gainOrLoss = amountReceived - amountInvested;
    totalCharges = purchaseCharge + sellingCharge;

    // Output
    cout << "\n--- Stock Transaction Report ---\n";
    cout << "Amount Invested     = $" << amountInvested << endl;
    cout << "Total Service Fees  = $" << totalCharges << endl;
    cout << "Amount Received     = $" << amountReceived << endl;
    cout << "Gain/Loss           = $" << gainOrLoss << endl;

    return 0;
}
