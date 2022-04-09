//八皇后维护矩阵法
#include<iostream>
using namespace std;
int cheese_table[8][8];
int queen[8];//记录五个皇后的列数
int lastqueen=-1;
int solution=0;
int search_line(int i,int j) //搜寻这一行有没可放的位置
{
    for(; j<8; j++)
        if(cheese_table[i][j]==0)
            return j;
    return -1;
}
void set_queen(int i,int j) //在可放的位置上放上皇后记录下来并对棋盘进行操作
{
    cheese_table[i][j]=-1;
    queen[i]=j;
    for(int temp=0; temp<8; temp++) //列操作
        if(cheese_table[temp][j]!=-1)
            cheese_table[temp][j]++;
    for(int temp=0; temp<8; temp++) //行操作
        if(cheese_table[i][temp]!=-1)
            cheese_table[i][temp]++;
    int tempj=j+1;
    for(int tempi=i+1; tempi<8&&tempj<8; tempi++) //东南对角线操作
        cheese_table[tempi][tempj++]++;
    tempj=j-1;
    for(int tempi=i+1; tempi<8&&tempj>=0; tempi++) //东北对角线操作
        cheese_table[tempi][tempj--]++;
    tempj=j+1;
    for(int tempi=i-1; tempi>=0&&tempj<8; tempi--) //西南对角线操作
        cheese_table[tempi][tempj++]++;
    tempj=j-1;
    for(int tempi=i-1; tempi>=0&&tempj>=0; tempi--) //西北对角线操作
        cheese_table[tempi][tempj--]++;
    return;
}
void uptake_queen(int i)
{
    int j=queen[i];
    for(int temp=0; temp<8; temp++) //列操作
        if(cheese_table[temp][j]!=-1)
            cheese_table[temp][j]--;
    for(int temp=0; temp<8; temp++) //行操作
        if(cheese_table[i][temp]!=-1)
            cheese_table[i][temp]--;
    int tempj=j+1;
    for(int tempi=i+1; tempi<8&&tempj<8; tempi++) //东南对角线操作
        cheese_table[tempi][tempj++]--;
    tempj=j-1;
    for(int tempi=i+1; tempi<8&&tempj>=0; tempi++) //东北对角线操作
        cheese_table[tempi][tempj--]--;
    tempj=j+1;
    for(int tempi=i-1; tempi>=0&&tempj<8; tempi--) //西南对角线操作
        cheese_table[tempi][tempj++]--;
    tempj=j-1;
    for(int tempi=i-1; tempi>=0&&tempj>=0; tempi--) //西北对角线操作
        cheese_table[tempi][tempj--]--;
    cheese_table[i][j]=0;
    return;
}
int main()
{
    for(int i=0; i<8; i++)
        for(int j=0; j<8; j++)
            cheese_table[i][j]=0;
    //初始化棋盘
    for(int i=0;; i++) //一行一行操作
    {
        int	j=search_line(i,lastqueen+1);
        if(j==-1) //没有放皇后的位置了，回头
        {
            if(i==0)break;//真正结束位置
            uptake_queen(i-1);
            lastqueen=queen[i-1];
//把上一行的queen的位置记录下来，便于回头的时候从这个位置之后寻找可放位置
            i-=2;
        }
        else
        {
//把棋盘对应位置放上皇后，对这个皇后会影响的棋格进行操作
            lastqueen=-1;
            set_queen(i,j);
            if(i==7)
            {
                solution++;
                uptake_queen(7);
                lastqueen=j;
                i--;
            }
        }
    }
    cout<<solution<<endl;

    return 0;
}
