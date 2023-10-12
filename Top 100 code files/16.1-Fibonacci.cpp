//Using recursion and static variable
#include<iostream>
using namespace std;
int fibonacci(int n)
{
 static int t1=0, t2=1,nxt;
if(n>0)
{
 cout<<t1<<",";
 nxt=t1+t2;
t1=t2;
t2=nxt;
fibonacci(n-1);
}
return 0;
}
int main()
{
 int n;
cout<<"Enter n: ";
cin>>n;
fibonacci(n);
cout<<endl;
return 0;
}
