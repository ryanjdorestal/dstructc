#include <iostream>
using namespace std; 

//creating binary search algo
int bisearch(int a, int arr[], int b ){
    //setting up range bro
    int left = 0;
    int right = b - 1;
    
    while (left < right) {
        int mid = (left + right) / 2;
        
        if ( a > arr[mid]) {
            
            left = mid + 1;
            
        } else {
            
            right = mid;
            
        }
    } 
    
    if ( b > 0 && arr[left] == a) {
        
        return left + 1;
        
    } 
    else {
        
       cout << "Can't find it bro smh" << endl;
       return 0;
    }
    
    
}
//test in main
int main () {
    //bs array
    int arr[] = {1,3,5,7,9,11,13};
    int b = sizeof(arr) / sizeof(arr[0]);
    
    //input
    int a;
    cin >> a;
    
    cout << "this is how much money u owe me: $ " << bisearch(a, arr, b) << " Kidding." << endl;
    return 0;
    
    }