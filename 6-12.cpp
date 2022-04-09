#include<iostream>
#include<iomanip>
#include<math.h>
using namespace std;
double calculateCharges(double hours)
{
    if(hours<=3)
    {
        return 2.00;
    }
    else if(hours<19 && hours>3)
    {
        return ((ceil(hours)-3)*0.50+2.00);
    }
    else if(hours>=19 && hours<=24)
    {
        return 10.00;
    }
    else if(hours>24)
    {
        hours=hours-24;
        return (calculateCharges(hours)+10);
    }
}

int main()
{
    double thour=0,tcharge=0;
    double hour[3];
    double charge[3];
    cout<<"Please input hours: "<<endl;
    for(int i=0;i<3;i++)
    {
        cin>>hour[i];
        charge[i]=calculateCharges(hour[i]);
        thour+=hour[i];
        tcharge+=charge[i];
    }
    cout<<"Car\t"<<"Hours\t"<<"Charge"<<endl;
    for(int j=0;j<3;j++)
    {
        cout<<fixed<<setprecision(1);
        cout<<j+1<<"\t"<<hour[j]<<"\t";
        cout<<fixed<<setprecision(2);
        cout<<charge[j]<<endl;
    }
    cout<<fixed<<setprecision(1);
    cout<<"TOTAL\t"<<thour<<"\t";
    cout<<fixed<<setprecision(2);
    cout<<tcharge<<endl;
    return 0;
}
