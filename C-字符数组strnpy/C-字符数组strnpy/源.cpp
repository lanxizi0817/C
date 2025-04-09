#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//my_strncpy (�����ַ��������Ƴ��ȣ����� strncpy)

char* my_strncpy(char* dest, const char* src, size_t n) {
    char* p = dest;
    while (n-- && (*p++ = *src++)); // ���� n ���ַ�
    while (n--) *p++ = '\0'; // �� src ����С�� n����� '\0'
    return dest;
}

int main() {
    char str1[50];
    char str2[] = "Hello, World!";
    my_strncpy(str1, str2, 5);
    printf("���ƺ�: %s\n", str1);
    return 0;
}
//���� n ���ַ����� src ����С�� n����� \0��