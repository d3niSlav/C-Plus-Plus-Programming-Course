#include <iostream>
#include <sstream>
#include <string>
#include <fstream>

/*
Write a program which does the same as task 8, but instead of
printing to the console, asks the user for the name of an input
file and an output file (each entered on a separate line) and
reads the input from the input file and prints the output in
the output file. If the output file already exists, it should
be overwritten.

Note: the input and output file could be the same.
Note: just copy-paste the code from 8 to reuse it
*/

using namespace std;

int getNumbersCount(const string& inputData);
int * parseNumbers(const string& str, int& resultLength);
void addToSum(int source[], int length, int&sum);

int main() {
    ifstream file;
	file.open("task9-Numbers.txt", ios::binary);

    int sum = 0;
    char inputLine[256];
    while(!file.eof()) {
        file.getline(inputLine, 256);
        int numbersCount = getNumbersCount(inputLine);

        int * newNumbers = parseNumbers(inputLine, numbersCount);
        addToSum(newNumbers, numbersCount, sum);
        delete[] newNumbers;
    }
    file.close();

    ofstream myfile;
    myfile.open ("task9-Sum.txt", ios::trunc);
    myfile << sum;
    myfile.close();

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
