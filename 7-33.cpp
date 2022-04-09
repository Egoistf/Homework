# include <iostream>
# include <list>
# include <sys/timeb.h>
# include <time.h>
# include <windows.h>
using namespace std;
bool Makework(int Sam[10][10]);//判断迷宫是否有出口
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
                Sleep(3);//延时达到完全随机数的效果
                _ftime(&timebuffer);
                tem=timebuffer.millitm;
                srand(tem);
                a=rand()%2;
                if(rand()%6==1)//再次增加一个随机，增加空格。
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
            cout<<"迷宫有出口，迷宫路线图如下"<<endl;
        }
        else
        {
            cout<<"迷宫无出口"<<endl;
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
        cout<<"选择1继续，其它退出"<<endl;
        cin>>quit;
    }
}
bool Makework(int Sam[10][10])
{
    int x=0,y=0;//x横y纵坐标Sam[y][x]
    int U=-1,D=1,L=-1,R=1;//上下左右
    list<int> val;
    list<int>::iterator vben=val.begin();
    list<int>::iterator vend=val.end();
    bool back=false;//是否是在后退，当前后左右都不能移动时。
    while((9!=x)||(9!=y))//是否到达终点
    {
        if((y+D)<10)//下移动
        {
            if(Sam[y+D][x]==0)
            {
                Sam[y][x]=4;
                if(back)//后退时有新的路线
                {
                    Sam[y+D][x]=4;//新路线设置为新起点
                    back=false;
                }
                val.push_back(x);//坐标添加进容器
                val.push_back(y);
                y=y+D;//移动坐标
                continue;
            }
        }
        if((x+R)<10)//右移动
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
        if(y+U>=0)//上移动
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
        if((x+L>=0))//左移动
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
        if(!val.empty())//前后左右不能移动或者移动后都有阻挡，那么后退。
        {
            back=true;
            list<int>::iterator vend=val.end();
            --vend;
            y=*vend;
            --vend;
            x=*vend;//修改坐标
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
