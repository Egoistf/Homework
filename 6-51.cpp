#include <iostream>
using namespace std;
int x=1;
int main()
{
    double x=10.5;
    printf("%f\n",x);
    printf("%d\n",::x);
    return 0;
}
//c++提供一元作用域分辨函数运算符（：：），以便于当全局变量和局部变量名字相同时调用全局变量，但是不能用于访问外层语句块中具有相同名字的局部变量。 （用于补充上一篇文章的不足之处。）

