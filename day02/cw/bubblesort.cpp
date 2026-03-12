/** This program implements and illustrates Bubble Sort - a very simple sorting algorithm using an array.Bubble sort repeatedly scans the array and swaps adjacent values if they are not in order. At the end of each scan larger values 'bubble' up to their positions in the ordered array.
Note: The output displays the content of the array after each swap. The two numbers involved are placed inside (). */

/** More comments can be found at the end of the code.*/
/** HAPPY LEARNING! */

/*************** CODE ************************/
#include<iostream>
#include <iomanip>
using namespace std;

int myArray[] = {7,2,4,2,9,5,6,1,5}; /* see 1 */
int arraySize = sizeof(myArray)/sizeof(myArray[0]); /* see 2 */
void BubbleSort(); /* see 3 */ 
void swap(int one, int two); /* see 4 */ 
void printMyArray(int, int); /* see 5 */ 

int main(){

    cout << "Array values before sorting:\n";
    printMyArray(-1,-1); /* see 6 */
    cout << endl;

    BubbleSort(); /* see 7 */ 

    cout << "\nThe array has been sorted.";
    return 0;
} // end main

void BubbleSort() { /* see 8 */ 
	for(int i=0; i<arraySize; i++)
		for(int j=0; j<arraySize-1-i; j++){
			if(myArray[j] > myArray[j+1])
				swap(j, j+1);
		}
} // end BubbleSort

void swap(int one, int two) { /* see 9 */ 
	int temp = myArray[one];
	myArray[one] = myArray[two];
	myArray[two] = temp;

	static int swapCount=1;
	cout << "Swap " << setw(2) << swapCount++ <<":  ";
	printMyArray(one, two);
}// end swap

void printMyArray(int one, int two) { /* see 10 */ 
	  for(int j=0; j<arraySize; j++)
		  if(j==one or j==two)
			  cout << "(" << myArray[j] << ")";
		  else
			  cout << " " << myArray[j] << " ";
	  cout << endl;
}//end printMyArray()

/* ************** COMMENTS ******************* */
/* 1. You can add/change/delete values in this array */
/* 2. Calculating size of array for later use. */
/* 3. Function performing the sorting of values */
/* 4. Function swapping two values in the array */
/* 5. Function printing the content of the array */ 
/* 6. Print initial state of the array */
/* 7. Call function for sorting values */
/* 8. BubbleSort() uses a nested for loop to sort the values. The first (outer) loop runs n times if there are n values. Each time the largest value from the unsorted portion of the array 'bubbles up' to its position. The second (inner) loop scans the 'unsorted' portion of the array and swaps adjacent values if our of order. */ 
/* 9. Function swap() swaps two values in the array and keep track of the number of swaps performed. */ 
/* 10. This function prints the content of the array after each swap. It also places () around the values which are swapped. */ 