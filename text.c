#define _CRT_SECURE_NO_WARNINGS 1
//��������main������
#include <stdio.h>
//static����ȫ�ֱ���
void test()
{
	static int a = 1;
	a++;
	printf("%d ", a);
}
int main()
{	
	int i = 0;
	while (i < 10)
	{
		test();
		i++;
	}
	return 0;
}