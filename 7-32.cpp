#include<iostream>
using namespace std;

int recursiveMinimum(int arr[],int start,int over)
{
    int minnum=9999;
    for(int i=start;i<=over;i++)
    {
        if(minnum>arr[i]) minnum=arr[i];
        else minnum=minnum;
    }
    return minnum;
}

int main()
{
    int a[10]={0,1,2,3,4,5,6,7,8,9};
    cout<<recursiveMinimum(a,2,9);
    return 0;
}
