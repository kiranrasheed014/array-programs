#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
int a,b,c;
cout<<"Enter value of a: ";
cin>>a;
cout<<"Enter value of b: ";
cin>>b;
c=a;
a=b;
b=c;
cout<<"After swap a: "<<a<<"b: "<<b;
getch();
}