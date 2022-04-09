#include<iostream>
#include<cstdlib>
using namespace std;
int main()
{
	int face;
	face=rand()%6+1;
	int bankBalance=1000;
	int wager;
	bool flag=1;
	while(flag)
	{
		cout<<"Please bet: ";
		cin>>wager;
		if(wager>bankBalance)
		{
			cout<<"Reput: ";
			flag=1;
		}
		cout<<"Take your guess face: ";
		int gface;
		cin>>gface;
		if(gface==face)
		{
			bankBalance+=wager;
			cout<<"You're up big. Now's the time to cash your chips!"<<endl;
		}
		else
		{
			bankBalance-=wager;
			if(bankBalance==0)
			{
				cout<<"Sorry. You busted!"<<endl;
				flag=0;
			}
			else cout<<"Oh, you're going for broke, huh?"<<endl;
		}
		cout<<"Try again?"<<endl;
		char t;
		cin>>t;
		if(t=='y')
		{
			face=rand()%6+1;
			flag=1;
		}
		else flag=0;
	}
	return 0;
}
