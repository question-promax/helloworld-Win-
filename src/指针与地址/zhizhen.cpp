//指针

#include <stdio.h>

int main() {
    int a = 10;
    int b[3] = {0, 1, 2};
    int* g = &b[0];
    int* p = &a; // 取a的地址并赋值给p
    int* q = new int[3]; // 堆上创建三个整数
    *q = 100;
    *(q + 1) = 200;
    *(q + 2) = 300;
    *p = 20; // 改变a的值
    printf("a = %d\n", a); // 20
    printf("p = %p\n", p); // 0x7ffe68b4091c
    printf("*p = %d\n", *p); // 20
    printf("q = %p\n", q); // 0x58dcb1169eb0
    printf("*q = %d\n", *q); // 100
    printf("*(q + 1) = %d\n", *(q + 1)); // 200
    printf("*(q + 2) = %d\n", *(q + 2)); // 300
    printf("g = %p\n", g); // 0x7ffe68b4093c
    printf("b [0] = %d\n", *g++); // 0
    printf("b [1] = %d\n", *g); // 1
    delete[] q; // 释放堆上创建的数组
    return 0;
}