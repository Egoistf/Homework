#include<iostream>
#include<iomanip>
using namespace std;

unsigned long factorial(unsigned long number)
{
	if(number<=1) return 1;
	else
	{
		cout<<number*factorial(number-1)<<endl;
		return number*factorial(number-1);
	}
}

int main()
{
	for(unsigned int counter=0;counter<=10;++counter)
	{
		cout<<setw(2)<<counter<<"! = "<<factorial(counter)<<endl;
	}
	return 0;
}
