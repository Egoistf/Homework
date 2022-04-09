#include <iostream>
using namespace std;
int main()
{
    int num;
    cout<<"Please input a five-digit-number: ";
    cin>>num;
    int x1,x2,x3,x4;
    x1=num/10000;
    x2=(num-x1*10000)/1000;
    x3=num/10%10;
    x4=num%10;
    if(x1==x4 && x2==x3) cout<<num<<" is a palindrome"<<endl;
    else cout<<num<<" is not a palindrome"<<endl;
    return 0;
}
