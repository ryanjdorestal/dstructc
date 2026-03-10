# include <iostream>
using namespace std;

int max(int [], int);

int main () {

 const int arraySize = 5;
 int myArray [arraySize] = {3,4,6,2,8};

 cout << 'The largest value is: ' << max(myArray, arraySize);

 return 0;
}
//end of main function

int max(int a[], int n) {

    int max = a[0];
    for(int i =1; i<n; i++){
        if (max < a[i])
        max = a[i];

    }
    
    return max;
}