#include <iostream>

using namespace std;

/*
Write a program that calculates the greatest common divisor (GCD)
of given two numbers. Use the Euclidean algorithm.
*/

int gcd(int num1, int num2) {
    return (num2 != 0) ? gcd(num2, num1 % num2) : num1;
}

int main() {
    int firstNumber, secondNumber, greatestCommonDivisor;
    cout << "Enter the first number: ";
    cin >> firstNumber;

    cout << "Enter the second number: ";
    cin >> secondNumber;

    greatestCommonDivisor = gcd(firstNumber, secondNumber);

    cout << endl;
    if (gcd) {
        cout << "The GCD of " << firstNumber << " and " << secondNumber
                << " using Euclidean algorithm is: " << greatestCommonDivisor << "." << endl;
    }

    return 0;
}
