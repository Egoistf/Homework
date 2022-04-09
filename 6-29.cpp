#include<iostream>
#include<math.h>
using namespace std;

void prime(int i)
{
    int j = 2;
    for(;j<i;j++)
    {
        if(i%j==0) break;
    }
    if(j>=i)
    {
        cout<<i<<" is a prime number"<<endl;
    }
}

int main()
{
	for(int i=2;i<=10000;i++)
	{
		prime(i);
	}
	return 0;
}
