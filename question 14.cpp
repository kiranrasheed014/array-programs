#include <iostream>  
#include <algorithm>  
using namespace std;  
const int ARRAY_SIZE = 10;  
int main() {  
  // Create an array of integers  
  int arr[ARRAY_SIZE] = {3, 7, 1, 5, 2, 8, 4, 6, 9, 0};  
  // Print the unsorted array  
  cout << "Original array: ";  
  for (int i = 0; i < ARRAY_SIZE; i++) {  
    cout << arr[i] << " ";  
  }  
  cout << endl;  
  // Sort the array in descending order  
  sort(arr, arr + ARRAY_SIZE, greater<int>());  
  
  // Print the sorted array  
  cout << "Sorted array: ";  
  for (int i = 0; i < ARRAY_SIZE; i++) {  
    cout << arr[i] << " ";  
  }  
  cout << endl;  
  return 0;  
}  