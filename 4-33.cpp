#include <iostream>
using namespace std;
int main()
{
	double x,y,z;
	cout<<"Please input the three sides: ";
	cin>>x>>y>>z;
	if(x*x+y*y==z*z || x*x+z*z==y*y || y*y+z*z==x*x) 
		cout<<"They can represent the three sides of a right triangle"<<endl;
	else cout<<"They cann't represent the three sides of a right triangle"<<endl;
	return 0;
}

