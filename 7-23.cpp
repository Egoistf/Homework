#include <iostream>
#include <iomanip>
#include <ctime>
using namespace std;

const int SIZE = 8;

// 检测当前选择的位置是否有效
bool vaildWay(int col, int row, int board[][SIZE])
{
    return (col >= 0 && col < SIZE&& row >= 0
            && row < SIZE && !board[row][col]);
}

int main()
{
    int board[SIZE][SIZE] = { 0 };      // 初始化棋盘数组
    int access[SIZE][SIZE] = {    2, 3, 4, 4, 4, 4, 3, 2,
                                  3, 4, 6, 6, 6, 6, 4, 3,
                                  4, 6, 8, 8, 8, 8, 6, 4,
                                  4, 6, 8, 8, 8, 8, 6, 4,
                                  4, 6, 8, 8, 8, 8, 6, 4,
                                  4, 6, 8, 8, 8, 8, 6, 4,
                                  3, 4, 6, 6, 6, 6, 4, 3,
                                  2, 3, 4, 4, 4, 4, 3, 2
                             }; // 可达性数组
    int horizontal[SIZE] = { 2, 1, -1, -2, -2, -1, 1, 2 };  // 水平位移
    int vertical[SIZE] = { -1, -2, -2, -1, 1, 2, 2, 1 };    // 垂直位移
    int currentCol, currentRow;     // 当前位置
    int testCol, testRow;           // 测试位置
    int moveSteps = 0;              // 移动步伐
    cout << "请输入初始点的坐标:" << endl;     //输入初始点的位置
    cin >> currentCol;
    cin >> currentRow;
    board[currentRow][currentCol] = ++moveSteps;    // 标记起始位置
    bool done = false;

    while (!done)
    {
        int miniWay = 9;        // 挑选最小的可达性位置
        int direction = -1;     // 记录方向
        for (int i = 0; i < SIZE; ++i)          // 扫描8个方向
        {
            testCol = currentCol + horizontal[i];
            testRow = currentRow + vertical[i];
            if (vaildWay(testCol, testRow, board))
            {
                if (access[testRow][testCol] < miniWay)
                {
                    miniWay = access[testRow][testCol];
                    direction = i;
                }
                --access[testRow][testCol]; // 更新可达性数组
            }
        }

        if (direction == -1)    // 如果没有合适的方向
            done = true;
        else                    // 更新当前位置
        {
            currentCol += horizontal[direction];
            currentRow += vertical[direction];
            board[currentRow][currentCol] = ++moveSteps;
        }
    }

    if (moveSteps == 64)        // 如果遍历到所有的方格位置
        cout << "   巡游路径\n\n";
    else
        cout << "   未找到满足条件的巡游路径\n\n";

    for (int i = 0; i < SIZE; ++i)      // 输出棋盘数据
    {
        for (int j = 0; j < SIZE; ++j)
            cout << setw(3) << board[i][j];
        cout << endl;
    }

    return 0;
}
