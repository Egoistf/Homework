#include<iostream>
using namespace std;

void showSquare(int n,char x)
{
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			cout<<x;
		}
		cout<<endl;
	}
}

int main()
{
	int n;
	char x;
	cout<<"Please input side length: ";
	cin>>n;
	cout<<"Please input the fill character: ";
	cin>>x;
	showSquare(n,x);
	return 0;
}
