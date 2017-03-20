#include <iostream>
using namespace std;

/*
Write a program that finds the longest sequence of equal
elements in an integer array and then prints that sequence
on the console (integers separated by space or newline)
*/

int main()
{
    int array[] = {1, 2, 2, 4, 5, 5, 5, 5, 5, 6, 7, 7, 7};

    int value = array[0];
    int count = 1;
    int longestSequence = 1;

    for(int i = 1; i < sizeof(array) / sizeof(*array); i++) {
        if(array[i] == array[i - 1]) {
            count ++;
        } else {
            count = 1;
        }

        if(count > longestSequence) {
            value = array[i - 1];
            longestSequence = count;
        }
    }

    cout<<"The longest sequence of equal integers from the array is: ";
    for(int i = 0; i < longestSequence; i++) {
        cout << value << " ";
    }

    return 0;
}
