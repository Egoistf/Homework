#include <iostream>
using namespace std;
int main()
{
	int num,baseNum=1,ans=0;
	cin>>num;
	while(num!=0)
	{
		ans+=num%10*baseNum;
		num/=10;
		baseNum*=2;
	}
	cout<<ans<<endl;
	return 0;
}

