#include<iostream>
using namespace std; 
int main()
{
	cout<<"Please enter your weight and height:"<<endl;
	double weight,height;
	cout<<"weight:";
	cin>>weight;
	cout<<"height:";
	cin>>height;
	cout<<endl;
	cout<<"Please select your measuring method:\n"<<"1.kilogram&&meter  2.pound&&foot"<<endl;
	int choice;
	double BMI;
	cin>>choice;
	if(choice==1)
	{
		BMI=weight/(height*height);
	}
	else if(choice==2)
	{
		BMI=weight*703/(height*height);
	}
	
	if(BMI<18.5)
	{
		cout<<"Underweight"<<endl;
	}
	else if(BMI>=18.5 && BMI<=24.9)
	{
		cout<<"Normal"<<endl;
	}
	else if(BMI>=25 && BMI<=29.9)
	{
		cout<<"Overweight"<<endl;
	}
	else 
	{
		cout<<"obese"<<endl;
	}
	return 0;
} 
