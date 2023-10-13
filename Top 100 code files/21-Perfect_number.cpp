//C++ program to check whether a number is perfect number or not
#include<iostream> 
#include<math.h>
using namespace std;
int main()
{ 
    int num,sum=0,i=1;
    cout<<"\t\t\tPerfect Number";
    cout<<"\nEnter any number: ";
    cin>>num;
    while(i<num)
    {
        if(num%i==0)
        {
            sum+=i;
        }
        i++;
    }
    if(sum==num)
        cout<<num<<" is a Perfect number"<<endl;
    else
        cout<<num<<" is not a Perfect number"<<endl;
    return 0;
}
