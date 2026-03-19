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

