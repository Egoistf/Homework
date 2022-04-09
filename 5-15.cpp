#include<iostream>
using namespace std;
int main()
{
	bool flag=1;
	int total=0;
	int num=0;
	while(flag)
	{
		char grade;
		cout<<"Please input the grade: ";
		cin>>grade;
		switch(grade)
		{
			case 'A':
			{
				total+=4;
				num++;
				flag=1;
				break;
			} 
			case 'B':
			{
				total+=3;
				num++;
				flag=1;
				break;
			} 
			case 'C':
			{
				total+=2;
				num++;
				flag=1;
				break;
			} 
			case 'D':
			{
				total+=1;
				num++;
				flag=1;
				break;
			} 
			case 'E':
			{
				flag=0;
				break;
			} 
		}
		
	}
	if(total/num==4) cout<<"The average grade is "<<"A"<<endl;
	else if(total/num==3) cout<<"The average grade is "<<"B"<<endl;
	else if(total/num==2) cout<<"The average grade is "<<"C"<<endl;
	else if(total/num==1) cout<<"The average grade is "<<"D"<<endl;
	return 0;
} 
