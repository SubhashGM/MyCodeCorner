//C++ program to print prime numbers with a range
#include<iostream>
#include<math.h>
using namespace std;
bool isPrime(int n)
{
 if(n<=1)
	return false;
else if(n==2)
	return true;
else if(n%2==0)
	return false;
for(int i=3;i<=sqrt(n);i+=2)
{
 if(n%i==0)
 {
  return false;
 }
}
return true;
}
int main()
{ 
 int n,i;
cout<<"Enter any number: ";
cin>>n;
for(i=1;i<=n;i++)
{
 if(isPrime(n))
{
 cout<<i<<" ";
}
}
return 0;
}
