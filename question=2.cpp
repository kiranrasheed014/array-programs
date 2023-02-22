#include<iostream>
using namespace std;
int main()
{
	int arr[5];
	int i;
	for(int i=0;i<5;i++);
	{
		cout<<"enter a vale"<<i+1<<":";
		cin>>arr[i];
	}
	cout<<"values are";
	for(int i=0;i<5;i++);
	{
		cout<<arr[i]<<"\t";
	}
	int max=arr[0];
	for(int i=0;i<5;i++);
	{
		if(max>arr[i])
		{
			max=arr[i];
		}
		cout<<"maximum value is :"<<max;
	}
	return 0;
}