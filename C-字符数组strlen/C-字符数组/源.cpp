#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//strlen���ַ������ȵĺ���
//size_t ��һ���޷����������ͣ��ʺϱ�ʾ�ڴ��С�Ͷ��������
//���� const char* str ��ʾ�������һ���ַ����飨�ַ�������ָ�룬
// ����ʹ�� const ���α�ʾ�����ڲ������޸��ַ������ݡ�
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