#define _CRT_SECURE_NO_WARNINGS 1
//����ж��ٸ�����
// ����Ӣ�����£�������50�У�һ�в�����80���ַ�
#include <stdio.h>
#include <ctype.h>

int main() {
    int c;              // ������ȡÿ���ַ�
    int in_word = 0;    // ��־����ǰ�Ƿ��ڵ�����
    int count = 0;      // ���ʼ���

    printf("������Ӣ�����£�Ctrl+Z Ȼ��س��������룩��\n");

    while ((c = getchar()) != EOF) {
        if (isalpha(c)) {
            // ������ĸ��˵���ڵ�����
            if (!in_word) {
                in_word = 1;
                count++;
            }
        }
        else {
            // ��������ĸ����Ϊ���ʷָ�
            in_word = 0;
        }
    }

    printf("�� %d ������\n", count);
    return 0;
}