#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//struprת���ɴ�д Сд�ȴ�дASCII��32
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
	printf("ת����%s\n", my_strupr(str));
	return 0;
}