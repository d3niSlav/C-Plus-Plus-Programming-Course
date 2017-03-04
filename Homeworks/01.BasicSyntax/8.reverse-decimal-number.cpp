#include <iostream>

using namespace std;

/*
Write a function that reverses the digits of given
positive decimal number. Example: 256 -> 652
*/

int reverseNumber(int number);

int main() {
    int number;
    cout << "Enter a decimal number: ";
    cin >> number;

    cout << "Reversed number = " << reverseNumber(number);
    return 0;
}

int reverseNumber(int number) {
    int reversedNumber = 0, remainder;

    while(number != 0) {
        remainder = number % 10;
        reversedNumber = reversedNumber * 10 + remainder;
        number /= 10;
    }

    return reversedNumber;
}
