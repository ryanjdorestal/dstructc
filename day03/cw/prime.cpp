/** This program allows a user to type any integer value and will check if the number is prime or not.*/
/** NOTE: A number is prime if it is divisible by only itself and 1. (e.g. 5 is prime but 6 is not) */
/** Additional comments can be found at the end of the code. */
/** HAPPY LEARNING! */

/*************** CODE ************************/

#include <iostream>
#include <cmath>
using namespace std;

bool prime(int); //function prime declaration.

int main() {

    //instaation of x 
     int x; 
    
    //test case
    
    if (prime(251)) {

    cout << "251 is prime" << endl;
   } else{ 

    cout << "251 is not prime" << endl;
   }
    
    cout << "Enter any number" << endl;

    cin >> x;

	if (prime(x)) {
		cout << x << " is prime" << endl;
    } else{
		cout << x << " is not prime" << endl;
    }
   
   
    // end main
    return 0;
}

//function prime() definition
bool prime(int x) {
	for (int i = 2; i < x; i++) /* see 2 */
		if (x % i == 0) return false; /* see 3 */
	return true; /* see 4 */
} // end prime()

/*************** COMMENTS ********************/
/* 1. If the function prime returns true, print is prime. If it returns false, print is not prime. */
/* 2. Check if there is any divisor for x between 2 and x-1. If a divisor is found the number is not prime and the function returns false.
 * If no divisor is found after the loop terminates the number must be prime and the function returns true. */
/* 3. (x % i) is zero only if i divides x. Since i is a divisor of x, x is not prime. */
/* 4. This statement is executed only if the loop terminates and there is no divisor for x. */