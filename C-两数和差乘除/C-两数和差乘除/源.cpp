#define _CRT_SECURE_NO_WARNINGS 1
//输入两个整数，求和差乘除
#include <stdio.h>
int main() {
	int a, b, sum, cha, cheng,chu;
	printf("请输入两个整数\n");
	scanf("%d%d", &a, &b);
	sum = a + b;
	cha = a - b;
	cheng = a * b;
	if (b == 0) {
		printf("和=%d,差=%d,乘=%d,除法不存在", sum, cha, cheng);
	}
	else {
		chu = a / b;
		printf("和=%d,差=%d,乘=%d,除=%d", sum, cha, cheng, chu);
	}
	
	return 0;
}