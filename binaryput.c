#define _CRT_SECURE_NO_DEPRECATE
#include<stdio.h>
void printwo(int x) {//输出2进制的函数
	for (int i = 31; i >= 0; i--) {//把1左移i位，判断x的i位是0还是1，然后输出第i位后，判断下一位，直至全部输出
		printf("%ld", (x & 1 << i) ? 1 : 0);
	}
	printf("\n");
}
void printodd(int x) {//打印出奇数bit位
	for (int i = 30; i >= 0; i = i - 2) {
		printf(" ");
		printf("%ld", (x & 1 << i) ? 1 : 0);
	}
	printf("\n");
}
void printeven(int x) {//打印偶数比特位
	for (int i = 31; i >= 1; i = i - 2) {
		printf("%ld", (x & 1 << i) ? 1 : 0);
		printf(" ");
	}
	printf("\n");
}
int main() {//打印2进制的奇数位和偶数位
	int x;
	scanf("%d", &x);
	printwo(x);
	printodd(x);
	printeven(x);
	return 0;
}