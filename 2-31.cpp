#include<iostream>
using namespace std;
int main()
{
	cout<<"Please enter your information:"<<endl;
	double miles,price,ave,parking,toll,expenses;
	cout<<"Total miles per day��";
	cin>>miles;
	cout<<"Price per gallon of gasoline��";
	cin>>price;
	cout<<"Average miles per gallon��";
	cin>>ave;
	cout<<"Daily parking fee��";
	cin>>parking;
	cout<<"Daily toll��";
	cin>>toll;
	expenses=miles/ave*price+parking+toll;
	cout<<"Your daily driving need "<<expenses<<endl;
	return 0;
}
