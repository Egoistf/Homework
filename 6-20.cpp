#include<iostream>
using namespace std;

bool multiple(int x,int y)
{
	if(y%x==0) return true;
	else return false;
}

int main()
{
	int x,y;
	cin>>x>>y;
	cout<<multiple(x,y);
	return 0;
}
