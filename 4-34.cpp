#include<iostream>
using namespace std;

int main()
{
    int x;
    cout<<"Please input an integer :";
    cin>>x;
    int factorial=1;
    if(x>0)
    {
        for(int i=1;i<=x;i++)
        {
            factorial=i*factorial;
        }
    }
    else if(x==0) factorial=0;
    cout<<"It's factorial is "<<factorial<<endl;
    return 0;
}

/*
int main()
{
    int x;
    cout<<"Please input the precision: ";
    cin>>x;
    if(x==1)
    {
    	cout<<"e = "<<x<<endl;
    }
    else
    {
    	double e=1;
    	int factorial=1;
    	for(int i=1;i<=x;i++)
        {
        	factorial=1;
            for(int j=0;j<=x-1;j++)
            {
            	factorial=j*factorial;
			}
			e+=1/factorial;
        }
        cout<<"e = "<<e<<endl;
	}
    return 0;
}
*/
