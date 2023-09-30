//C++ program to find sum of digits with time complexity: O(n)
#include<iostream>
using namespace std;
int main()
{
 int n,sum=0,rem,temp;
cout<<"Enter a number: ";
cin>>n;
temp=n;
while(n)
{
 rem=n%10;
 sum+=rem;
 n/=10;
}
cout<<"Sum of digits of "<<temp<<" is "<<sum;
return 0;
}
