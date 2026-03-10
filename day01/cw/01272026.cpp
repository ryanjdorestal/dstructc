#include <iostream>
using namespace std;

// iterative fibo
long long fib_iterative(int n) {
    if (n == 0) {
        return 0;
    } else {
        long long x = 0;   // x := 0
        long long y = 1;   // y := 1
        long long z;       // z will be x + y each loop

        // for i := 1 to n - 1
        for (int i = 1; i <= n - 1; i++) {
            z = x + y;  // z := x + y
            x = y;      // x := y
            y = z;      // y := z
        }

        return y; // return y
    }
}

int main() {
    int n;
    cout << "Enter term n (0 and up): ";
    cin >> n;

    cout << "The " << n << "-th Fibonacci is: " << fib_iterative(n) << endl;
    return 0;
}