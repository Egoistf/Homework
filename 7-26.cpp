#include<bits/stdc++.h>
using namespace std;
int n;
int a[20][20];
int dx[8] = {-2,-2,-1,1,2,2,1,-1};
int dy[8] = {-1,1,2,2,1,-1,-2,-2};
int flag = 0;
void dfs(int x,int y,int num)
{
    int x1,y1;
    if(num == n*n)  //递归出口条件
    {
        flag = 1;
        return;
    }
    for(int i = 0; i < 8; ++i)
    {
        x1 = x + dx[i];
        y1 = y + dy[i];
        if(x1>0&&x1<=n&&y1>0&&y1<=n&&!a[x1][y1])
        {
            num = num+1;
            a[x1][y1] = num;
            dfs(x1,y1,num);
            num = num-1;   //回溯，要将原来的恢复
            if(flag)
                return;
            a[x1][y1] = 0;
        }
        x1 = x - dx[i];
        y1 = y - dy[i];
    }
}
int main()
{
    cin >> n;
    a[1][1] = 1;
    dfs(1,1,1);
    for(int i = 1; i <= n; ++i)
    {
        for(int j = 1; j <= n; ++j)
        {
            cout << a[i][j];
            if(j < n)
                cout << " ";
        }
        cout << endl;
    }
    return 0;
}
