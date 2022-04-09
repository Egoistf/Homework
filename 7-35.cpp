#include<iostream>
#include<string>
using namespace std;
int main()
{
    int responses[5][10];
    string topics[5]= {"Environment protect","The fertility rate","Population aging","Privacy protection","Legal correction"};
    int score[5];
    bool flag=1;
    int sum[5]= {0,0,0,0,0};
    int count=1;
    while(flag)
    {
        for(int i=0; i<5; i++)
        {
            cout<<"Please score for "<<topics[i]<<": ";
            cin>>score[i];
            sum[i]+=score[i];
        }
        cout<<"\t\t\t";
        for(int i=1; i<11; i++)
        {
            cout<<i<<"\t";
        }
        cout<<endl;
        for(int i=0; i<5; i++)
        {
            cout<<topics[i]<<"\t";
            for(int j=0; j<10; j++)
            {
                if(score[i]==j+1)
                {
                    cout<<"O\t";
                }
                else cout<<"-\t";
            }
            cout<<endl;
        }
        cout<<"another ?"<<endl;
        cout<<"1.Yes\t2.No"<<endl;
        int x;
        cin>>x;
        if(x==1)
        {
            count++;
            flag=1;
        }
        else flag=0;
    }
    cout<<"\t\t\tave score"<<endl;
    for(int i=0; i<5; i++)
    {
        cout<<topics[i]<<"\t"<<sum[i]/count;
        cout<<endl;
    }
    return 0;
}
