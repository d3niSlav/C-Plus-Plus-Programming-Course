#include <iostream>

using namespace std;

/*
Write a bool function that tests the function from task 8
with different values. It should call the function from 8
for a value and check the result against the expected
answer. Make the function check at least 10 numbers of
different length and return true if all were correct or
false if any of them was wrong. Call that this checking
function from main() and print it’s result.
*/

int reverseNumber(int number);
bool testReverseFunction(int originalNumber, int expectedNumber);

int main() {
    int originalNumbers[] = {528, 695578, 253, 250, -4, 0, 59536, -5385, 16852831, 6200};
    int expectedNumbers[] = {825, 875596, 352, 52, 0, 0, 63595, 0, 13825861, 26};

    for(int i = 0; i < sizeof(originalNumbers)/sizeof(originalNumbers[0]); i++) {
        cout << boolalpha << testReverseFunction(originalNumbers[i], expectedNumbers[i]) << endl;
    }

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

bool testReverseFunction(int originalNumber, int expectedNumber) {
    int reversedNumber = reverseNumber(originalNumber);
    cout<<originalNumber <<" -> " << reversedNumber << " : ";

    if(expectedNumber == reversedNumber) {
        return true;
    }
    return false;
}
