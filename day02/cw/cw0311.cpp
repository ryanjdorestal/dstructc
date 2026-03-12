#include <iostream>

using namespace std;
int findmaxinarr(int a, int arr[]);


int main() {
   //establish array size and values 

  //Has const to not change size 
  
  const int max_array_size = 10;
  
  int basic_array[max_array_size] = {1,2,3,4,5,6,7,8,9,10};

  cout << "The max value of the array is: " << findmaxinarr( max_array_size, basic_array) << endl;

  return 0;
}

//define the maximum value finder function

int findmaxinarr(int a, int arr[]) {

//instantiatiing variable max(seperate from function)
 
 int max = arr[0];
  for(int i = 1; i < a ; i++){
    if (max < arr[i])

       max = arr[i];
 }

 return max;

}
