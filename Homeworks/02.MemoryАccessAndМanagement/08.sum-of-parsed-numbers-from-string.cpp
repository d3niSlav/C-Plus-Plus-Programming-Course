#include <iostream>
#include <sstream>
#include <string>
/*
Write a function int * parseNumbers(const string& str, int& resultLength)
which returns a pointer to new-allocated array with the numbers parsed
from str (assume you don’t need to handle wrongly-formatted input).
str will contain integer numbers separated by spaces. The function writes
the length of the allocated array in resultLength. Write a program which
lets the user enter a number of lines of integers from the console, and
prints their sum. Use the parseNumbers function in your program, but make
sure you delete each array once you’re done with it.

Example input (note: first line is the count of lines of numbers,
in this case: 2 lines):
2
1 2 3
4 5

Expected output (sum of 1 2 3 and 4 5): 15
*/

using namespace std;

int getNumbersCount(string& inputData);
int * parseNumbers(const string& str, int& resultLength);
void addToSum(int source[], int length, int&sum);

int main() {
    cout << "Enter an integer for the count of lines of numbers: ";
    int linesCount, currentLine = 0, sum = 0;
    cin >> linesCount;
    cin.ignore();

    string inputLine;
    while(currentLine < linesCount) {
        int numbersCount;
        getline(cin, inputLine);

        int * newNumbers = parseNumbers(inputLine, numbersCount);

        addToSum(newNumbers, numbersCount, sum);

        delete[] newNumbers;
        currentLine++;
    }

    cout << endl << "Sum: " << sum << endl;

    return 0;
}


int getNumbersCount(const string& inputData){
    istringstream inputStream(inputData);

    int numbersCount = 0;
    int currentNum = 0;

    while (inputStream >> currentNum) {
        numbersCount++;
    }

    return numbersCount;
}

int * parseNumbers(const string& str, int& resultLength) {
    int numbersCount = getNumbersCount(str);
    int * numbers = new int[numbersCount];

    numbersCount = 0;
    istringstream numberReader(str);

    int number;
    while (numberReader >> number) {
        numbers[numbersCount] = number;
        numbersCount++;
    }

    resultLength = numbersCount;

    return numbers;
}

void addToSum(int source[], int length, int&sum) {
    for(int i = 0; i < length; i++) {
        sum += source[i];
    }
}
