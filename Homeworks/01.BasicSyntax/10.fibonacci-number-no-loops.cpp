#include <iostream>

using namespace std;

/*
Write a function that calculates the Nth Fibonacci number.
For this task, you are NOT allowed to use any type of loop.
*/

int fib(int number) {
    if(number == 0) {
        return 0;
    }

    if (number == 1) {
        return 1;
    }

    return fib(number - 1) + fib(number - 2);
}

int main() {
    int n;
    cout << "Enter a number for n = ";
    cin >> n;

    cout <<"The " << n << " number of the Fibonacci sequence is : " << fib(n) << "." << endl;

    return 0;
}
