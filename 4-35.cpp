#include<iostream>
using namespace std;
int main()
{
	unsigned int studentCounter={0};
	double initialBalance={1000.0};
	return 0;
} 
class Mem
{
public:
    Mem(int i): m(i){} //初始化列表给m初始化
    int m;
};
class Account
{
public:
    Account(){}

private:
    Mem mem{4}; // 对象成员，创建对象时，可以使用{}来调用构造函数
    unsigned int accountNumber;
    string firstName{"mike"};
    string lastName{"mike"};
    double balance;
};

