#include <iostream>

using namespace std;

/*
Write a program that reads from the console a
sequence of N integer numbers and returns the
minimal and maximal of them.
*/

int main() {
    int n, min, max;
    cout << "Enter n = ";
    cin >> n;

    int numbers[n];

    for(int i = 0; i < n; i++) {
        cout << "Number " << i + 1 << " = ";
        cin >> numbers[i];
    }

    min = numbers[0];
    max = min;

    for(int i = 1; i < n; i++) {
        if(min > numbers[i]) min = numbers[i];
        if(max < numbers[i]) max = numbers[i];
    }

    cout << "Minimal number is " << min << "." << endl;
    cout << "Maximal number is " << max << "." << endl;

    return 0;
}
