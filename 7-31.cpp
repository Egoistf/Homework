#include<iostream>
#include<cstring>
#include<string>
using namespace std;
int main()
{
    string str1;
    string str2;
    getline(cin, str1);
    int num=str1.size();
    if(num>50) num=50;
    else num=num;
    for(int i=num-1; i>=0; i--)
    {
        str2+=str1[i];
    }
    cout<<str1<<endl;
    cout<<str2<<endl;
    return 0;
}
