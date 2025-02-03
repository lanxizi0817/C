#define _CRT_SECURE_NO_WARNINGS 1
//主函数（main函数）
#include <stdio.h>
//static修饰全局变量
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