#include<iostream>
using namespace std;

double circleArea(double r)
{
	double PI=3.14;
	return PI*r*r;
}

int main()
{
	cout<<"Please enter the radius of the circle: ";
	double r;
	cin>>r;
	cout<<circleArea(r);
	return 0;
}
