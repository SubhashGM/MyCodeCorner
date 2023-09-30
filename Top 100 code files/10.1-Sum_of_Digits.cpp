#include<iostream>
using namespace std;
int sumofdigits(int n)
{
 if(n==0)
	return n;
 return (n%10) + sumofdigits(n/10);
}
int main()
{
 int n;
 cout<<"Enter a number: ";
cin>>n;
cout<<"Sum of "<<n<<" is "<<sumofdigits(n);
return 0;
}
