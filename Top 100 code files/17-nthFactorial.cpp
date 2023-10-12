//C++ program to find nth fibonacci term using iteration
#include<iostream>
using namespace std;
int main()
{
 int n,f=0,s=1,nxt,i;
cout<<"Enter  n:";
cin>>n;
for(i=0;i<n-2;i++)
{
 nxt=f+s;
f=s;
s=nxt;
}
cout<<"fib("<<n<<") is "<<nxt<<endl;
return 0;
}
