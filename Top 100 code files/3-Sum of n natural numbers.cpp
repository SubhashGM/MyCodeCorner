#include<iostream>
using namespace std;
int main()
{
 int i,n,sum=0;
cout<<"Enter the range: ";
cin>>n;
for(i=1;i<=n;i++)
	sum+=i;
cout<<"Sum of "<<n<<" numbers is "<<sum<<endl;
return 0;
}
