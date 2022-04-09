#include<iostream>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int a[n];
	int min=9999;
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
		if(min<a[i]) min=min;
		else min=a[i];
	}
	cout<<min;
	return 0;
} 
