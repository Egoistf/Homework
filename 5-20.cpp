#include <iostream>
using namespace std;

int main()
{
	cout<<"hypotenuse\t"<<"side2\t"<<"side1\t"<<endl;
	for(int hypotenuse = 2; hypotenuse <= 500; hypotenuse++)
	{
		for(int side1 = 1; side1 < hypotenuse; side1++)
		{
			for(int side2 = side1; side2 < hypotenuse; side2++) 
			{
				if(side1 * side1 + side2 * side2 == hypotenuse * hypotenuse)
					cout<<hypotenuse<<"\t\t"<<side2<<"\t"<<side1<<"\t"<<endl;
			}
		}
	} 
	return 0;
} 

