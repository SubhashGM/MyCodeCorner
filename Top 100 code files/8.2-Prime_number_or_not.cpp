//Optimized code that uses break statement
#include<iostream>
using namespace std;
int main()
{
 int n,i;
bool isPrime= true;
cout<<"Enter any number:";
cin>>n;
if(n<2)
	isPrime=false;
else{
	for(i=2;i<n;i++)
	{
 	  if(n%i==0)
	{
	  isPrime=false;
	  break;
	}
	}
string result=isPrime?"Prime":"Not Prime";
cout<<"The number is "<<result<<endl;
return 0;
}
}
