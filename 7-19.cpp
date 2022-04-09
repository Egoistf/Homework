#include <iostream>
#include <vector>
using namespace std;
int main()
{
	vector<int> input({1,2,3,4,5});
　　int n = input.size();
　　int arr[n];
　　for(int i=0; i<n; i++)
	{
　　　　arr[i] = input[i];
　　}
　　for(int i:arr)
	{
		cout << i << " " ;
　　}
　　return 0;
}
