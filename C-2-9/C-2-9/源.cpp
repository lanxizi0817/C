#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//一个数如果恰好等于他的因子之和，这个数就称为“完数”
// e.g.6的因子为1，2，3，而6=1+2+3，因此6为完数。编程序
//找出1000之内的所有完数，并按照6 its factors are 1,2,3,输出
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