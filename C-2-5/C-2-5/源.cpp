#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//��Sn=a+aa+aaa+...+n��aֵ֮������a��һ�����֣�
// n��ʾa��λ����n�ɼ������� e.g.2+22+222+...+22222(n=5)
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