#include<iostream>
using namespace std;
int main()
{
	
	return 0;
}

//a)
float cube(float number)
{
	return number*number*number;
}

//b)
int randomNumber=srand();

//c)
float y=123.45678;
int x;
x=y;
cout<<float(x)<<endl;

//d)
double square(double number)
{
	return number*number;
}

//e)
int sum(int n)
{
	if(n==0) return 0;
	else return n+sum(n-1);
}
