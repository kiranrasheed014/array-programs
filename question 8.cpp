#include<iostream>
using namespace std;
int main()
{
	int arr=[5];
	int i;
	for(int i=0;i<5;i++)
	{
		cout<<"enter a value"<<i+1<<":";
		cin>>arr[i];
			}
			cout<<"values are:";
			for(i=0;i<5;i++)
			{
				cout<<arr[i]<<"\t";
			}
			bool flag;
			for(i=0;i<5;i++)
			{
				int(min==arr[i])
				flag++;
			}
			if(flag==1)
			cout<<"values are found";
			else
			cout<<"values are not found";
			return 0;
}