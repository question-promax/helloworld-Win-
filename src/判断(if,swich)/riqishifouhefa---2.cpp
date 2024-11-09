// 读取并输出年月日是否为合法的日期

#include <stdio.h>

int main() {
    int year, month, day;
    char sep1, sep2;

    scanf("%d%c%d%c%d", &year, &sep1, &month, &sep2, &day);

    int valid = ((month >= 1 && month <= 12) &&
                 ((month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12) && (day >= 1 && day <= 31)) ||
                 ((month == 4 || month == 6 || month == 9 || month == 11) && (day >= 1 && day <= 30)) ||
                 (month == 2 && ((year % 4 == 0 && year % 100!= 0) || year % 400 == 0) && (day >= 1 && day <= 29)) ||
                 (month == 2 && ((year % 4!= 0 || (year % 100 == 0 && year % 400!= 0)) && (day >= 1 && day <= 28))));

    printf("%s\n", valid? "YES" : "NO");

    return 0;
}
