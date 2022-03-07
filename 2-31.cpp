#include<iostream>
using namespace std;
int main()
{
	cout<<"Please enter your information:"<<endl;
	double miles,price,ave,parking,toll,expenses;
	cout<<"Total miles per day£º";
	cin>>miles;
	cout<<"Price per gallon of gasoline£º";
	cin>>price;
	cout<<"Average miles per gallon£º";
	cin>>ave;
	cout<<"Daily parking fee£º";
	cin>>parking;
	cout<<"Daily toll£º";
	cin>>toll;
	expenses=miles/ave*price+parking+toll;
	cout<<"Your daily driving need "<<expenses<<endl;
	return 0;
}
