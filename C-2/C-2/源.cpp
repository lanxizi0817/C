#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//��������������m��n���������Լ������С������
int main() {
	int m, n, a, s, d;   //aΪ����������� sΪ���Լ�� dΪ��С������
	printf("����������������\n");
	scanf("%d %d", &m, &n);
	for (a = 1, s = 0;a <= m && a <= n;a++)
		if (m % a == 0 && n % a == 0) {
			s = a;
		}
	d = (m * n) / s;
	printf("���Լ��Ϊ%d\n", s);
	printf("��С������Ϊ%d\n", d);
	return 0;
}