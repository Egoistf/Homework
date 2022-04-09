#include <iostream>
using namespace std;
double minimum(double x, double y)
{
   return (x < y)? x : y;
}

// 程序的主函数
int main( )
{
   cout << "minimum (2,3): " << minimum(2,3) << endl;
   cout << "minimum (12,33.1): " << minimum(12,33.1) << endl;
   cout << "minimum (100,99.9): " << minimum(100,99.9) << endl;
   return 0;
}
