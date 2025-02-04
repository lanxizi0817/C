#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main()
{
	int a = 10;//a在内存中要分配空间 - 4个字节
	&a;//a所占四个字节的第一个字节地址
	printf("%p", &a);//%p专门用来打印地址的
	int* pa = &a;//pa是用来存放地址的，在c语言中pa叫指针变量
	//*说明pa是指针变量
	//int说明pa指向的对象是int类型的
	return 0;
}