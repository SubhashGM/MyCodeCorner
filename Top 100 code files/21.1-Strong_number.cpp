//C++ program to check whether a number is strong number or not
#include<iostream> 
#include<math.h>
using namespace std;
int factorial(int num)
{
    if(num==1)
        return 1;
    else
        return num*factorial(num-1);
}
int main()
{   int fact=1,rem,temp,sum=0,num;
    cout<<"Enter any number: ";
    cin>>num;
    temp=num;
    while(temp)
    {
        rem=temp%10;
        sum+=factorial(rem);
        temp/=10;
    }
    if(sum==num)
        cout<<num<<" is a Strong number"<<endl;
    else
        cout<<num<<" is not a Strong number"<<endl;
    return 0;
}
