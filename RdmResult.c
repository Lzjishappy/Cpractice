#define _CRT_SECURE_NO_DEPRECATE

#include<stdio.h>
int main() {

	int a[10] ;
	int sum = 0;
	float eve;
	for (int i = 0; i < 10; i++) {
		a[i] = rand() % 71 + 30;
		printf("%d\n", a[i]);
		sum += a[i];
	}
	eve = sum / 10.0;
	for (int j = 1; j <3; j++) {
		for (int k = 5*(j-1); k <= 5 * (j - 1)+4; k++) {
			printf("%d ", a[k]);
		}
		printf("\n");
	}
	/*for (int j = 0; j <= 4; j++) {
		printf("%d ", a[j]);
	}
	printf("\n");
	for (int j = 5; j <=9; j++) {
		printf("%d ", a[j]);
	}
	printf("\n");*/
	printf("%f", eve);
return 0;
}//生成随机成绩并输出