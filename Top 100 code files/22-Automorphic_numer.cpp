//C++ program to check a number is automorphic or not
//An automorphic number is a number whose square ends with the number itself
#include<iostream>
using namespace std;
int isautomorphic(int num)
{
 int sqr=num*num;
while(num)
{ 
 if(num%10!=sqr%10)
	return 0;
 num/=10;
 sqr/=10;
}
return 1;
}
int main()
{
 int num;
 cout<<"\t\t\tAutomorphic Number\nEnter any number: ";
 cin>>num;
 if(isautomorphic(num))
	cout<<num<<" is an automorphic number!"<<endl;
 else
		cout<<num<<" is not an automorphic number!"<<endl;
return 0;
}
