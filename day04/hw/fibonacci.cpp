#include <iostream>
using namespace std;

//function instantiation (iterative fibonacci)
int fibonacci(int n);
int main() {

//testing out the function theory
fibonacci(15);

// my understanding of what I just did but also in comparsion of the recusive version of the fibnacci function.

string my_learning = R"(This assignment focused on understanding and comparing two different ways to compute Fibonacci numbers using recursive and iterative approaches. Both methods produce the same results, but they differ significantly in how they operate, how efficient they are, and how easy they are to understand and use.

The recursive Fibonacci algorithm is based directly on the mathematical definition of the sequence, where each value is defined as the sum of the two previous values. This makes the recursive version very intuitive and easy to read because the code closely mirrors the formula itself. At a surface level, it looks simple since the function calls itself with smaller inputs until it reaches the base cases of n equals 0 or n equals 1. However, this simplicity hides a major issue. Each function call generates two additional calls, which creates a branching structure similar to a binary tree. As a result, the same Fibonacci values are recomputed multiple times. For example, values like Fibonacci of 3 or 2 are calculated repeatedly in different branches of the recursion. This repeated work causes the time complexity to grow exponentially, which is commonly described as O of 2 to the n. Because of this, the recursive approach becomes very slow as n increases. In addition, recursion uses stack memory to keep track of each function call. Since the calls build on top of each other until reaching a base case, the space complexity is O of n due to the depth of the call stack.

The iterative Fibonacci algorithm takes a different approach. Instead of breaking the problem into smaller recursive calls, it builds the sequence step by step using a loop. It starts with the first two known values of the sequence and updates them as it moves forward. Each iteration computes the next value based on the previous two and then shifts the variables forward. This approach avoids recomputation entirely because each value is calculated exactly once. As a result, the time complexity is O of n, since the loop runs a number of times proportional to n. The space complexity is O of 1, because it only uses a fixed number of variables regardless of how large n becomes. This makes the iterative approach much more efficient and practical for larger inputs.

When comparing the two approaches, the recursive method is simpler from a conceptual standpoint because it directly reflects the mathematical definition of Fibonacci numbers. It is shorter and easier to write, and it clearly expresses the relationship between terms. However, it is inefficient in practice due to repeated calculations and higher memory usage. The iterative method requires more explicit control over variables and may seem less elegant at first, but it is far more efficient in both time and space. It provides better performance and is the preferred approach when working with larger values of n.

Overall, recursion offers clarity and aligns closely with theory, while iteration offers control and efficiency. For small inputs, both methods work fine, but for larger inputs, the iterative approach is significantly better.(
)";


}

//function definition
int fibonacci(int n) {

//creating iteration values
int a = 0;
int b = 1;

//base cases
if ( n == 0) {

    cout << " The fibnacci of " << n << " is just 0. " << endl;

    return 0;


} else if (n == 1) {

    cout << " The fibnacci of " << n << " is just 1. " << endl;

    return 1;

} else {
//setting up title for the list of fib numbers
cout << "Fibonacci iter list: " << endl;

//logic of iteration to find fib number;
for (int i = 0; i < n - 1; i++) {

   int c = a + b;

   cout << c << endl;

   a = b; 
   b = c;

}
}

cout << "The " << n << "th Fibonacci number is: " << b << endl;

return b;

}











