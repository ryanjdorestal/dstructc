#include <iostream>
using namespace std;

double power(double, int);
int counter = 0;
double num_tracker = 0;

int main() {

	double base = 5.0;
	int exp = 3;
	cout << base << "^" << exp << " = ";
	cout << power(base, exp);

	return 0;
} // end main()

//version. w/o recursion
double power(double a, int n) {
	if(n==0) {
         return 1;
    } else {
        for (int i = 0; i < n; i++) {
          
         num_tracker = n * n;
         
         return num_tracker;

         i++;
        }


    }
} //end power()
//version w/recursion
 string text = R"(
double power(double a, int n) {
	if(n==0)
		return 1;
	else
		return a * power(a, n-1);
        //recursive call)";
