# include <iostream>
# include <list>
# include <sys/timeb.h>
# include <time.h>
# include <windows.h>
using namespace std;
bool Makework(int Sam[10][10]);//�ж��Թ��Ƿ��г���
int main()
{
    struct _timeb timebuffer;
    _ftime(&timebuffer);
    unsigned short int tem=timebuffer.millitm;
    unsigned short int a=0;
    srand(tem);
    int quit=1;
    int Mou[10][10];
    while(quit==1)
    {
        for(int i=0; i<10; i++)
        {
            for(int c=0; c<10; c++)
            {
                Sleep(3);//��ʱ�ﵽ��ȫ�������Ч��
                _ftime(&timebuffer);
                tem=timebuffer.millitm;
                srand(tem);
                a=rand()%2;
                if(rand()%6==1)//�ٴ�����һ����������ӿո�
                {
                    a=0;
                }
                Mou[i][c]=a;
            }
            cout<<endl;
        }
        Mou[0][0]=0;
        Mou[9][9]=0;
        for(int e=0; e<10; e++)
        {
            for(int d=0; d<10; d++)
            {
                if(0==Mou[e][d])
                {
                    cout<<"O"<<" ";
                }
                else
                {
                    cout<<Mou[e][d]<<" ";
                }
            }
            cout<<endl;
        }
        cout<<endl;
        if(Makework(Mou))
        {
            cout<<"�Թ��г��ڣ��Թ�·��ͼ����"<<endl;
        }
        else
        {
            cout<<"�Թ��޳���"<<endl;
        }
        for(int o=0; o<10; o++)
        {
            for(int p=0; p<10; p++)
            {
                if(4==Mou[o][p])
                {
                    cout<<"*"<<" ";
                }
                else if(0==Mou[o][p])
                {
                    cout<<"O"<<" ";
                }
                else
                {
                    cout<<Mou[o][p]<<" ";
                }
            }
            cout<<endl;
        }
        cout<<"ѡ��1�����������˳�"<<endl;
        cin>>quit;
    }
}
bool Makework(int Sam[10][10])
{
    int x=0,y=0;//x��y������Sam[y][x]
    int U=-1,D=1,L=-1,R=1;//��������
    list<int> val;
    list<int>::iterator vben=val.begin();
    list<int>::iterator vend=val.end();
    bool back=false;//�Ƿ����ں��ˣ���ǰ�����Ҷ������ƶ�ʱ��
    while((9!=x)||(9!=y))//�Ƿ񵽴��յ�
    {
        if((y+D)<10)//���ƶ�
        {
            if(Sam[y+D][x]==0)
            {
                Sam[y][x]=4;
                if(back)//����ʱ���µ�·��
                {
                    Sam[y+D][x]=4;//��·������Ϊ�����
                    back=false;
                }
                val.push_back(x);//������ӽ�����
                val.push_back(y);
                y=y+D;//�ƶ�����
                continue;
            }
        }
        if((x+R)<10)//���ƶ�
        {
            if(Sam[y][x+R]==0)
            {
                Sam[y][x]=4;
                if(back)
                {
                    Sam[y][x+R]=4;
                    back=false;
                }
                val.push_back(x);
                val.push_back(y);
                x=x+R;
                continue;
            }
        }
        if(y+U>=0)//���ƶ�
        {
            if(Sam[y+U][x]==0)
            {
                Sam[y][x]=4;
                if(back)
                {
                    Sam[y+U][x]=4;
                    back=false;
                }
                val.push_back(x);
                val.push_back(y);
                y=y+U;
                continue;
            }
        }
        if((x+L>=0))//���ƶ�
        {
            if(Sam[y][x+L]==0)
            {
                Sam[y][x]=4;
                if(back)
                {
                    Sam[y][x+L]=4;
                    back=false;
                }
                val.push_back(x);
                val.push_back(y);
                x=x+L;
                continue;
            }
        }
        if(!val.empty())//ǰ�����Ҳ����ƶ������ƶ������赲����ô���ˡ�
        {
            back=true;
            list<int>::iterator vend=val.end();
            --vend;
            y=*vend;
            --vend;
            x=*vend;//�޸�����
            val.pop_back();
            val.pop_back();
            continue;
        }
        else
        {
            return false;
        }
    }
    return true;
}
