//C++ program to find reverse of a number using recursion
#include<iostream>
using namespace std;
int reverse(int n)
{
 if(n==0)
  return NULL;
 int rem=n%10;
 cout<<rem;
 reverse(n/10);
}
int main()
{
 int n;
cout<<"Enter a number: ";
cin>>n;
cout<<"Reverse of a number : "<<reverse(n);
return 0;
}
