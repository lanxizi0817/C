#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//输入两个正整数m和n，求其最大公约数和最小公倍数
int main() {
	int m, n, a, s, d;   //a为依次增大的数 s为最大公约数 d为最小公倍数
	printf("请输入两个正整数\n");
	scanf("%d %d", &m, &n);
	for (a = 1, s = 0;a <= m && a <= n;a++)
		if (m % a == 0 && n % a == 0) {
			s = a;
		}
	d = (m * n) / s;
	printf("最大公约数为%d\n", s);
	printf("最小公倍数为%d\n", d);
	return 0;
}