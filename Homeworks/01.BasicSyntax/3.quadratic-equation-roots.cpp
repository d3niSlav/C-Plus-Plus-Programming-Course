#include <iostream>
#include <cmath>

using namespace std;

/*
Write a program that enters the coefficients a, b and c
of a quadratic equation a*x2 + b*x + c = 0 and calculates
and prints its real roots. Note that quadratic equations
may have 0, 1 or 2 real roots.
*/

int main() {
    double a, b, c, determinant, x1, x2;
    cout << "Enter coefficient a = ";
    cin >> a;

    cout << "Enter coefficient b = ";
    cin >> b;

    cout << "Enter coefficient c = ";
    cin >> c;

    determinant = b * b - 4 * a * c;

    if (determinant > 0) {
        x1 = (-b + sqrt(determinant)) / (2 * a);
        x2 = (-b - sqrt(determinant)) / (2 * a);
        cout << "There are two different real roots of the equation." << endl;
        cout << "x1 = " << x1 << endl;
        cout << "x2 = " << x2 << endl;
    } else
    if (determinant == 0) {
        cout << "There are two same real roots of the equation." << endl;
        x1 = (-b + sqrt(determinant)) / (2 * a);
        x2 = x1;
        cout << "x1 = x2 =" << x1 << endl;
    } else {
        cout << "The equation does not have any real roots." << endl;
    }

    return 0;
}
