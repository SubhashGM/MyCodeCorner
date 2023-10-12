//C++ program to find fibonacci series using dynamic programming
#include<iostream>
using namespace std;
int fibonacci(int n)
{
 int fib[n-1],i;
fib[0]=0;
fib[1]=1;
cout<<fib[0]<<","<<fib[1]<<",";
for(i=2;i<n;i++)
{ 
 fib[i]=fib[i-1]+fib[i-2];
 cout<<fib[i]<<",";
}
return 0;
}
int main()
{ 
int n;
cout<<"Enter n: ";
cin>>n;
fibonacci(n);
cout<<endl;
return 0;
}
