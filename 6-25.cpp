#include<iostream>
#include<math.h>
using namespace std;
int getsecond(int hh,int mm,int ss)
{
	int sec=0;
	if(hh<12)//9:01:01
	{
		if(mm==0 && ss==0)
		{
			sec=(12-hh)*60*60;
		}
		else 
		{
			sec=(12-hh-1)*60*60+(60-mm-1)*60+(60-ss);
		}
	}
	else if(hh==12)//12:23:24
	{
		sec=mm*60+ss;
	}
	return sec;
}

int main()
{
	int hh1,mm1,ss1;
	int hh2,mm2,ss2;
	cout<<"Please input the first time: ";
	cin>>hh1>>mm1>>ss1;
	cout<<"Please input the second time: ";
	cin>>hh2>>mm2>>ss2;
	int sec1,sec2;
	sec1=getsecond(hh1,mm1,ss1);
	sec2=getsecond(hh2,mm2,ss2);
	if((hh1<12 && hh2<12) || (hh1==12 && hh2==12))
	{
		cout<<"Time difference is "<<abs(sec2-sec1)<<" seconds"<<endl;
	}
	else
	{
		cout<<"Time difference is "<<sec1+sec2<<" seconds"<<endl;
	}
	return 0;
}
