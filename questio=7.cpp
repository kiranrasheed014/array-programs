#include <iostream>
using namespace std;


int main()
{
    int array1[] = {9, 7, 1, 5, 25, 16, 13, 11, 22, 55, 6};
    int s1 = sizeof(array1)/sizeof(array1[0]);

    cout << "Original array: ";
    
    for (int i=0; i < s1; i++) 
    cout << array1[i] <<" ";
    
    cout <<"\nUnique elements of the said  array: ";
    for (int i=0; i<s1; i++)
    {
        int j;
        for (j=0; j<i; j++)
           if (array1[i] == array1[j])
               break;
         if (i == j)
          cout << array1[i] << " ";
    }
}
     
