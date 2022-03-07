#include<iostream>
using namespace std;
int main()
{
    cout<<"Input a five-digits number :";
    int x;
    cin>>x;
    int m;
    m=x%10;
    int n;
    n=(x-m)/10%10;
    int o;
    o=(x-m-n*10)/100%10;
    int p;
    p=(x-m-n*10-o*100)/1000%10;
    int q;
    q=(x-m-n*10-o*100-p*1000)/10000%10;
    cout<<q<<"   "<<p<<"   "<<o<<"   "<<n<<"   "<<m<<endl;
    return 0;
}
