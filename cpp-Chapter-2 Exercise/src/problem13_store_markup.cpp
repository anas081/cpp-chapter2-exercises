// ============================================================
// Problem 13: Store Markup and Sales Tax
// Author: Muhammad Anas
//
// Description:
// This program reads the original price of an item, the markup
// percentage, and the sales tax rate. It then calculates and
// outputs:
//   - Original price
//   - Markup percentage
//   - Selling price (after markup)
//   - Sales tax rate
//   - Sales tax amount
//   - Final price (selling price + sales tax)
// ============================================================

#include <iostream>
#include <iomanip>   // for fixed and setprecision
using namespace std;

int main() {
    // Declare variables
    double originalPrice, markupPercent, taxRate;
    double sellingPrice, salesTax, finalPrice;

    // Input
    cout << "Enter the original price of the item: $";
    cin >> originalPrice;

    cout << "Enter the markup percentage: ";
    cin >> markupPercent;

    cout << "Enter the sales tax rate (in %): ";
    cin >> taxRate;

    // Calculate
    sellingPrice = originalPrice + (originalPrice * markupPercent / 100.0);
    salesTax = sellingPrice * taxRate / 100.0;
    finalPrice = sellingPrice + salesTax;

    // Output
    cout << fixed << setprecision(2);
    cout << "\n--- Price Details ---" << endl;
    cout << "Original Price   = $" << originalPrice << endl;
    cout << "Markup (%)       = " << markupPercent << "%" << endl;
    cout << "Selling Price    = $" << sellingPrice << endl;
    cout << "Sales Tax Rate   = " << taxRate << "%" << endl;
    cout << "Sales Tax        = $" << salesTax << endl;
    cout << "Final Price      = $" << finalPrice << endl;

    return 0;
}
