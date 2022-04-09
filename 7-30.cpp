#include<iostream>
using namespace std;

void printArray(int arr[],int start,int over)
{
    for(int i=start;i<=over;i++)
    {
        cout<<arr[i]<<" ";
    }
}

int main()
{
    int a[10]={0,1,2,3,4,5,6,7,8,9};
    printArray(a,2,9);
    return 0;
}
