//C++ program to find factorial using recursion
#include<iostream>
using namespace std;
int fact(int n)
{int result;
 if(n==1)
 return n;
 else
 result=n*fact(n-1);
return result;
}
int main()
{
 int n;
cout<<"Enter n: ";
cin>>n;
cout<<"Factorial of "<<n<<" is "<<fact(n)<<endl;
return 0;
}
