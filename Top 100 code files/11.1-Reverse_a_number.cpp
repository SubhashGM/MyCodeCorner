//C++ program to reverse a number
#include<iostream>
using namespace std;
int main()
{
 int n;
 cout<<"Enter a number: ";
cin>>n;
int temp=n,rem,reverse=0;
while(n)
{ 
 rem=n%10;
 reverse=reverse*10+rem;
 n/=10;
}
cout<<"Reverse of "<<temp<<" is "<<reverse;
return 0;
}
