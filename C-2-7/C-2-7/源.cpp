#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//Çó(1+...100)+(1*1+...+50*50)+(1/1+...+1/10)Ö®ºÍ
int main() {
	int k, k1, k2,  sum1, sum2;
	k = 1;sum1 = 0;sum2 = 0;
	double sum3 = 0.0;
	while (k <= 100) {
		sum1 = sum1 + k;
		k++;
	}
	k1 = 1;
	while (k1 <= 50) {
		sum2 = sum2 + k1 * k1;
		k1++;
	}
	k2 = 1;
	while (k2 <= 10) {
		sum3 = sum3 + 1.0 / k2;
		k2++;
	}
	double sum = sum1 + sum2 + sum3;
	printf("%.6f\n", sum);
	return 0;
}