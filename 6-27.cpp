#include<iostream>
using namespace std;

double getmin(double a,double b,double c)
{
	double min=9999;
	if(min<a) min=min;
	else min=a;
	
	if(min<b) min=min;
	else min=b;
	
	if(min<c) min=min;
	else min=c;
	
	return min;
}


int main()
{
	double a,b,c;
	cout<<"Please input three numbers: ";
	cin>>a>>b>>c;
	cout<<getmin(a,b,c);
	return 0;
}
