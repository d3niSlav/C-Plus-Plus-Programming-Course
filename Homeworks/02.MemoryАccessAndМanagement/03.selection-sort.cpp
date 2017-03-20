#include <iostream>
using namespace std;

/*
Write a void selectionSort(int a[], int start, int end) function
that uses the selection sort algorithm to sort the elements from
arr[start] to arr[end – 1] in increasing order (the elements outside
the [start, end) range shouldn’t be sorted). This function modifies
the array, so that the elements between start and end are sorted.

Selection sort: in this case it would just find the smallest element
between start and end, and place it at the start, then find the next
smallest between the remaining (aka start + 1 and end) and place it
at the next position (aka start + 1) and so on.
*/

void selectionSort(int a[], int start, int end);

int main() {
    int array[] = { 52, 65, 12, 5, 55, 24 };
    int from = 2;
    int to = 6;
	int size = sizeof(array) / sizeof(*array);

    cout << "Before sort: ";
	for (int i = 0; i < size; i++) {
        cout << array[i] << " ";
    }

    selectionSort(array, from, to);

    cout << "\nAfter sort: ";
    for (int i = 0; i < size; i++) {
		cout << array[i] << " ";
    }
    return 0;
}

void selectionSort(int a[], int start, int end) {
    if(start >= end){
        cout << "\nInvalid range! The array will not be sorted!" << endl;
        return;
    }

    int i, j, min, temp;

    for (i = start; i < end - 1; i++) {
        min = i;
		for (j = i + 1; j < end; j++) {
            if (a[j] < a[min])
		        min = j;
        }

        if(min != i) {
		    temp = a[i];
		    a[i] = a[min];
		    a[min] = temp;
        }
    }
}
