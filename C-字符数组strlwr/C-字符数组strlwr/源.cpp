#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//strlwr Сд�ȴ�дASCII��32
char *my_strlwr(char *s) {
	char *words = s;
	while (*words) {
		if (*words >= 'A' && *words <= 'Z') {
			*words = *words - 'A' + 'a';
		}
		words++;
	}
	return s;
}
int main() {
	char str[] = "Hello, WORLD!";
	printf("ת����%s\n", my_strlwr(str));
	return 0;
}