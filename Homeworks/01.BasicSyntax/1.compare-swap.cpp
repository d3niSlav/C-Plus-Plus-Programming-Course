#include <iostream>

using namespace std;

/*
Write a conditional statement that examines two integer variables
and exchanges their values if the first one is greater than the second one.
*/

int main() {
    int firstNumber, secondNumber;
    cout << "Enter the first number (integer) a = ";
    cin >> firstNumber;

    cout << "Enter the second number (integer) b = ";
    cin >> secondNumber;

    cout << endl;
    cout << "Before the comparison:" << endl << "a = " << firstNumber << " and b = " << secondNumber << endl;

    if(firstNumber > secondNumber) {
        firstNumber = firstNumber + secondNumber;
        secondNumber = firstNumber - secondNumber;
        firstNumber = firstNumber - secondNumber;
    }

    cout << endl;
    cout << "After the comparison:" << endl << "a = " << firstNumber << " and b = " << secondNumber << endl;

    return 0;
}
