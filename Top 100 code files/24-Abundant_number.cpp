#include<iostream>
using namespace std;
int main()
{ 
int num,sum=0,i;
cout<<"\t\t\tAbundant number\nEnter any number: ";
cin>>num;
for(i=1;i<num;i++)
{
 if(num%i==0)
	sum+=i;
}
if(num<sum)
cout<<num<<" is an abundant number with "<<(sum-num)<<" abundant factors"<<endl;
else
cout<<num<<" is not an abundant number"<<endl;
return 0;
}
