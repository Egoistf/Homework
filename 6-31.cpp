#include<iostream>
#include<math.h>
using namespace std;

void divisor(int x,int y)
{
	for(int i=x;i>1;i--)
	{
		if(x%i==0 && y%i==0)
		{
			cout<<i;
			break;
		}
	}
}

int main()
{
	int x,y;
	cout<<"Please input two integers: ";
	cin>>x>>y;
	divisor(x,y);
	return 0;
}
