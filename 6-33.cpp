#include<iostream>
#include<cstdlib>
using namespace std;

int flip()
{
	int x;
	x=rand()%2;
	if(x==0) 
	{
		cout<<"Head"<<endl;
		return 1;
	}
	else if(x==1)
	{
		cout<<"Tail"<<endl;
		return 0;
	}
}

int main()
{
	int head=0,tail=0;
	for(int i=0;i<100;i++)
	{
		int x=flip();
		if(x==1) head++;
		else tail++;
	}
	cout<<"Head is "<<head<<endl;
	cout<<"Tail is "<<tail<<endl;
	return 0;
}
