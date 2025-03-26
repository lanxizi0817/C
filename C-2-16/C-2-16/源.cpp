#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//Êä³öÍ¼°¸
int main() {
	int a = 1;
	while (a < 8) {
		if (a == 1 || a == 7) {
			printf("   *   \n");
		}
		if (a == 2 || a == 6) {
			printf("  ***  \n");
		}
		if (a == 3 || a == 5) {
			printf(" ***** \n");
		}
		if (a == 4) {
			printf("*******\n");
		}
		a++;

	}
	return 0;
}