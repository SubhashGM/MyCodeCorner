//Harshad number also known as niven number is a number which is exactly divisible by the sum of digits
#include<iostream>
using namespace std;
int main()
{
 int rem,num,sum=0,temp;
cout<<"\t\t\tHarshad number\nEnter any number: ";
cin>>num;
temp=num;
while(temp)
{ 
 rem=temp%10;
 sum+=rem;
 temp/=10;
}
if(num%sum==0)
cout<<num<<" is a Harshad number"<<endl;
else
cout<<num<<" is not a Harshad number"<<endl;
return 0;
}
