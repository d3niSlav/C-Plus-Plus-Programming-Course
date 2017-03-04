#include <iostream>

using namespace std;

/*
Write a program that shows the sign (+ or -) of the product
of three real numbers without calculating it.
Use a sequence of if statements.
*/

int main() {
    double firstNumber, secondNumber, thirdNumber;
    cout << "Enter the first number a = ";
    cin >> firstNumber;

    cout << "Enter the second number b = ";
    cin >> secondNumber;

    cout << "Enter the third number c = ";
    cin >> thirdNumber;

    cout << endl;
    if(firstNumber < 0 && secondNumber < 0 && thirdNumber < 0 ||
            firstNumber > 0 && secondNumber > 0 && thirdNumber < 0 ||
            firstNumber < 0 && secondNumber > 0 && thirdNumber > 0 ||
            firstNumber < 0 && secondNumber < 0 && thirdNumber > 0) {
        cout << "The sigh of the product is \" - \"." << endl;
    } else if( firstNumber == 0 || secondNumber == 0 || thirdNumber == 0) {
        cout << "The sigh of the product is unknown, because the product is \" 0 \"." << endl;
    } else {
        cout << "The sigh of the product is \"+\"." << endl;
    }

    return 0;
}
