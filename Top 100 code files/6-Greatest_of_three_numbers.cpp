//c++ program to find greatest of 3 numbers using ternary operator
#include<iostream>
using namespace std;
int main()
{
 int a,b,c,max;
cout<<"Enter 3 numbers:";
cin>>a>>b>>c;
max=(a>b)?((a>c)?a:c):((b>c)?b:c);
cout<<"Maximum: "<<max;
return 0;
}
