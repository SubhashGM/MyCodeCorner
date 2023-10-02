//c++ program to find palindrome of a number using recursion
#include<iostream>
using namespace std;
int reverse(int n,int rev)
{ 
 if(n==0)
	return rev;
 int rem;
rem = n%10;
 rev=rev*10+rem;
  return reverse(n/10,rev);
}
int main()
{
 int n,temp,rev=0;
cout<<"Enter a number: ";
 cin>>n;
temp=n;
if(reverse(n,rev)==temp)
cout<<temp<<" is a Palindrome";
else
cout<<temp<<" is not a Palindrome";
return 0;
}
