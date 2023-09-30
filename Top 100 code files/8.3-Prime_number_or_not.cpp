//C++ Program to find prime numbers optimized by n/2.
// Time complexity : O(n)
#include<iostream>
//#include<math.h>
using namespace std;
int main()
{
 int n,i;
bool isPrime=true;
cout<<"Enter any number:";
cin>>n;
if(n<2)
	isPrime=false;
for(i=2;i<n/2;i++)
{
 if(n%i==0)
{
 isPrime=false;
break;
}
string result=isPrime?"Prime":"Not Prime";
cout<<n<<" is "<<result;
return 0;
}
}
