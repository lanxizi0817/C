#define _CRT_SECURE_NO_WARNINGS 1
//�ַ�������
#include <stdio.h>

char* my_strcat(char* dest, const char* src) {
    char* p = dest;
    while (*p) p++;  // �ҵ� dest ĩβ
    while ((*p++ = *src++)); // ���� src �� dest ĩβ
    return dest;
}

int main() {
    char str1[50] = "Hello, ";
    char str2[] = "World!";
    my_strcat(str1, str2);
    printf("ƴ�Ӻ�: %s\n", str1);
    return 0;
}
//�ҵ� dest ĩβ��

//���θ��� src ���ַ��� dest������ \0 ��������