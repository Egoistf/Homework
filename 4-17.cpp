#include<iostream>
using namespace std;
int main()
{
    int counter=0;
    double number=0;
    double largest=-99999;
    while(1)
    {
    	counter+=1;
    	if(counter==11) break;
    	else 
		{
    		cin>>number;
    		if(number>=largest)
    		{
    			largest=number;
			}
			else largest=largest;
		}
	}
	cout<<largest;
    return 0;
}
