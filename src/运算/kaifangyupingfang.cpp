//开方与平方


#include <stdio.h>
#include <math.h>

int main() {
    double a, b ,c ,d;
    printf("请输入 a 的值: ");
    scanf("%lf", &a);
    printf("请输入 b 的值: ");
    scanf("%lf", &b);
    c = sqrt(a);//开方
    d = pow(a,b);//a的b次方

    
    printf("%lf %lf\n", c,d);

    return 0;
}