#include <iostream>
using namespace std;
int main()
{
    int length;
    cout<<"Please input the side length: ";
    cin>>length;
    for(int i=1;i<=length;i++)
    {
    	if(i==1 || i==length)
    	{
    		for(int j=1;j<=length;j++)
    		{
    			cout<<"*";
			}
			cout<<endl;
		}
		else 
		{
			for(int j=1;j<=length;j++)
    		{
    			if(j==1 || j==length)
    			{
    				cout<<"*";
				}
				else cout<<" ";
			}
			cout<<endl;
		}
	}
    return 0;
}

