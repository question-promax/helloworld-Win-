// 1. 引入头文件(实数运算)

#include <stdio.h>
#include <math.h>

int main() {
    double a, b, c;
    printf("Enter three numbers: ");
    scanf("%lf %lf %lf", &a, &b, &c);

    double average = (a + b + c) / 3;
    printf("The average of the three numbers is: %.2lf\n", average);

    double sum = a + b + c;
    printf("The sum of the three numbers is: %.2lf\n", sum);

    double difference = a - b - c;
    printf("The difference between the smallest and largest numbers is: %.2lf\n", difference);

    double quotient = a / b / c;
    printf("The quotient of the three numbers is: %.2lf\n", quotient);

    double product = a * b * c;
    printf("The product of the three numbers is: %.2lf\n", product);

    double max = fmax(fmax(a, b), c);
    printf("The maximum number is: %.2lf\n", max);

    double min = fmin(fmin(a, b), c);
    printf("The minimum number is: %.2lf\n", min);

    double squareRoot = sqrt(a * a + b * b + c * c);
    printf("The square root of the sum of the squares of the three numbers is: %.2lf\n", squareRoot);
    return 0;
}