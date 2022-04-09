#include <iostream>
#include <iomanip>
#include <ctime>
using namespace std;

const int SIZE = 8;

// ��⵱ǰѡ���λ���Ƿ���Ч
bool vaildWay(int col, int row, int board[][SIZE])
{
    return (col >= 0 && col < SIZE&& row >= 0
            && row < SIZE && !board[row][col]);
}

int main()
{
    int board[SIZE][SIZE] = { 0 };      // ��ʼ����������
    int access[SIZE][SIZE] = {    2, 3, 4, 4, 4, 4, 3, 2,
                                  3, 4, 6, 6, 6, 6, 4, 3,
                                  4, 6, 8, 8, 8, 8, 6, 4,
                                  4, 6, 8, 8, 8, 8, 6, 4,
                                  4, 6, 8, 8, 8, 8, 6, 4,
                                  4, 6, 8, 8, 8, 8, 6, 4,
                                  3, 4, 6, 6, 6, 6, 4, 3,
                                  2, 3, 4, 4, 4, 4, 3, 2
                             }; // �ɴ�������
    int horizontal[SIZE] = { 2, 1, -1, -2, -2, -1, 1, 2 };  // ˮƽλ��
    int vertical[SIZE] = { -1, -2, -2, -1, 1, 2, 2, 1 };    // ��ֱλ��
    int currentCol, currentRow;     // ��ǰλ��
    int testCol, testRow;           // ����λ��
    int moveSteps = 0;              // �ƶ�����
    cout << "�������ʼ�������:" << endl;     //�����ʼ���λ��
    cin >> currentCol;
    cin >> currentRow;
    board[currentRow][currentCol] = ++moveSteps;    // �����ʼλ��
    bool done = false;

    while (!done)
    {
        int miniWay = 9;        // ��ѡ��С�Ŀɴ���λ��
        int direction = -1;     // ��¼����
        for (int i = 0; i < SIZE; ++i)          // ɨ��8������
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
                --access[testRow][testCol]; // ���¿ɴ�������
            }
        }

        if (direction == -1)    // ���û�к��ʵķ���
            done = true;
        else                    // ���µ�ǰλ��
        {
            currentCol += horizontal[direction];
            currentRow += vertical[direction];
            board[currentRow][currentCol] = ++moveSteps;
        }
    }

    if (moveSteps == 64)        // ������������еķ���λ��
        cout << "   Ѳ��·��\n\n";
    else
        cout << "   δ�ҵ�����������Ѳ��·��\n\n";

    for (int i = 0; i < SIZE; ++i)      // �����������
    {
        for (int j = 0; j < SIZE; ++j)
            cout << setw(3) << board[i][j];
        cout << endl;
    }

    return 0;
}
