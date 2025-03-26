#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//求Sn=a+aa+aaa+...+n个a之值，其中a是一个数字，
// n表示a的位数，n由键盘输入 e.g.2+22+222+...+22222(n=5)
int main() {
	int a, n, s, su,sum;
	scanf("%d %d", &a, &n);
	s = 0;
	su = 0;
	sum = 0;
	while (s < n) {
		su = su * 10 + a;
		s = s + 1;
		sum = sum + su;
	}
	printf("%d\n", sum);
	return 0;
}