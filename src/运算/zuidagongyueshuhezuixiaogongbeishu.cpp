//两个给定正整数的最大公约数和最小公倍数。
#include <stdio.h>

// 计算最大公约数的函数
int gcd(int a, int b) {
    while (b!= 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int main() {
    int m, n;
    scanf("%d %d", &m, &n);

    int greatestCommonDivisor = gcd(m, n);
    int leastCommonMultiple = m * n / greatestCommonDivisor;

    printf("%d %d\n", greatestCommonDivisor, leastCommonMultiple);

    return 0;
}
/*gcd 函数（最大公约数计算函数）使用欧几里得算法来计算两个数的最大公约数。通过反复用较小数取余较大数，并把余数赋给较小数，较大数赋给原来的较小数，直到余数为 0，此时的较大数就是最大公约数。
在 main 函数中，先读取输入的两个整数 m 和 n 。
调用 gcd 函数计算出最大公约数 greatestCommonDivisor 。
然后根据两个数的乘积等于它们的最大公约数和最小公倍数的乘积这一原理，计算出最小公倍数 leastCommonMultiple ，即 m * n / greatestCommonDivisor 。
最后将最大公约数和最小公倍数打印输出。*/
