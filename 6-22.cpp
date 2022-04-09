#include<iostream>
using namespace std;

void showSquare(int n)
{
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			cout<<"*";
		}
		cout<<endl;
	}
}

int main()
{
	int n;
	cout<<"Please input side length: ";
	cin>>n;
	showSquare(n);
	return 0;
}
