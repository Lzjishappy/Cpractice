#define _CRT_SECURE_NO_DEPRECATE
#include<stdio.h>
void printwo(int x) {//输出2进制的函数
	for (int i = 31; i >= 0; i--) {//把1左移i位，判断x的i位是0还是1，然后输出第i位后，判断下一位，直至全部输出
		printf("%ld", (x & 1 << i) ? 1 : 0);
	}
	printf("\n");
}
int cmp(int a1, int a2) {
	int cout = 0;
	for (int i = 0; i < 32; i++) {
		if ((a1 & 1) != (a2 & 1))
			cout++;
		a1 = a1 >> 1;
		a2 = a2 >> 1;
	}

	return cout;
}
int main() {//输入2个数，比较有多少个bit位不同
	int a1, a2;
	scanf("%d%d", &a1, &a2);
	printwo(a1);
	printwo(a2);	
	printf(" %d", cmp(a1, a2));
	return 0;
}