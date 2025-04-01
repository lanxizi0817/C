#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//strlen求字符串长度的函数
//size_t 是一种无符号整数类型，适合表示内存大小和对象计数。
//参数 const char* str 表示传入的是一个字符数组（字符串）的指针，
// 并且使用 const 修饰表示函数内部不会修改字符串内容。
size_t my_strlen(const char* str) {
    size_t len = 0;
    while (str[len] != '\0') {
        len++;
    }
    return len;
}
int main() {
    char str[] = "hello,world";
    printf("%d",my_strlen(str));
    return 0;
}