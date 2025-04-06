#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

char* my_strcpy(char* dest, const char* src) {
    char* p = dest;
    while ((*p++ = *src++)); // 复制 src 到 dest，包括 `\0`
    return dest;
}

int main() {
    char str1[50];
    char str2[] = "Hello, World!";
    my_strcpy(str1, str2);
    printf("复制后: %s\n", str1);
    return 0;
}
//依次复制 src 到 dest，包括 \0 结束符。
