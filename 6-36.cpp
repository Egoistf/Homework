#include<iostream>
using namespace std;
int power(int base,int exponent)
{
	if(exponent==1) return base;
    else return base*power(base,exponent-1);
}

int main()
{
    int x,y;
    cout<<"Please input the base and exponent: ";
    cin>>x>>y;
    cout<<power(x,y);
    return 0;
}
