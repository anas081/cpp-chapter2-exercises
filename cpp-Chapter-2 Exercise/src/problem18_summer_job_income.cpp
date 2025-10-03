// ============================================================
// Problem 18: Summer Job Income and Expenses
// Author: Muhammad Anas
//
// Description:
// A student works for 5 weeks, earning an hourly pay rate.
// - Total tax = 14% of gross income
// - 10% of net income spent on clothes
// - 1% of net income spent on school supplies
// - 25% of remaining money used for savings bonds
// - Parents contribute 50 cents for every dollar spent on bonds
//
// The program calculates:
//   a. Income before and after taxes
//   b. Money spent on clothes
//   c. Money spent on school supplies
//   d. Money spent on savings bonds
//   e. Parents' contribution to bonds
// ============================================================

#include <iostream>
using namespace std;

int main() {
    // Variables
    double hourlyRate, hoursPerWeek;
    double grossIncome, netIncome;
    double clothes, supplies, remaining, savingsBonds, parentsContribution;

    // Input
    cout << "Enter hourly pay rate: $";
    cin >> hourlyRate;

    cout << "Enter number of hours worked each week: ";
    cin >> hoursPerWeek;

    // Calculations
    grossIncome = hourlyRate * hoursPerWeek * 5;     // 5 weeks of work
    netIncome = grossIncome * (1 - 0.14);            // after 14% tax

    clothes = netIncome * 0.10;                      // 10% on clothes
    supplies = netIncome * 0.01;                     // 1% on supplies

    remaining = netIncome - (clothes + supplies);    // money left
    savingsBonds = remaining * 0.25;                 // 25% to savings bonds
    parentsContribution = savingsBonds * 0.50;       // 50% extra from parents

    // Output
    cout << "\n--- Summer Job Report ---\n";
    cout << "Gross Income (before tax): $" << grossIncome << endl;
    cout << "Net Income (after tax)   : $" << netIncome << endl;
    cout << "Spent on Clothes         : $" << clothes << endl;
    cout << "Spent on Supplies        : $" << supplies << endl;
    cout << "Savings Bonds            : $" << savingsBonds << endl;
    cout << "Parents' Contribution    : $" << parentsContribution << endl;

    return 0;
}
