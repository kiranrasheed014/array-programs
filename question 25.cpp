#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
int a,b;
cout<<"Enter value of a: ";
cin>>a;
cout<<"Enter value of b: ";
cin>>b;
a=a+b;
b=a-b;
a=a-b;
cout<<"After swap a: "<<a<<"b: "<<b;
getch();
}