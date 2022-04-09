#include<iostream>
using namespace std;
int main()
{
	bool flag=1;
	while(flag)
	{
		int code;
		cout<<"Please input your wage code: "<<endl;
		cout<<"1.The manager"<<endl;
		cout<<"2.The hourly workers"<<endl;
		cout<<"3.The commission workers"<<endl;
		cout<<"4.The pieceworkers"<<endl;
		cout<<"input 0 to exit"<<endl;
		cin>>code;
		switch(code)
		{
			case 1:
			{
				cout<<"The manager'wage is $"<<500<<endl;
				break;
			} 
			case 2:
			{
				int hour,wph;
				cout<<"input work hours: ";
				cin>>hour;
				cout<<"input wage per hour: ";
				cin>>wph;
				if(hour<=40) cout<<"The hourly worker's wage is $"<<hour*wph<<endl;
				else cout<<"The hourly worker's wage is $"<<(40*wph+(hour-40)*1.5*wph)<<endl;
				break;
			} 
			case 3:
			{
				int sale;
				cout<<"input sales: ";
				cout<<"The commission worker's wage is $"<<(250+sale*0.057)<<endl;
				break;
			} 
			case 4:
			{
				int num;
				cout<<"The quantity of the product :";
				cin>>num;
				cout<<"The pieceworker's wage is $"<<num*20<<endl;
				break;
			} 
			case 0:
			{
				flag=0;
				break;
			} 
		}
		
	}
	return 0;
} 
