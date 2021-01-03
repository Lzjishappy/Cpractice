#define _CRT_SECURE_NO_DEPRECATE
#include<stdio.h>
int judge1(int x) {//判断二进制中1的个数，但是为负数的时候发生错误
	int cout = 0;
	while (x > 1)
	{
		if (x % 2 == 1)
			cout++;
		x /= 2;
	}
	if (x == 1) {
		cout++;
	}
	return cout;
}

int judge2(int x) {//x的最后一位判断是不是1，是的话cout++，然后x右移一位，判断下一位，总共判断32次
	int cout = 0;
	for (int i = 0; i < 32; i++) {
		if (x & 1 == 1)
			cout++;
		x = x >> 1;
	}
	return cout;
}

void printwo(int x) {//输出2进制的函数
	for (int i = 31; i >= 0; i--) {//把1左移i位，判断x的i位是0还是1，然后输出第i位后，判断下一位，直至全部输出
		printf("%ld", (x & 1 << i) ? 1 : 0);
	}
}

int main() {
	int x;
	int ret;
	char a[100];
	scanf("%d", &x);
	printwo(x);
	_itoa(x, a, 2);//itoa函数：把x的二进制放到a字符数组里面去
	printf("\n%s", a);
	ret = judge2(x);
	printf("\n%d", ret);
	return 0;
}