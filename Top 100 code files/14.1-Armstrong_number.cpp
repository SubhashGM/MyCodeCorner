#include<iostream>
#include<math.h>
using namespace std;
int ndigits(int n)
{
 int digits=0;
 while(n)
{
 digits++;
n/=10;
}
return digits;
}
int main()
{
 int n;
cout<<"Enter a number: ";
cin>>n;
int temp=n,rem,sum=0,q;
q=ndigits(n);
while(temp)
{
 rem=temp%10;
 sum+=pow(rem,q);
 temp/=10;
}
if(sum==n)
	cout<<n<<" is an armstrong number";
else
 cout<<n<<" is not an armstrong number";
return 0;
}
