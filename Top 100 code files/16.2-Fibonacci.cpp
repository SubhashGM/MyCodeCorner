//C++ program for fibonacci series using recursion
#include<iostream>
using namespace std;
int fibonacci(int n)
{
 if(n<=1)
 return n;
else
 return fibonacci(n-1)+fibonacci(n-2);
}
int main()
{
 int i,n;
cout<<"Enter n: ";
cin>>n;
for(i=0;i<n;i++)
cout<<fibonacci(i)<<" ";
return 0;
}
