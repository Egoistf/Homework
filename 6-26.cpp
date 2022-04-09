#include<iostream>
using namespace std;

int celsius(int f)
{
	return (f-32)/1.8;
}

int fahrenheit(int c)
{
	return (32+c*1.8);
}

int main()
{
	cout<<"Celsius temperature\t"<<"Fahrenheit temperature"<<endl;
	for(int i=0;i<=100;i++)
	{
		cout<<i<<"\t\t\t"<<fahrenheit(i)<<endl;
	}
	cout<<"Fahrenheit temperature\t"<<"Celsius temperature"<<endl;
	for(int i=32;i<=212;i++)
	{
		cout<<i<<"\t\t\t"<<celsius(i)<<endl;
	}
	return 0;
}
