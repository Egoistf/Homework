#include<iostream>
using namespace std;
int main()
{
    cout<<"Input three different integers: ";
    int x,y,z;
    cin>>x>>y>>z;
    cout<<"Sum is "<<x+y+z<<endl;
    cout<<"Average is "<<(x+y+z)/3<<endl;
    cout<<"Product is "<<x*y*z<<endl;
    if(x>y)
    {
        if(y>z)
        {
            cout<<"Smallest is "<<z<<endl;
            cout<<"Largest is "<<x<<endl;
        }
        else if(x<z)
        {
            cout<<"Smallest is "<<y<<endl;
            cout<<"Largest is "<<z<<endl;
        }
        else if(x>z && y<z)
        {
            cout<<"Smallest is "<<y<<endl;
            cout<<"Largest is "<<x<<endl;
        }
    }
    else if(x<y)
    {
        if(x>z)
        {
            cout<<"Smallest is "<<z<<endl;
            cout<<"Largest is "<<y<<endl;
        }
        else if(y<z)
        {
            cout<<"Smallest is "<<x<<endl;
            cout<<"Largest is "<<z<<endl;
        }
        else if(y>z && x<z)
        {
            cout<<"Smallest is "<<x<<endl;
            cout<<"Largest is "<<y<<endl;
        }
    }
    return 0;
}
