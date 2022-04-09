#include<iostream>
using namespace std;

int mystery(int a,int b)
{
	if(b<0)
	{
		b=-b;
		if(1==b) return a;
		else return a+mystery(a,b-1);
	}
}

int main()
{
	int x=0;
	int y=0;
	cout<<"Enter two numbers: ";
	cin>>x>>y;
	cout<<"The result is "<<-mystery(x,y)<<endl;
	return 0;
}
