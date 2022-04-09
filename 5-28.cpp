#include<iostream>
#include<string>
using namespace std;
int main()
{
	string day[12];
	string gift[12];
	for (int i=1;i<=12;i++)
		gift[i-1]="";
	
	for (int i=1;i<=12;i++)
	{
		switch (i)
		{
			case  1:
				day[i-1]="first";
				break;
			case  2:
				day[i-1]="second";
				break;
			case  3:
				day[i-1]="third";
				break;
			case  4:
				day[i-1]="fourth";
				break;
			case  5:
				day[i-1]="fifth";
				break;
			case  6:
				day[i-1]="sixth";
				break;
			case  7:
				day[i-1]="seventh";
				break;
			case  8:
				day[i-1]="eighth";
				break;
			case  9:
				day[i-1]="ninth";
				break;
			case  10:
				day[i-1]="tenth";
				break;
			case  11:
				day[i-1]="eleventh";
				break;
			case  12:
				day[i-1]="twelfth";
				break;
		}	
		
		switch (i)
		{
			case  12:
				gift[i-1]="Twelve drummers drumming, ";
			case  11:
				gift[i-1]+="Eleven pipers piping, ";
			case  10:
				gift[i-1]+="Ten lords a-leaping, ";
			case  9:
				gift[i-1]+="Nine ladies dancing, ";
			case  8:
				gift[i-1]+="Eight maids a-milking, ";
			case  7:
				gift[i-1]+="Seven swans a-swimming, ";
			case  6:
				gift[i-1]+="Six geese a-laying, ";
			case  5:
				gift[i-1]+="Five golden rings, ";
			case  4:
				gift[i-1]+="Four calling birds, ";
			case  3:
				gift[i-1]+="Three French hens, ";
			case  2:
				gift[i-1]+="Two turtle doves, ";
			case  1:
				if(i!=1 &&i!=12)
				gift[i-1]+="And A partridge in a pear tree.";
				else if(i==1)
					gift[i-1]+="A partridge in a pear tree.";
				else
					gift[i-1]+="And A partridge in a pear tree!";
		}
	
			cout<<"On the %s day of Christmas, "<<"my true love sent to me: %s\n\n"<<day[i-1]<<gift[i-1];
	} 
	return 0;
}
