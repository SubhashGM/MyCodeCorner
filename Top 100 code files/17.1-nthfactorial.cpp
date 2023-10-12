//c++ program to find the nth fibonacci term using recursion
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
 int n;
cout<<"Enter n: ";
cin>>n;
cout<<"fib("<<n<<") is "<<fibonacci(n);
return 0;
}
