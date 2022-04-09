#include <iostream>
using namespace std;
int main()
{
    int passes=0;
	int failures=0;
	int counter=1;
	while(counter<=10)
	{
		cout<<"Enter result (1 = pass, 2 = failure): ";
		int result=0;
		cin>>result;
		if(result==1) 
		{
			passes+=1;
			counter+=1;
		}
		else if(result==2)
		{
			failures+=1;
			counter+=1;
		}
		else
		{
			passes+=0;
			failures+=0;
			counter+=0;
		}
	}
	cout<<"Passed "<<passes<<endl;
	cout<<"Failures "<<failures<<endl;
	if(passes>8) cout<<"Bonus to instructor"<<endl;
    return 0;
}

