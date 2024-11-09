//部分读取和输出的示例
//在一行中三个正整数，分别表示年、月、日，期间可能使用空格 分隔，或采用斜杠/分隔或采用短横-分隔。读取数据时，仅读取日期

#include <stdio.h>
#include <iostream>

using namespace std;

int main ()
{
    int y,m,d;
    char c;
    scanf("%d",&y);
    c=getchar();
    scanf("%d",&m);
    c=getchar();
    scanf("%d",&d);
    cout<<y<<m<<d;
    
    return 0;
    
}