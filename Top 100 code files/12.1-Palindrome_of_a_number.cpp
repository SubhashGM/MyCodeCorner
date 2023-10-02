//C++ program to find palindrome of a number with O(n) time complexity
#include<iostream>
using namespace std;
int main()
{
 int n;
 cout<<"Enter any number: ";
 cin>>n;
 int reverse=0, temp=n,rem;
 while(temp)
 {
  rem=temp%10;
  reverse=reverse*10+rem;
  temp/=10;
}
if(reverse==n)
cout<<n<<" is a palindrome";
else
cout<<n<<" is not a palindrome";
return 0;
}
