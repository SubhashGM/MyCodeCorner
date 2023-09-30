//C++ program to find sum of n natural numbers with O(1) time complexity
#include<iostream>
using namespace std;
int main()
{
 int n;
cout<<"Enter a number:";
cin>>n;
int sum;
sum=(n*(n+1))/2;
cout<<"Sum of "<<n<<" natural numbers is "<<sum; 
return 0;
}
