//c++ program to find hcf/gcd using recursion
#include<iostream>
using namespace std;
int gcd(int m,int n)
{
 return n==0?m:gcd(n,m%n);
}
int main()
{
 int n,m;
 cout<<"\t\t\tGCD\nEnter any num: ";
cin>>m>>n;
cout<<"GCD of "<<m<<" and "<<n<<": "<<gcd(m,n)<<endl;
return 0;
}
