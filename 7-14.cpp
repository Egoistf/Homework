#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int i = 0, j = 0;
    int len = 20; // ����ĳ���
    int p[len];
    for(int k=0;k<20;k++)
    {
    	cin>>p[k];
	}

    sort(p, p + len);   // ����

    // ȥ��
    while (i < len) {
        if (p[i] == p[++j]) { // �����ظ�Ԫ�أ�����ֵ��Ϊ-1
            p[j] = -1;        // -1�Ǳ��ֵ�����Ի�������ֵ�������ܺ�Ҫ��������ֳ�ͻ
        } else {
            i = j;
        }
    }

    // ���
    for (i = 0; i < len; i++)
        if (p[i] != -1) // ֻ����Ǳ��Ԫ��
            cout << p[i] << " ";  //0 1 5 6 7 8 9

    return 0;
}

