//C++ program to check string palindrome using binary search like
#include<iostream>
#include<string.h>
using namespace std;
int to_lower(char str[])
{
 int i=0;
while(str[i]>=65 && str[i]<91)
{
 str[i]+=32;
i++;
}
return 0;
}
int checkPalindrome(char str[])
{
 int left,right,len;
 left=0;
 len=strlen(str);
 right=len-1;
 while(right>=left)
 {
  if(str[left++]!=str[right++])
{
 cout<<str<<" is not a palindrome!";
 return 0;
}
cout<<str<<" is a Palindrome";
return 0;
}
}
int main()
{
 char str[100];
int len;
cout<<"Enter a string: ";
cin>>str;
to_lower(str);
checkPalindrome(str);
return 0;
}
