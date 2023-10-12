#include<iostream>
using namespace std;
int main()
{ 
int n,i,f=0,s=1,nxt;
cout<<"Enter  n:";
cin>>n;
for(i=1;i<n;i++)
{
  cout<<f<<" ";
 nxt=f+s;
 f=s;
 s=nxt;
}
cout<<endl;
return 0;
}
