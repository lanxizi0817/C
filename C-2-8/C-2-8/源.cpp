#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//������еġ�ˮ�ɻ���������νˮ�ɻ�����ָһ����λ����
//���λ���������͵��ڸ�������e.g. 153 = 1**3+5**3+3**3
int main() {
	int k, a, b, c;
	k = 100;
	while (k < 1000) {
		a = k / 100;
		b = (k / 10) % 10;
		c = k % 10;
		if (a * a * a + b * b *b + c * c *c == k) {
			printf("%d\n", k);
		}
		k++;
	}
	return 0;
}