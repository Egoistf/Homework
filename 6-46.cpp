/*
1 三角函数
double sin (double);
double cos (double);
double tan (double);
2 反三角函数
double asin (double); 结果介于[-PI/2, PI/2]
double acos (double); 结果介于[0, PI]
double atan (double); 反正切(主值), 结果介于[-PI/2, PI/2]
double atan2 (double, double); 反正切(整圆值), 结果介于[-PI/2, PI/2]
3 双曲三角函数
double sinh (double);
double cosh (double);
double tanh (double);
4 指数与对数
double exp (double);
double pow (double, double);
double sqrt (double);
double log (double); 以e为底的对数
double log10 (double);c++中自然对数函数：log(N) 以10为底：log10(N)但没有以2为底的函数但是可以用换底公式解 决：log2(N)=log10(N)/log10(2)
5 取整
double ceil (double); 取上整
double floor (double); 取下整
6 绝对值
double fabs (double);
7 标准化浮点数
double frexp (double f, int p); 标准化浮点数, f = x 2^p, 已知f求x, p ( x介于[0.5, 1] )
double ldexp (double x, int p); 与frexp相反, 已知x, p求f
8 取整与取余
double modf (double, double*); 将参数的整数部分通过指针回传, 返回小数部分
double fmod (double, double); 返回两参数相除的余数
source: 《C & C++ Code Capsules》
9 平方根
sqrt
*/

#include<iostream>
#include<math.h>
using namespace std;
int main()
{
	
	return 0;
}
