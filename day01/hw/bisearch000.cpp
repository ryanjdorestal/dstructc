#include <iostream>

using namespace std;

int binarySearch(int a[], int n, int x) {
    // Return 0 if the array(arr) is empty
    if (n == 0) {
        return 0;
    }

    // i is the left endpt, j is the right endpt
    int i = 1;
    int j = n;

    // Keep funneling the search interval until one position remains
    while (i < j) {
        int m = (i + j) / 2;

        //converting indexes 
        if (x > a[m - 1]) {
            i = m + 1;
        } else {
            j = m;
        }
    }

    // Check whether final position has x
    if (x == a[i - 1]) {
        return i;  // return i position
    } else {
        return 0;  // x not found
    }
}

int main() {
    // alr sorted array for binary search
    int numbers[] = {3, 7, 12, 18, 25, 31, 42, 56, 63, 77};
    int n = 10;
    int x;

    cout << "Array(arr) elements: ";
    for (int k = 0; k < n; k++) {
        cout << numbers[k] << " ";
    }
    cout << endl;

    cout << "Enter an integer to search: ";
    cin >> x;

    int location = binarySearch(numbers, n, x);

    if (location != 0) {
        cout << x << " found at: " << location << "." << endl;
    } else {
        cout << x << " not found in the array : ()" << endl;
    }

    return 0;
}