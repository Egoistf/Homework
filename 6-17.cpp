#include<iostream>
#include<cstdlib>
using namespace std;
int main()
{
    cout<<(rand()%5+1)*2<<endl;//a)
    cout<<((rand()%5+1)*2+1)<<endl;//b)
    cout<<((rand()%5+1)*2+1)*2<<endl;//c)
    return 0;
}
