#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	cout<<fixed<<setprecision(2);
    double sales=0;
    while(1)
    {
    	cout<<"Enter sales in dollars (-1 to quit): ";
    	cin>>sales;
    	if(sales==-1) break;
    	else 
		{
    		cout<<"Salary is: $"<<sales*0.09+200<<endl;
		}
		cout<<endl;
	}
    return 0;
}
