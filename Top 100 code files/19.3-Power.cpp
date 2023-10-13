//C++ program to find power of a number using recursion
#include<iostream>
using namespace std;
double power(double base, int expo)
{
    if(expo>0)
        return (power(base,expo-1)*base);
    else if(expo<0)
        return (power(base,expo+1)/base);
    else 
        return 1;
}
int main()
{
    int n;
    double m;
    cout<<"Enter m and n: ";
    cin>>m>>n;
    cout<<"Power: "<<power(m,n)<<endl;;
    return 0;
}
