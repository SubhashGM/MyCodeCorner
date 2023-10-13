//C++ program to check whether a given number is perfect number or not
#include<iostream>
using namespace std;
int main()
{
 int num,i=1,sum=0;
 cout<<"\t\t\tPerfect Number!\nEnter any number: ";
cin>>num;
while(i<=num/2)
{
 if(num%i==0)
   sum+=i;
 i++;
}
if(sum==num)
cout<<num<<" is a perfect number"<<endl;
else
cout<<num<<" is not a perfect number"<<endl;
return 0;
}
