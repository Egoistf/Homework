#include<iostream>
#include<cstdlib>
using namespace std;
int main()
{
	cout<<"I have a number between 1 and 1000."<<endl;
	cout<<"Can you guess my number?"<<endl;
	cout<<"Please type your first guess."<<endl;
	int x=rand()%1000+1;
	bool flag=1;
	int sum=0;
	while(flag)
	{
		int m;
		cin>>m;
		sum++;
		if(m==x)
		{
			if(sum<10)
			{
				cout<<"Either you know the secret or you got lucky!"<<endl;
			}
			else if(sum>10)
			{
				cout<<"You should be able to do better!"<<endl;
			}
			else if(sum==10)
			{
				cout<<"Ahah! You know the secret!"<<endl;
			}
			
			cout<<"Would you like to play again (y or n)?"<<endl;
			char choice;
			cin>>choice;
			if(choice=='y')
			{
				x=rand()%1000+1;
				flag=1;
			}
			else flag=0;
		}
		else if(m>x)
		{
			cout<<"Too high. Try again."<<endl;
			flag=1;
		}
		else if(m<x)
		{
			cout<<"Too low. Try again."<<endl;
			flag=1;
		}
	}
	return 0;
}
