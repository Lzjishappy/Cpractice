#define _CRT_SECURE_NO_DEPRECATE
#include<stdio.h>
//输入一个整数，输出他的二进制中1的个数
int main() {
	int num,cout=0;
	scanf("%d",&num);
	for (int i = 0; i < 32; i++) {
		if ((num & 1) == 1)
			cout++;
		num = num >> 1;
	}
	printf("%d", cout);

	return 0;
}