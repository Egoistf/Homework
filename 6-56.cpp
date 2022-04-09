#include<iostream>
using namespace std;
int main()
{
	
	return 0;
}
/*
enum intvalues:unsigned long long{
  chartype = 255, shorttype = 65535, inttype = 4295967295,
  longtype = 4294967295ul,
  longlongtype = 18446744073709551615ul
};

enum etype1;              //错误，不限定作用域枚举类型的前置声明应指定成员类型
enum etype2:unsigned int;      //正确
enum class etype3;          //正确，限定作用域枚举类型成员有默认类型int 
enum class etype4:unsigned int;  //正确，前置声明指定枚举成员类型

enum color {red, yellow, green};  
enum class newcolor {red, yellow, green};  

color e_var1 = 1;                 //错误，1不是枚举类型值
color e_var2 = red;                //正确，red是color类型的枚举值
color e_var3 = e_var2;             //正确，同类型数据之间的赋值

newcolor e_nvar1 = newcolor::red;       //正确，red是newcolor类型的枚举值
*/
