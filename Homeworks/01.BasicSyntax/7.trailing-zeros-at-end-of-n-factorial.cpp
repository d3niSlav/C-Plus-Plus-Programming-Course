#include <iostream>
#include <cstring>
#include <sstream>

using std::cout;
using std::cin;
using std::string;

/*
Write a program that calculates for given N how many trailing
zeros present at the end of the number N!. Examples N = 10,
N! = 3628800, answer 2; N! = 2432902008176640000, answer: 4.
Make sure your program works for N! up to 50 000.
*/

int coutTrailingZerosAtEnd(int n);

int main() {
    int number;
    cout << "Enter number for N = ";
    cin >> number;

    cout << "The number of trailing zeros of " << number << "! is " << coutTrailingZerosAtEnd(number) << "." << std::endl;

    return 0;
}

int coutTrailingZerosAtEnd(int  n) {
    int numberOfZeros = 0;

    for (int i = 5; n / i >= 1; i *= 5) {
          numberOfZeros += n/i;
    }

    return numberOfZeros;
}
