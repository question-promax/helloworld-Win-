// 读取并输出年月日是否为合法的日期

#include <stdio.h>

using namespace std;

int main ()
{
    int y,m,d,rs=0;
    char c;
    scanf("%d%c%d%c%d",&y,&c,&m,&c,&d);
    rs=((0<m<13)?(m!=2?((m==1||3||5||7||8||10||12)?(0<d && d<=31):(0<d && d<=30)):((y%4==0&&y%100!=0)||(y%400==0)?(0<d && d<=29):(0<d && d<=28))):(0));
    printf("%d\n",rs);

    return 0;
    
    
}