#include<iostream>
using namespace std;
int main()
{
	int n;
	cout<<"Please input a number: ";
	cin>>n;
	int a,b,c,d;
	a=n%10;//个位
	b=n/10%10;//十位
	c=n/100%10;//百位
	d=n/1000;//千位
	a=a+10-7; 
	b=b+10-7; 
	c=c+10-7; 
	d=d+10-7; 
	cout<<c+d*10+a*100+b*1000;
	return 0;
} 
