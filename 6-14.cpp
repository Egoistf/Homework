#include<iostream>
#include<iomanip>
#include<math.h>
using namespace std;
int roundToInteger(double number)
{
    return int(number+0.5);
}

double roundToTenths(double number)
{
    return floor(number*10+0.5)/10;
}

double roundToHundreds(double number)
{
    return floor(number*100+0.5)/100;
}

double roundToThousands(double number)
{
    return floor(number*1000+0.5)/1000;
}
int main()
{
    double num;
    cout<<"Please input a number: ";
    cin>>num;
    cout<<roundToInteger(num)<<endl;
    cout<<roundToTenths(num)<<endl;
    cout<<roundToHundreds(num)<<endl;
    cout<<roundToThousands(num)<<endl;
    return 0;
}
