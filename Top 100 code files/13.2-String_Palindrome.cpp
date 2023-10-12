//C++ program to check string palindrome ignoring case with improved time complexity
#include<iostream>
#include<string.h>
using namespace std;
int lowercase(char str[])
{
 int i=0;
while(str[i]!='\0')
{
 if(str[i]>64 && str[i]<91)
  str[i]+=32;
i++;
}
return 0;
}
int main()
{
 int i,len;
char str[100];
bool flag=false;
cout<<"Enter a string: ";
cin>>str;
lowercase(str);
len=strlen(str);
for(i=0;i<len/2;i++)
{
 
if(str[i]!=str[len-i-1])
{
 flag=true;
 break;
}
}
if(flag)
cout<<str<<" is not a Palindrome."<<endl;
else
cout<<str<<" is a Palindrome."<<endl;
return 0;
}
