#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	cout<<fixed<<setprecision(2);
    int account=0;
    while(1)
    {
    	double balance=0,charges=0,credits=0,limit=0;
    	cout<<"Enter account number (-1 to quit): ";
    	cin>>account;
    	if(account==-1) break;
    	else 
		{
    		cout<<"Enter beginning balance: ";
    		cin>>balance;
    		cout<<"Enter total charges: ";
    		cin>>charges;
    		cout<<"Enter total credits: ";
    		cin>>credits;
    		cout<<"Enter credit limit: ";
    		cin>>limit;
    		cout<<"New balance is "<<balance+charges-credits<<endl;
    		cout<<"Account:      "<<account<<endl;
    		cout<<"credit limit: "<<limit<<endl;
    		cout<<"Balance:      "<<balance+charges-credits<<endl;
    		cout<<"Credit Limit Exceeded."<<endl;
		}
		cout<<endl;
	}
    return 0;
}
