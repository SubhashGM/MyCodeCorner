// C++ program to find prime using sqrt
//Time complexity : O(sqrt(n))
#include<iostream>
#include<math.h>
using namespace std;
int main()
{
 int n,i;
bool isPrime=true;
cout<<"Enter any number: ";
cin>>n;
if(n<2)
isPrime=false;
else
{
 for(i=2;i<sqrt(n);i++)
 {
  if(n%i==0)
  {
   isPrime=false;
   break;
  }
 }
}
string result=isPrime?"Prime":"Not Prime";
cout<<n<<" is "<<result;
return 0;
}
