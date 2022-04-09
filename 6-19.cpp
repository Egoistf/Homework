#include<iostream>
#include<cmath>
using namespace std;
double hypotenuse(double a,double b)
{
    double c;
    c=sqrt(a*a+b*b);
    return c;
}

int main()
{
    double x,y;
    cout<<"Please input two sides: ";
    cin>>x>>y;
    cout<<hypotenuse(x,y);
    return 0;
}
