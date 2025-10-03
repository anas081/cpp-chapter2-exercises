// ============================================================
// Problem 12: Elapsed Time (Seconds → Hours:Minutes:Seconds)
// Author: Muhammad Anas
//
// Description:
// This program prompts the user to input the elapsed time
// (in seconds). It converts the time into hours, minutes,
// and seconds, and then displays the result in H:M:S format.
// Example: 9630 seconds = 2:40:30
// ============================================================

#include <iostream>
using namespace std;

int main() {
    // Declare variables
    int totalSeconds, hours, minutes, seconds;

    // Input
    cout << "Enter elapsed time in seconds: ";
    cin >> totalSeconds;

    // Convert seconds into hours, minutes, and seconds
    hours = totalSeconds / 3600;
    minutes = (totalSeconds % 3600) / 60;
    seconds = totalSeconds % 60;

    // Output
    cout << "\n--- Result ---" << endl;
    cout << "Elapsed time = " 
         << hours << ":" 
         << minutes << ":" 
         << seconds << endl;

    return 0;
}
