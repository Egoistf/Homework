#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int main()
{
    time(0);
    cout<<"BANG !!!!!"<<endl;
    cout<<"AND THEY'RE OFF !!!!!"<<endl;
    int actt=0,actr=0;
    for(int i=1;i<=70;i++)
    {
        int tortoise=rand()%1+10;
        int rabbit=rand()%1+10;
        if(tortoise>=1 && tortoise<=5)
        {
            actt+=3;
        }
        else if(tortoise>=6 && tortoise<=7)
        {
            actt-=6;
        }
        else if(tortoise>=8 && tortoise<=10)
        {
            actt+=1;
        }

        if(rabbit>=1 && rabbit<=2)
        {
            actr+=0;
        }
        else if(rabbit>=3 && rabbit<=4)
        {
            actr+=9;
        }
        else if(rabbit==5)
        {
            actr-=12;
        }
        else if(rabbit>=6 && rabbit<=8)
        {
            actr+=1;
        }
        else if(rabbit>=9 && rabbit<=10)
        {
            actr-=2;
        }

        if(actr>=70 && actt<70) cout<<"Hare wins. Yuch."<<endl;
        else if(actt>=70 && actr<70) cout<<"TORTOISE WINS!!!YAY!!!"<<endl;
        else if(actt>=70 && actr>=70) cout<<"It's a tie."<<endl;
        else
        {
            if(actt<1) actt=1;
            if(actr<1) actr=1;
            for(int m=1;m<=70;m++)
            {
                if(m==actr) cout<<"H";
                else cout<<" ";
            }
            cout<<endl;
            for(int n=1;n<=70;n++)
            {
                if(n==actt) cout<<"T";
                else cout<<" ";
            }
            cout<<endl;
            if(actr==actt) cout<<"OUCH!!!"<<endl;
        }
    }
    return 0;
}
