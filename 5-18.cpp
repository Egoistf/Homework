#include<iostream>
#include<bitset>
#include<climits>
using namespace std;
int main(void)
{
	cout<<"decimalism\t"<<"binary\t\t"<<"octal\t"<<"hexadecimal"<<endl;
    for(int i=1;i<=256;i++)
    {
    	cout<<i<<"\t\t"<<(bitset<12>)i<<"\t";
    	cout<<hex;
    	cout<<i<<"\t";
    	cout<<oct;
    	cout<<i<<endl;
	}
    return 0;
}

