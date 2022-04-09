#include<iostream>
#include<iomanip>
#include<cmath>
using namespace std;
int main()
{
	double amount;
	double principal=1000.0;
	double rate=0.05;
	cout<<fixed<<setprecision(2);
	for(rate=0.05;rate<=0.1;rate=rate+0.01)
	{
		cout<<"rate="<<rate<<endl;
		cout<<"Year"<<setw(21)<<"Amount on deposit"<<endl;
		for(int year=1;year<=10;year++)
		{
			amount=principal*pow(1+rate,year);
			cout<<setw(4)<<year<<setw(21)<<amount<<endl;
		}
		cout<<endl;
	}
	return 0;
} 
