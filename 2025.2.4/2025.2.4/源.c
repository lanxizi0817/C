#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main()
{
	int a = 10;//a���ڴ���Ҫ����ռ� - 4���ֽ�
	&a;//a��ռ�ĸ��ֽڵĵ�һ���ֽڵ�ַ
	printf("%p", &a);//%pר��������ӡ��ַ��
	int* pa = &a;//pa��������ŵ�ַ�ģ���c������pa��ָ�����
	//*˵��pa��ָ�����
	//int˵��paָ��Ķ�����int���͵�
	return 0;
}