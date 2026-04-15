#include <iostream>
using namespace std;

int factorial(int);

int main() {

	int number=5;
	cout << number << "! = " << factorial(number) << endl;

	return 0;
} // end main()



//example w/o recursive call
int factorial(int n) {

    switch(n) {
         case 0:
            return 1;
            break;
         case 1: 
            return 1;
             break;
        default:
             return n * factorial(n-1);
             break;

    }

//recursive version
//int factorial(int n) {

	//if(n==0)
		//return 1;
	//else
		//return n * factorial(n-1);

} //end factorial()
