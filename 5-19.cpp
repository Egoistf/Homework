#include<iostream>
#include<cmath>
using namespace std;
int main(void)
{
	double PI=0;
	cout<<"item\t"<<"PI"<<endl; 
	for(int i=1;i<=1000;i++)
	{
		PI+=pow((-1),i+1)*4/(2*i-1);
		cout<<i<<"\t"<<PI<<endl;
	}
    return 0;
}

