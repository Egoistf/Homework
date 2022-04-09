#include<iostream>
using namespace std;
int main()
{
    int x,y;
    cin>>x>>y;
    if(x<10)
    {
        if(y>10)
        {
            cout<<"@@@@@"<<endl;
        }
    }
    else
    {
        cout<<"#####"<<endl;
        cout<<"$$$$$"<<endl;
    }
    return 0;
}
