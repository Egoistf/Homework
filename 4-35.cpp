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
    Mem(int i): m(i){} //��ʼ���б��m��ʼ��
    int m;
};
class Account
{
public:
    Account(){}

private:
    Mem mem{4}; // �����Ա����������ʱ������ʹ��{}�����ù��캯��
    unsigned int accountNumber;
    string firstName{"mike"};
    string lastName{"mike"};
    double balance;
};

