#include<iostream>
#include<cstdlib>
using namespace std;

int question(int n)
{
	int a,b;
	int i=0;
	for(int j=1;j<=n;j++)
	{
		i=i*10+9;
	}
	a=rand()%i+1;
	b=rand()%i+1;
	cout<<"How much is "<<a<<" times "<<b<<"?"<<endl;
	return a*b;
}

int main()
{
	cout<<"Please choose level: ";
	int n;
	cin>>n;
	int x;
	double right=0;
	double wrong=0;
	double sum=0;
	x=question(n);
	int aw;
	bool flag=1;
	while(flag)
	{
		sum=right+wrong;
		if(sum>=10)
		{
			cout<<"Your correct rate is "<<right/sum*100<<"%"<<endl;
			if(right/sum<0.75)
			{
				cout<<"Please ask your teacher for extra help."<<endl;
				right=0;
				wrong=0;
			}
			else if(right/sum>=0.75)
			{
				cout<<"Congratulations, you are ready to go to the next level!"<<endl;
				right=0;
				wrong=0;
			}
		}
		
		cin>>aw;
		if(aw==x)
		{
			right++;
			int m;
			m=rand()%4+1;
			switch (m)
			{
				case 1: cout<<"Very good!"<<endl;break;
				case 2: cout<<"Excellent!"<<endl;break;
				case 3: cout<<"Nice work!"<<endl;break;
				case 4: cout<<"Keep up and good work!"<<endl;break;
			}
			x=question(n);
			flag=1;
		}
		else 
		{
			wrong++;
			int n;
			n=rand()%4+1;
			switch (n)
			{
				case 1: cout<<"No. Please try again."<<endl;break;
				case 2: cout<<"Wrong. Try once more."<<endl;break;
				case 3: cout<<"Don't give up'!"<<endl;break;
				case 4: cout<<"No. Keep trying."<<endl;break;
			}
			flag=1;
		}
	}
	return 0;
}
