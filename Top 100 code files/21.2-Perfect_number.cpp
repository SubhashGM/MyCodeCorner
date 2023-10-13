//C++ program to find perfect number using recursion
#include<iostream>
using namespace std;
int checkperfect(int num,int i)
{
 int sum=0;
 if(i<=num/2)
 { 
  if(num%i==0)
  {
 	sum+=i;
	i++;
	checkperfect(num,i);
}
}
return sum;
}
int main()
{
 int num;
 cout<<"\t\t\tPerfect Number using Recursion \nEnter any number: ";
 cin>>num;
 if(checkperfect(num,1))
 	cout<<num<<" is a perfect number";
 else
	cout<<num<<" is not a perfect number";
return 0;
}
