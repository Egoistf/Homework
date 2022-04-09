#include<iostream>
#include<cmath>
using namespace std;

double distance(double x1,double y1,double x2,double y2)
{
	return sqrt(pow(x1-x2,2)+pow(y1-y2,2));
}

int main()
{
	double x1,y1;
	cout<<"Please input first coordinates: ";
	cin>>x1>>y1;
	double x2,y2;
	cout<<"Please input second coordinates: ";
	cin>>x2>>y2;
	cout<<distance(x1,y1,x2,y2);
	return 0;
}
