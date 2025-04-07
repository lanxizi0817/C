#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//void main() {
//	int i = 10;
//	while (--i >= 1) {
//		printf("%d,", i);
//	}
//	printf("%d,\b\n", i);
//}
//void main() {
//	int a, b = 12, c, d;
//	d = (c = (a = b + 1) + 7) * 10;
//	printf("%d,%d,%d,%d\n", a, b, c, d);
//}
void main() {
	double a,c;
	int b;
	a = 1.33256;
	b = (int)(100 * a + 0.5);
	c = b / 100.0;
	printf("%lf\n", c);
}