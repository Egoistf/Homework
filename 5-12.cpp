#include<iostream>
using namespace std;
int main()
{
    cout<<"(a)"<<endl;
    for(int i=0;i<=9;i++)
    {
        for(int j=0;j<=i;j++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
    cout<<endl;

    cout<<"(b)"<<endl;
    for(int i=9;i>=0;i--)
    {
        for(int j=0;j<=i;j++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
    cout<<endl;

    cout<<"(c)"<<endl;
    for(int i=10;i>0;i--)
    {
        for(int j=1;j<=10-i;j++)
        {
            cout<<" ";
        }
        for(int k=1;k<=i;k++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
    cout<<endl;
    
    cout<<"(d)"<<endl;
    for(int i=1;i<=10;i++)
    {
        for(int j=1;j<=10-i;j++)
        {
            cout<<" ";
        }
        for(int k=1;k<=i;k++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
    cout<<endl;
    
    return 0;
}
