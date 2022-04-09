#include<iostream>
using namespace std;

string iseven(int x)
{
	if(x%2==0) return "true";
	else return "false";
}

int main()
{
	int x;
	cin>>x;
	cout<<iseven(x);
	return 0;
}
