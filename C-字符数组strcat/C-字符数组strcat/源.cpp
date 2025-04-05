#define _CRT_SECURE_NO_WARNINGS 1
//字符串连接
#include <stdio.h>

char* my_strcat(char* dest, const char* src) {
    char* p = dest;
    while (*p) p++;  // 找到 dest 末尾
    while ((*p++ = *src++)); // 复制 src 到 dest 末尾
    return dest;
}

int main() {
    char str1[50] = "Hello, ";
    char str2[] = "World!";
    my_strcat(str1, str2);
    printf("拼接后: %s\n", str1);
    return 0;
}
//找到 dest 末尾。

//依次复制 src 的字符到 dest，包括 \0 结束符。