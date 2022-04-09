#include<iostream>
using namespace std;
int integerPower(double base,int exponent)
{
    int x=1;
    for(int i=0;i<exponent;i++)
    {
        x*=base;
    }
    return x;
}

int main()
{
    int x,y;
    cout<<"Please input the base and exponent: ";
    cin>>x>>y;
    cout<<integerPower(x,y);
    return 0;
}
