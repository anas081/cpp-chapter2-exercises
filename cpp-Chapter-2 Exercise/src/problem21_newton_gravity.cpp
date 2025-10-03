// ============================================================
// Problem 21: Newton's Law of Gravitation
// Author: Muhammad Anas
//
// Description:
// Newton’s law states that the force (F) between two bodies of masses
// M1 and M2 is given by:
//
//   F = k * (M1 * M2) / (d^2)
//
// where:
//   k = 6.67 × 10^-8 dyn.cm^2/g^2
//   d = distance between the two bodies
//
// The program prompts the user to input:
//   * Mass of body 1 (grams)
//   * Mass of body 2 (grams)
//   * Distance between the bodies (cm)
//
// It then outputs the gravitational force F.
// ============================================================

#include <iostream>
using namespace std;

int main() {
    // Constant
    const double k = 6.67e-8;  // gravitational constant

    // Variables
    double mass1, mass2, distance, force;

    // Input
    cout << "Enter mass of first body (grams): ";
    cin >> mass1;

    cout << "Enter mass of second body (grams): ";
    cin >> mass2;

    cout << "Enter distance between bodies (cm): ";
    cin >> distance;

    // Calculation
    force = k * (mass1 * mass2) / (distance * distance);

    // Output
    cout << "\n--- Gravitational Force ---\n";
    cout << "Force (dynes) = " << force << endl;

    return 0;
}
