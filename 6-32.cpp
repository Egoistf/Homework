#include<iostream>
using namespace std;

int qualityPoints(int score)
{
	if(score>=90 && score<=100) return 4;
	else if(score>=80 && score<=89) return 3;
	else if(score>=70 && score<=79) return 2;
	else if(score>=60 && score<=69) return 1;
	else return 0;
}

int main()
{
	int score;
	cin>>score;
	cout<<qualityPoints(score);
	return 0;
}
