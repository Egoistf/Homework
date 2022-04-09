#include<iostream>
#include<cstdlib>
using namespace std;

int question()
{
	int a,b;
	a=rand()%9+1;
	b=rand()%9+1;
	cout<<"How much is "<<a<<" times "<<b<<"?"<<endl;
	return a*b;
}

int main()
{
	int x;
	x=question();
	int aw;
	bool flag=1;
	while(flag)
	{
		cin>>aw;
		if(aw==x)
		{
			cout<<"Very good!"<<endl;
			x=question();
			flag=1;
		}
		else 
		{
			cout<<"No. Please try again."<<endl;
			flag=1;
		}
	}
	return 0;
}
