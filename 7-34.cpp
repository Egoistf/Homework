#include <bits/stdc++.h>
using namespace std;
#define m 11//row
#define n 11
#define down 1
#define right 2
#define left 4
#define up 8
#define WALL -1
#define NOTHING 2

struct block
{
    int row,column,direction;
    block(int _row,int _column,int _direction)
    {
        row = _row;
        column = _column;
        direction = _direction;
    }
};
struct point
{
    int x;
    int y;
} start,end;

vector<block> myblock;
int x_num=1,y_num=1;//��λ��
int G[100][100];

void init()
{
    //����ͼȫ����Ϊǽ
    memset(G,WALL,sizeof(G));
    //������ʼ��
    G[1][1] = NOTHING;
    start.x = start.y = 1;
}
void FindBlock()
{
    //�ҳ��뵱ǰλ�����ڵ�ǽ
    if(x_num+1<=m && G[x_num+1][y_num] == WALL)  //down
    {
        myblock.push_back(block(x_num+1,y_num,down));
    }
    if(y_num+1<=n && G[x_num][y_num+1] == WALL)  //right
    {
        myblock.push_back(block(x_num,y_num+1,right));
    }
    if(x_num-1>=1 && G[x_num-1][y_num] == WALL)  //up
    {
        myblock.push_back(block(x_num-1,y_num,up));
    }
    if(y_num-1>=1 && G[x_num][y_num-1] == WALL)  //left
    {
        myblock.push_back(block(x_num,y_num-1,left));
    }
}

int main()
{
    init();
    srand((unsigned)time(NULL));//���������
    FindBlock();
    //��һ��ѹ������ǽ������ұߺ�������棩����ѭ��
    while(myblock.size())
    {
        int BlockSize = myblock.size();
        //���ѡ��һ��ǽ������0 ~ BlockSize-1֮����������ͬʱҲ��vector��ǽ���±꣩
        int randnum = rand() % BlockSize;
        block SelectBlock = myblock[randnum];
        x_num = SelectBlock.row;//���������ǡ�ѡ���ǽ������
        y_num = SelectBlock.column;
        //���ݵ�ǰѡ���ǽ�ķ�����к�������
        //��ʱ����ʼ�� ѡ���ǽ Ŀ��� ����������ͬһֱ����
        //�����ÿ󹤴ӡ�ѡ���ǽ������ǰ������Ŀ��顱
        //���д�ǽ���� ��)
        switch(SelectBlock.direction)
        {
        case down:
        {
            x_num++;
            break;
        }
        case right:
        {
            y_num++;
            break;
        }
        case left:
        {
            y_num--;
            break;
        }
        case up:
        {
            x_num--;
            break;
        }
        }
        //Ŀ��������ǽ
        if(G[x_num][y_num]==WALL)
        {
            //��ͨǽ��Ŀ���
            G[SelectBlock.row][SelectBlock.column] = G[x_num][y_num] = NOTHING;
            //�ٴ��ҳ���󹤵�ǰλ�����ڵ�ǽ
            FindBlock();
        }
        else //��������أ�˵�����ǵĿ��ڵ���һ���տ���ͨ·���� ��Ϣһ�¾ͺ���
        {
            //relax
        }
        //ɾ�����ǽ(���ò��˵�ǽɾ�ˣ�������Щ�Ѿ�ʩ�����˲�����ʩ���ˣ�ͬʱҲ��ȷ������������ѭ��)
        myblock.erase(myblock.begin()+randnum);
    }
    for (int i=0; i<=m+1; i++)
    {
        for (int j=0; j<=n+1; j++)
        {
            if(i == start.x && j == start.y)
            {
                printf("%c%c",0xa7,0xb0 );
            }
            else if(G[i][j] == NOTHING)
            {
                printf("  ");
            }
            else
            {
                printf("%c%c", 0xa8, 0x80);
            }
        }
        printf("\n");
    }
    return 0;
}
