// ============================================================
// Problem 14: Hard Drive Actual Storage Capacity
// Author: Muhammad Anas
//
// Description:
// Manufacturers use the decimal system where:
//   1 GB = 1,000 MB = 1,000,000 KB = 1,000,000,000 bytes
//
// But in computer memory:
//   1 KB = 1024 bytes
//   1 MB = 1024 KB
//   1 GB = 1024 MB
//
// This program prompts the user for the advertised hard drive
// size (in GB) and calculates the actual storage capacity in
// GB (using 1 GB = 1024^3 bytes).
// ============================================================

#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    double manufacturerSizeGB;
    double actualBytes, actualSizeGB;

    // Input
    cout << "Enter the hard drive size specified by manufacturer (in GB): ";
    cin >> manufacturerSizeGB;

    // Convert manufacturer GB into bytes (decimal system)
    actualBytes = manufacturerSizeGB * 1e9; // 1 GB = 1,000,000,000 bytes

    // Convert bytes into computer GB (binary system, 1 GB = 1024^3 bytes)
    actualSizeGB = actualBytes / (1024.0 * 1024 * 1024);

    // Output
    cout << fixed << setprecision(2);
    cout << "\n--- Hard Drive Capacity ---" << endl;
    cout << "Manufacturer Size = " << manufacturerSizeGB << " GB" << endl;
    cout << "Actual Capacity   = " << actualSizeGB << " GB" << endl;

    return 0;
}
