#include<iostream>
using namespace std;
int main()
{
 int n,m,sum;
cout<<"Enter a range from m to n:\nEnter m:";
cin>>m;
cout<<"Enter n:";
cin>>n;
sum=(n*(n+1)/2)-(m*(m+1)/2)+m;
cout<<"Sum ="<<sum;
}
