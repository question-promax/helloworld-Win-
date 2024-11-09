//二实数求余数


#include <stdio.h>
#include <math.h>

double remainder(double a, double b) {
    double quotient = a / b;
    double intQuotient = floor(quotient);
    double result = a - b * intQuotient;
    return result;
}

int main() {
    double a, b;
    printf("请输入 a 的值: ");
    scanf("%lf", &a);
    printf("请输入 b 的值: ");
    scanf("%lf", &b);

    double rem = remainder(a, b);
    printf("a 除以 b 的余数为: %lf\n", rem);

    return 0;
}
/*上述表达式 a - b * floor(a / b) 的原理如下：

首先，a / b 得到了 a 除以 b 的商。

然后，通过 floor 函数对这个商进行向下取整，得到一个整数的商。

最后，将这个整数的商乘以 b ，得到一个不超过 a 且能被 b 整除的数。

用 a 减去这个数，就得到了 a 除以 b 的余数。

例如，假设 a = 7.5，b = 2.5 ：

a / b = 7.5 / 2.5 = 3.0

floor(3.0) = 3

b * floor(a / b) = 2.5 * 3 = 7.5

a - b * floor(a / b) = 7.5 - 7.5 = 0 ，即余数为 0 。

再比如，假设 a = 10.8，b = 3.5 ：

a / b = 10.8 / 3.5 ≈ 3.0857

floor(3.0857) = 3

b * floor(a / b) = 3.5 * 3 = 10.5

a - b * floor(a / b) = 10.8 - 10.5 = 0.3 ，即余数为 0.3 。*/