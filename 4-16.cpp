#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	cout<<fixed<<setprecision(2);
    int hours=0;
    while(1)
    {
    	cout<<"Enter hours worked (-1 to quit): ";
    	cin>>hours;
    	if(hours==-1) break;
    	else 
		{
			double rate=0;
    		cout<<"Enter hourly rate of the employee ($00.00): ";
    		cin>>rate;
    		if(hours<=40)
    		{
    			cout<<"Salary is $"<<rate*hours<<endl;
			}
			else if(hours>40)
			{
				cout<<"Salary is $"<<40*rate+(hours-40)*rate*1.5<<endl;
			}
		}
		cout<<endl;
	}
    return 0;
}
