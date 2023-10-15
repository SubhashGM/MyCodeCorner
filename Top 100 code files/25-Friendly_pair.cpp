//c++ program to check whether two numbers are friendly pair or not
#include<iostream>
#include<math.h>
using namespace std;
int getDivisorSum(int num)
{
 int i=1,sum=0;
while(i<=sqrt(num))
{
 if(num%i==0)
{
if(i==1||i==num/i)
sum+=i;
else
sum+=i+num/i;
}
i++;
}
return sum;
}
int main()
{
 int num1,num2,sum1,sum2;
cout<<"\t\t\tFriendly Pair\nEnter any number: ";
cin>>num1>>num2;
sum1=getDivisorSum(num1);
sum2=getDivisorSum(num2);
if((sum1/num1)==(sum2/num2))
cout<<"They are friendly pair!"<<endl;
else
cout<<"They are friendly pair!"<<endl;
return 0;
}
