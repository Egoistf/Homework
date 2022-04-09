#include <iostream>
using namespace std;
int main()
{
	double x,y,z;
	cout<<"Please input the three sides: ";
	cin>>x>>y>>z;
	if(x+y>z && x+z>y && y+z>x) 
		cout<<"They can represent the three sides of a triangle"<<endl;
	else cout<<"They cann't represent the three sides of a triangle"<<endl;
	return 0;
}

