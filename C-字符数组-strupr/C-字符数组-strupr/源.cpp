#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//strupr转换成大写 小写比大写ASCII大32
char* my_strupr(char* s) {
	char* words = s;
	while (*words) {
		if (*words >= 'a' && *words <= 'z') {
			*words = *words - 'a' + 'A';
		}
		words++;
	}
	return s;
}
int main() {
	char str[] = "Hello, WORLD!";
	printf("转换后：%s\n", my_strupr(str));
	return 0;
}