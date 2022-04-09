#include<iostream>
using namespace std;
int main()
{
    double x=0;
    double sumx=0,sumy=0;
    while(1)
    {
    	x=0;
    	double y=0;
    	cout<<"Enter miles driven (-1 to quit): ";
    	cin>>x;
    	if(x==-1) break;
    	else 
		{
    		cout<<"Enter gallons used: ";
    		cin>>y;
    		sumx+=x;
    		sumy+=y;
    		cout<<"MGP this trip: "<<x/y<<endl;
    		cout<<"Total MGP: "<<sumx/sumy<<endl;
		}
		cout<<endl;
	}
    return 0;
}
