#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//һ�������ǡ�õ�����������֮�ͣ�������ͳ�Ϊ��������
// e.g.6������Ϊ1��2��3����6=1+2+3�����6Ϊ�����������
//�ҳ�1000֮�ڵ�����������������6 its factors are 1,2,3,���
int main() {
	int a, b, c;
	for (a = 2;a <= 1000;a++) {
		c = 0;
		for (b = 1;b < a;b++) {
			if (a % b == 0) {
				c += b;
			}
		}
		if (c == a) {
			printf("%d its factors are ",a);
			for (b = 1;b < a;b++) {
				if (a % b == 0) {
					printf("%d,", b);
				}
			}
			printf("\b \n");
		}
	}
	return 0;
}