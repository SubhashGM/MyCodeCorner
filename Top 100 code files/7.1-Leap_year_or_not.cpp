#include<iostream>
using namespace std;
int main()
{
 int year,flag;
cout<<"Enter year:";
cin>>year;
flag=(year%400==0)||(year%4==0&&year%100!=0)?1:0;
if(flag)
	cout<<"It is a leap year"<<endl;
else
	cout<<"It is not a leap year"<<endl;
return 0;
}
