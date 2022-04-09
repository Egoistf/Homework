#include <iostream>
using namespace std;

void tripleByReference(double& count)
{
    count *= 3;
}

double tripleByValue(double count)
{
	return 3*count;
}

int main()
{
    double m;
    cin>>m;
    cout<<tripleByValue(m)<<endl;
    tripleByReference(m);
    cout<<m<<endl;
    return 0;
}

