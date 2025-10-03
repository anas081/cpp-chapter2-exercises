// ============================================================
// Problem 09: Average of Five Test Scores
// Author: Muhammad Anas
//
// Description:
// This program prompts the user to enter five test scores
// (decimal numbers). It calculates and prints the average
// of these scores.
// ============================================================

#include <iostream>
#include <iomanip>  // for setprecision
using namespace std;

int main() {
    // Declare variables
    double score1, score2, score3, score4, score5;
    double average;

    // Input
    cout << "Enter 5 test scores separated by spaces: ";
    cin >> score1 >> score2 >> score3 >> score4 >> score5;

    // Calculate average
    average = (score1 + score2 + score3 + score4 + score5) / 5.0;

    // Output with 2 decimal places
    cout << fixed << setprecision(2);
    cout << "\n--- Result ---" << endl;
    cout << "Average Test Score = " << average << endl;

    return 0;
}
