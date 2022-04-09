#include<iostream>
using namespace std;
int main()
{
	double total=0;
	for(int i=1;i<=5;i++)
	{
		int m;
		cout<<"Please enter the product number: ";
		cin>>m;
		switch(m)
		{
			case 1:
				{
					cout<<"Please input the product quantity: ";
					double a;
					cin>>a;
					total+=a*2.98;
					break;
				}
			case 2:
				{
					cout<<"Please input the product quantity: ";
					double b;
					cin>>b;
					total+=b*4.50;
					break;
				}
			case 3:
				{
					cout<<"Please input the product quantity: ";
					double c;
					cin>>c;
					total+=c*9.98;
					break;
				}
			case 4:
				{
					cout<<"Please input the product quantity: ";
					double d;
					cin>>d;
					total+=d*4.49;
					break;
				}
			case 5:
				{
					cout<<"Please input the product quantity: ";
					double e;
					cin>>e;
					total+=e*6.87;
					break;
				}
		}
	}
	cout<<"Total sales: "<<total<<endl;
	return 0;
} 
