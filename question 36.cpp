#include <iostream>
using namespace std;
 
int main()
{
    int num=0, i;
    cout<<"Enter number to print table: "<<endl;
    cin>>num;
    for(i=1; i<=10; i++)
    {
        cout<<num<<" x "<<i << " = "<<num*i<<endl;
    }
    return 0;
 
}