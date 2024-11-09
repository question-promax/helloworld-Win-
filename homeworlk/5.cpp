#include <stdio.h>

int fac(int n) {
    int sum = 1;
    while (n!= 0) {
        sum =sum*n;
        --n;
    }
    return sum;
}

int main() {
    int n;
    scanf("%d", &n);
    int result = fac(n);
    printf("%d\n", result);
    return 0;
}