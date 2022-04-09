#include<iostream>
#include<math.h>
using namespace std;

void reverse(int x)
{
	int rev=0;
    while(x/10>0)
    {
    	rev*=10;
    	rev+=x%10;
    	x=x/10;
	}
	cout<<rev*10+x<<endl;
}

int main()
{
	int x;
	cout<<"Please input a number: ";
	cin>>x;
	reverse(x);
	return 0;
}
