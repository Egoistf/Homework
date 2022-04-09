#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int i = 0, j = 0;
    int len = 20; // 数组的长度
    int p[len];
    for(int k=0;k<20;k++)
    {
    	cin>>p[k];
	}

    sort(p, p + len);   // 排序

    // 去重
    while (i < len) {
        if (p[i] == p[++j]) { // 遇到重复元素，将其值置为-1
            p[j] = -1;        // -1是标记值，可以换成其他值，但不能和要排序的数字冲突
        } else {
            i = j;
        }
    }

    // 输出
    for (i = 0; i < len; i++)
        if (p[i] != -1) // 只输出非标记元素
            cout << p[i] << " ";  //0 1 5 6 7 8 9

    return 0;
}

