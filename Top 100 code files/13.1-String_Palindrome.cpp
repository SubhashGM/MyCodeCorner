//C++ Program to check string palindrome using Brute force method
#include<iostream>
#include<string.h>
using namespace std;
int main()
{
 char str[100];
cout<<"Enter a string: ";
 cin>>str;
 int i,len;
 len=strlen(str);
 bool flag=false;
for(i=0;i<len;i++)
{
 if(str[i]!=str[len-i-1])
{
 flag=true;
 break;
}
}
if(flag)
cout<<str<<" is not a palindrome"<<endl;
else
cout<<str<<" is a Palindrome"<<endl;
return 0;
}
