#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;
int main()
{
	int a,b;
	srand(time(0));
	int count[11]={0};
	for(int i=0;i<1000;i++)
	{
		int sum;
		a=rand()%6+1;
		b=rand()%6+1;
		sum=a+b;
		for(int j=0;j<11;j++)
		{
			if(j+2==sum) count[j]++;
		}
	}
	for(int i=2;i<=12;i++)
	{
		cout<<i<<"\t";
	}
	cout<<endl;
	for(int j=0;j<11;j++)
	{
		cout<<count[j]<<"\t";
	}
    return 0;
}

