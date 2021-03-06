//tower of hanoi
//iteration type
#include <iostream>
#include <bitset>
#include <sstream>
#include <string>
#include <cmath>
using namespace std;

void hanoi(unsigned int, int, int, int);
int lowestBit(int);
string movement(unsigned int, unsigned int, unsigned int,int,int,int);
string movementGenerator(int, int);

int main()
{
    unsigned int plateNum = 0;
    int ini = 0;
    int fin = 0;
    int tem = 0;
    cout << "Enter the plate number: ";
    cin >> plateNum;
    cout << "Enter the ini, fin, and tem: ";
    cin >> ini >> fin >> tem;
    hanoi(plateNum, ini, fin, tem);
    
    

}

//return the position of the first "1" from right to left, AKA the plate number
int lowestBit(int num)
{
    stringstream ss;
    bitset<32> bitForm = bitset<32>(num);
    string bitString;
    unsigned int position = 0;
    ss << bitForm;
    ss >> bitString;
    for (unsigned int i = bitString.size(); i >= 0;i--)
    {
        if (bitString[i] == '1')
        {
            position = bitString.size() - i;
            break;
        }
    }
    return position;
}

//return a string including the movement, such as "A--B"
string movement(unsigned int plateNum,unsigned int stepNum,unsigned int position,int ini,int fin,int tem)
{
    unsigned int moveTimes = 0;
    string move;
    moveTimes = stepNum - static_cast<unsigned int>(pow(2, static_cast<double>(position)-1));
    moveTimes /= static_cast<int>(pow(2, static_cast<double>(position)));
    moveTimes += 1;
    if((plateNum - position)%2 == 0)
    {
        if ((moveTimes % 3) == 1)
            move = movementGenerator(ini,fin);
        else if ((moveTimes % 3) == 2)
            move = movementGenerator(fin,tem);
        else
            move = movementGenerator(tem,ini);
    }
    else
    {
        if ((moveTimes % 3) == 1)
            move = movementGenerator(ini,tem);
        else if ((moveTimes % 3) == 2)
            move = movementGenerator(tem,fin);
        else
            move = movementGenerator(fin,ini);
    }
    return move;
}

string movementGenerator(int start,int end)
{
    stringstream ss;
    string moveString;
    ss << start;
    ss<<"-->";
    ss << end;
    ss >> moveString;
    return moveString;
}

//??????hanoi
void hanoi(unsigned int plateNum, int ini, int fin, int tem)
{
    unsigned int position;
    string move;
    for (unsigned int i = 1; i <= pow(2,static_cast<double>(plateNum))-1;i++)
    {
        position = lowestBit(i);
        move = movement(plateNum, i, position,ini,fin,tem);
        cout << move << endl;
    }
}

