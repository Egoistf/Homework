#include<iostream>
using namespace std;
int main()
{
	int sum=0;
	int x=0;
	for(int i=0;;i++)
	{
		int m;
		cin>>m;
		if(m==9999) break;
		sum+=m;
		x++;
	}
	cout<<sum/x;
	return 0;
} 
