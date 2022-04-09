#include<iostream>
using namespace std;

void isperfect(int x)
{
	int sum=0;
	for(int i=x-1;i>=1;i--)
	{
		if(x%i==0) sum+=i; 
	}
	
	if(sum==x) cout<<x<<" is a perfect number"<<endl;
	else cout<<x<<" is not a perfect number"<<endl;
}


int main()
{
	for(int j=1;j<=1000;j++)
	{
		isperfect(j);
	}
	return 0;
}
