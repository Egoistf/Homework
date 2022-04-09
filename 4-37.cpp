#include<iostream>
using namespace std;
int main()
{
	double rate=0.005;
	int people=1412000000;
	int m;
	m=people;
	int n=2020;
	cout<<"year\t"<<"number of population\t"<<"population growth"<<endl;
	cout<<n<<"\t"<<people<<"\t\t"<<"*******"<<endl;
	for(int i=1;i<=75;i++)
	{
		int growth=0;
		growth=people;
		people=people*(1+rate);
		growth=people-growth;
		cout<<2020+i<<"\t"<<people<<"\t\t"<<growth<<endl;
	}
	bool flag=1;
	while(flag)
	{
		n++;
		people=people*(1+rate);
		if((people/2)>=m)
		{
			flag=0;
		}
	}
	cout<<"The number of people in "<<n<<" is twice that of this year"<<endl;
	return 0;
} 
