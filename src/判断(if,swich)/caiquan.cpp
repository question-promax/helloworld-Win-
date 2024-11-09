/*
小明同学听了今天的课程后，疯狂的迷上了猜拳游戏，他打算写一个程序来自动判断猜拳结果。
    假设用字符S表示石头，J表示剪子，B表示布。
输入格式

两个字符，第1个代表你出的，第2个代表计算机出的，中间间隔一个空格。
输出格式

输出游戏结果“You Win!”或者“Computer Win!”，或者平局“Same!”
*/

#include <iostream>
using namespace std;
int main() 
{
    char a,b;
   cin >> a >> b;
    if ((a == 'S' && b == 'J') || (a == 'J' && b == 'B') || (a == 'B' && b == 'S')) 
    {
        cout << "You Win!";
    
    }
    else if((b=='S' && a=='J') || (b=='J' && a=='B') || (b=='B' && a=='S'))
    {
        cout<<"Computer Win!";
    }
    else
    {
        cout<<"Same!";
    }
    return 0;
}