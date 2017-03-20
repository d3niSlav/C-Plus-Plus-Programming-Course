#include <iostream>

using namespace std;

/*
Write a program that reads two integer arrays from the console and compares them
element by element. For better code reusability, you could do the comparison in a
bool compArr(int arr1[], int length1, int arr2[], int length2)
function, which returns true if they are equal and false if not.
*/

bool compArr(int arr1[], int length1, int arr2[], int length2);

int main(){
    cout << "Enter length for the first array: ";
    int arrayLength1;
    cin >> arrayLength1;

    int arr1[arrayLength1];
    for(int i = 0; i < arrayLength1; i++) {
        cout << "a1[" << i << "] = ";
        cin >> arr1[i];
    }

    cout << "Enter length for the second array: ";
    int arrayLength2;
    cin >> arrayLength2;

    int arr2[arrayLength2];
    for(int i = 0; i < arrayLength2; i++) {
        cout << "a2[" << i << "] = ";
        cin >> arr2[i];
    }

    if(compArr(arr1, arrayLength1, arr2, arrayLength2)) {
        cout << "The arrays are equal!" << endl;
    } else {
        cout << "The arrays are different!" << endl;
    }

    return 0;
}

bool compArr(int arr1[], int length1, int arr2[], int length2){
    if(length1 != length2) {
        return false;
    }

    for(int i = 0; i < length1; i++) {
        if(arr1[i] != arr2[i]) {
            return false;
        }
    }

    return true;
}
