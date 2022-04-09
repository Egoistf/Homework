#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    char a[20];
    string b;
    cin>>a;
    int count=strlen(a);
    for(int i=count-1;i>=0;i--)
    {
        b+=a[i];
    }
    if(a==b) cout<<"yes"<<endl;
    else cout<<"no"<<endl;
    return 0;
}
