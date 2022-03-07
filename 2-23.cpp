#include<iostream>
using namespace std;
int main()
{
    int a[5];
    cout<<"Please input five numbers :";
    for(int i=0;i<5;i++)
    {
        cin>>a[i];
    }
    int maximum=-99999;
    for(int j=0;j<5;j++)
    {
        if(a[j]>=maximum)
        {
            maximum=a[j];
        }
    }
    int minimum=99999;
    for(int h=0;h<5;h++)
    {
        if(a[h]<=minimum)
        {
            minimum=a[h];
        }
    }
    cout<<"The maximum is "<<maximum<<endl;
    cout<<"The minimum is "<<minimum<<endl;
    return 0;
}
