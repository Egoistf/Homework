//�˻ʺ�ά������
#include<iostream>
using namespace std;
int cheese_table[8][8];
int queen[8];//��¼����ʺ������
int lastqueen=-1;
int solution=0;
int search_line(int i,int j) //��Ѱ��һ����û�ɷŵ�λ��
{
    for(; j<8; j++)
        if(cheese_table[i][j]==0)
            return j;
    return -1;
}
void set_queen(int i,int j) //�ڿɷŵ�λ���Ϸ��ϻʺ��¼�����������̽��в���
{
    cheese_table[i][j]=-1;
    queen[i]=j;
    for(int temp=0; temp<8; temp++) //�в���
        if(cheese_table[temp][j]!=-1)
            cheese_table[temp][j]++;
    for(int temp=0; temp<8; temp++) //�в���
        if(cheese_table[i][temp]!=-1)
            cheese_table[i][temp]++;
    int tempj=j+1;
    for(int tempi=i+1; tempi<8&&tempj<8; tempi++) //���϶Խ��߲���
        cheese_table[tempi][tempj++]++;
    tempj=j-1;
    for(int tempi=i+1; tempi<8&&tempj>=0; tempi++) //�����Խ��߲���
        cheese_table[tempi][tempj--]++;
    tempj=j+1;
    for(int tempi=i-1; tempi>=0&&tempj<8; tempi--) //���϶Խ��߲���
        cheese_table[tempi][tempj++]++;
    tempj=j-1;
    for(int tempi=i-1; tempi>=0&&tempj>=0; tempi--) //�����Խ��߲���
        cheese_table[tempi][tempj--]++;
    return;
}
void uptake_queen(int i)
{
    int j=queen[i];
    for(int temp=0; temp<8; temp++) //�в���
        if(cheese_table[temp][j]!=-1)
            cheese_table[temp][j]--;
    for(int temp=0; temp<8; temp++) //�в���
        if(cheese_table[i][temp]!=-1)
            cheese_table[i][temp]--;
    int tempj=j+1;
    for(int tempi=i+1; tempi<8&&tempj<8; tempi++) //���϶Խ��߲���
        cheese_table[tempi][tempj++]--;
    tempj=j-1;
    for(int tempi=i+1; tempi<8&&tempj>=0; tempi++) //�����Խ��߲���
        cheese_table[tempi][tempj--]--;
    tempj=j+1;
    for(int tempi=i-1; tempi>=0&&tempj<8; tempi--) //���϶Խ��߲���
        cheese_table[tempi][tempj++]--;
    tempj=j-1;
    for(int tempi=i-1; tempi>=0&&tempj>=0; tempi--) //�����Խ��߲���
        cheese_table[tempi][tempj--]--;
    cheese_table[i][j]=0;
    return;
}
int main()
{
    for(int i=0; i<8; i++)
        for(int j=0; j<8; j++)
            cheese_table[i][j]=0;
    //��ʼ������
    for(int i=0;; i++) //һ��һ�в���
    {
        int	j=search_line(i,lastqueen+1);
        if(j==-1) //û�зŻʺ��λ���ˣ���ͷ
        {
            if(i==0)break;//��������λ��
            uptake_queen(i-1);
            lastqueen=queen[i-1];
//����һ�е�queen��λ�ü�¼���������ڻ�ͷ��ʱ������λ��֮��Ѱ�ҿɷ�λ��
            i-=2;
        }
        else
        {
//�����̶�Ӧλ�÷��ϻʺ󣬶�����ʺ��Ӱ��������в���
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
