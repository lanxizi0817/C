#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//my_strncpy (复制字符串但限制长度，类似 strncpy)

char* my_strncpy(char* dest, const char* src, size_t n) {
    char* p = dest;
    while (n-- && (*p++ = *src++)); // 复制 n 个字符
    while (n--) *p++ = '\0'; // 若 src 长度小于 n，填充 '\0'
    return dest;
}

int main() {
    char str1[50];
    char str2[] = "Hello, World!";
    my_strncpy(str1, str2, 5);
    printf("复制后: %s\n", str1);
    return 0;
}
//复制 n 个字符，若 src 长度小于 n，填充 \0。