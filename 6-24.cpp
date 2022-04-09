#include<iostream>
using namespace std;

void print(int n)
{
	int a,b,c,d,e;
	a=n/10000;
	b=n/1000%10;		
	c=n/100%10;
	d=n/10%10;
	e=n%10;
	if(n/10000>0)
	{
		cout<<a<<"  "<<b<<"  "<<c<<"  "<<d<<"  "<<e<<endl;
	}
	else if(n/1000>0 && n/10000==0)
	{
		cout<<b<<"  "<<c<<"  "<<d<<"  "<<e<<endl;
	}
	else if(n/100>0 && n/1000==0)
	{
		cout<<c<<"  "<<d<<"  "<<e<<endl;
	}
	else if(n/10>0 && n/100==0)
	{
		cout<<"  "<<d<<"  "<<e<<endl;
	}
	else cout<<e;
}

int main()
{
	int n;
	cout<<"Please input an integer: ";
	cin>>n;
	print(n);
	return 0;
}
