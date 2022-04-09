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
	while(flag)
	{
		int m;
		cin>>m;
		if(m==x)
		{
			cout<<"Excellent! You guessed th number!"<<endl;
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
