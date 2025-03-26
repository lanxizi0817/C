#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main() {
    int a, b, c, d;
    printf("请输入三个整数：\n");
    scanf("%d %d %d", &a, &b, &c);
    if (a > b) {
        d = a;
        a = b;
        b = d;
    }
    if (a > c) {
        d = a;
        a = c;
        c = d;
    }
    if (b > c) {
        d = b;
        b = c;
        c = d;
    }
    printf("%d %d %d\n", a, b, c);
    return 0;
}

