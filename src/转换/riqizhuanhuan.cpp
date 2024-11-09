//入口输入的年月日，要求转化为2000年以后的格式（20xx,xx,xx）并输出


#include<stdio.h>
int main()
{
    int year,month,day;
    char e,f;
    scanf("%d%c%d%c%d",&year,&e,&month,&f,&day);
    printf("%02d-%02d-%02d",((year<1000)?(year+2000):year),month,day);
    return 0;
}