#include<iostream>
using namespace std;
int main()
{
    cout<<"Please enter two numbers :"<<endl;
    double x,y;
    cin>>x>>y;
    if(x>y)
    {
        cout<<x<<" is large"<<endl;
    }
    else if(x<y)
    {
        cout<<y<<" is large"<<endl;
    }
    else cout<<"These numbers are equal"<<endl;
    return 0;
}
