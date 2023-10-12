#include<iostream>
#include<math.h>
using namespace std;
int ndigits(int n)
{
 int len=0;
while(n)
{
 len++;
n/=10;
}
return len;
}
int main()
{
 int m,n;
 cout<<"Enter a range(m n): ";
cin>>m>>n;
int i,rem,sum=0,q,temp;
for(i=m+1;i<n;i++)
{
 sum=0;
temp=i;
q=ndigits(i);
 while(temp)
 {
   rem=temp%10;
   sum+=pow(rem,q);
   temp/=10;
 }
if(sum==i)
cout<<i<<" ";
}
cout<<endl;
return 0;
}
