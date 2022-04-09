#include<iostream>
using namespace std;
int fibonacciIteratively(int n)
{
    int result=0;
    int nextItem = 1;
    for(int i=1;i<=n;++i)
    {
        int tmp=nextItem;
        nextItem+=result;
        result=tmp;
    }
    return result;
}

int main()
{
    int x;
    cout<<"Please input a number: ";
    cin>>x;
    cout<<fibonacciIteratively(x);
    return 0;
}
