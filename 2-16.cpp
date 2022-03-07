#include<iostream>
using namespace std;
int main()
{
    cout<<"Please enter two numbers :"<<endl;
    double x,y;
    cin>>x>>y;
    if(y!=0)
    {
        cout<<"Their sum is "<<x+y<<endl;
        cout<<"Their product is "<<x*y<<endl;
        cout<<"Their difference is "<<x-y<<endl;
        cout<<"Their quotient is "<<x/y<<endl;
    }
    else
    {
        cout<<"Their sum is "<<x+y<<endl;
        cout<<"Their product is "<<x*y<<endl;
        cout<<"Their difference is "<<x-y<<endl;
        cout<<"They have no quotient"<<endl;
    }
    return 0;
}
