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

const int max = 50000;

void factorial(int arr[], int n);
string getResult(int arr[]);
int coutTrailingZerosAtEnd(string number);

int main() {
    int *arr = new int[max];
    std::memset(arr, 0, max * sizeof(int));
    arr[max - 1] = 1;

    int number;
    cout << "Enter number for N = ";
    cin >> number;

    factorial(arr, number);
    string result = getResult(arr);
    cout << number << "! = " << result << ", answer: " << coutTrailingZerosAtEnd(result) << std::endl;

    delete[] arr;
    return 0;
}

void factorial(int arr[], int n) {
    if(!n) {
        return;
    }

    int carry = 0;

    for (int i = max - 1; i >= 0; i--) {
        arr[i] = (arr[i] * n) + carry;
        carry = arr[i] / 10;
        arr[i] %= 10;
    }

    factorial(arr, n - 1);
}

string getResult(int arr[]) {
    std::stringstream result("");
    int flag = 0;

    for (int i = 0; i < max; i++) {
        if (!flag && arr[i]) {
            flag = 1;
        }

        if(flag) {
            result << arr[i];
        }
    }

    return result.str();
}

int coutTrailingZerosAtEnd(string number) {
    int count = 0;

    for (int i = number.length() - 1; i >= 0; i--) {
        if(number[i] == '0') {
            count++;
        } else {
            break;
        }
    }
    return count;
}
