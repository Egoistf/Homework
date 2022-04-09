#include <iostream>
using namespace std;
double maximum(double x, double y)
{
   return (x > y)? x : y;
}

// 程序的主函数
int main( )
{
   cout << "maximum (2,3): " << maximum(2,3) << endl;
   cout << "maximum (12,33.1): " << maximum(12,33.1) << endl;
   cout << "maximum (100,99.9): " << maximum(100,99.9) << endl;
   return 0;
}
