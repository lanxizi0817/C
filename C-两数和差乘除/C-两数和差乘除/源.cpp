#define _CRT_SECURE_NO_WARNINGS 1
//����������������Ͳ�˳�
#include <stdio.h>
int main() {
	int a, b, sum, cha, cheng,chu;
	printf("��������������\n");
	scanf("%d%d", &a, &b);
	sum = a + b;
	cha = a - b;
	cheng = a * b;
	if (b == 0) {
		printf("��=%d,��=%d,��=%d,����������", sum, cha, cheng);
	}
	else {
		chu = a / b;
		printf("��=%d,��=%d,��=%d,��=%d", sum, cha, cheng, chu);
	}
	
	return 0;
}