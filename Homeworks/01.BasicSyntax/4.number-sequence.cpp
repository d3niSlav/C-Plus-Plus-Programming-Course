#include <iostream>

using namespace std;

/*
Write a program that prints all the numbers from 1 to N.
*/

int main() {
    unsigned int n;
    cout << "Enter n = ";
    cin >> n;

    for(int i = 1; i <= n; i++) {
        cout << i << ", ";
    }

    cout << endl;
    return 0;
}
