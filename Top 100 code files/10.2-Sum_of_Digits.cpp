//C++ program to find sum of digits using ASCII values.
#include<iostream>
using namespace std;
int sumofdigits(string n)
{ 
 int sum=0,i;
 for(i=0;i<n.length();i++)
 {
  sum+= n[i]-48;
 }
 return sum;
}
int main()
{
 string n;
 cout<<"Enter a number: ";
 cin>>n;
 cout<<"Sum of "<<n<<" is "<<sumofdigits(n);
 return 0;
}
