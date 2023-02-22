#include<iostream>
using namespace std;
int main()
{
	int arr[5],i;
	cout<<"enter 5 numbers:";
	for(int i=0;i<5;i++)
	cin>>arr[i];
	cout<<"\n odd numbers are:\n";
	for(i=0;i<5;i++)
	{
		if(arr[i]%2!=0)
		cout<<arr[i]<<" ";
	}
	
}