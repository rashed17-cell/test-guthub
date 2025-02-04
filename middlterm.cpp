#include <iostream>
#include <cmath>
using namespace std;

int main() {
    // Coefficients of the equation ax^2 + bx + c = 0
    double a = 1.0, b = -3.0, c = 2.0;
    double discriminant = b * b - 4 * a * c;

    if (discriminant < 0) {
        cout << "The equation has complex roots." << endl;
    } else {
        // Calculating both roots using the quadratic formula
        double root1 = (-b + sqrt(discriminant)) / (2 * a);
        double root2 = (-b - sqrt(discriminant)) / (2 * a);

        cout << "Root 1: " << root1 << endl;
        cout << "Root 2: " << root2 << endl;
    }

    return 0;
}
