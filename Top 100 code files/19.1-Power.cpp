//C++ program to find power of a function using inbuilt library and iteration
#include<iostream>
#include<math.h>
using namespace std;
int main()
{
 int m,n,i,res=1;
cout<<"Enter m and n: ";
cin>>m>>n;
cout<<"Power of "<<m<<"^"<<n<<" using library is "<<pow(m,n)<<endl;
for(i=1;i<=n;i++)
{
 res*=m;
}
cout<<"Power of "<<m<<"^"<<n<<" without using library is "<<res<<endl;
return 0;
}
