#define _CRT_SECURE_NO_DEPRECATE
/*
* 功能：函数指针数组
* 日期：2021年01月11日 23:54:43
*
*/
#include<stdio.h>
int add(int x, int y) {
	return x + y;
}
int sub(int x, int y) {
	return x - y;
}
int mul(int x, int y) {
	return x * y;
}
int div(int x, int y) {
	return x / y;
}
int main() {
	//定义一个数组funpotarr，数组的元素是函数指针类型(int(*)(int,int)),称为函数指针数组
	int(*funpotarr[])(int, int) = { add,sub,mul,div };
	int i = 0;
	for (i = 0; i < 4; i++) {
		printf("%d\n", funpotarr[i](3, 5));
	}
	return 0;
}
