#include<iostream>
#include<cstdlib>
using namespace std;
int main()
{
    cout<<(rand()%2+1)<<endl;//a)1<=n<=2
    cout<<(rand()%100+1)<<endl;//b)1<=n<=100
    cout<<(rand()%10+0)<<endl;//c)0<=n<=9
    cout<<(rand()%112+1000)<<endl;//d)1000<=n<=1112
    cout<<(rand()%3-1)<<endl;//e)-1<=n<=1
    cout<<(rand()%15-3)<<endl;//f)-3<=n<=11
    return 0;
}
