#define _CRT_SECURE_NO_DEPRECATE
/*
* 功能：函数指针
* 日期：2021年01月11日 23:54:43
*
*/
#include<stdio.h>
int add(int x, int y) {
	return x + y;
}
void print(char* p) {
	printf("%s", p);
}
int main() {
	//普通方式函数调用
	printf("%d\n", add(3, 5));
	print("kkk\n");
	//函数指针定义与调用
	//定义方式：函数类型 （*指针变量）（形参类型）=函数名； 
	//调用方式：（*指针变量）（实参）
	int(*p)(int, int) = add;
	printf("%d\n", (*p)(3, 5));
	void(*p1)(char*) = print;
	(*p1)("kkk");
	return 0;
}
