#include <iostream>
using namespace std;
int main()
{
        int counter=0,number[10],largest=0,largest1=0;
        while(counter<=9)
        {
            cin>>number[counter];
            if(number[counter]>largest) largest=number[counter];
            counter++;
        }
        counter=0;
        while(counter<=8)
        {
            if(number[counter]!=largest)
            {
                if(number[counter]>largest1) largest1=number[counter];
            }
            counter++;
        }
        cout<<largest<<" "<<largest1<<endl;
        return 0;
}

