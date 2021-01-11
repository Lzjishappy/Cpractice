#define _CRT_SECURE_NO_DEPRECATE
/*
* 功能：写一个小程序判断是大端还是小端
* 日期：2021/1/11
*
*/
//大端字节序模式：是指数据的低位保存在内存的高地址，而数据的高位保存在内存的低地址
//小端字节序模式：是指数据的低位保存在内存的低地址，而数据的高位保存在内存的高地址
#include<stdio.h>
int check_sys1() {
	int i = 1;
	return *((char*)&i);
}
int check_sys2() {
	union MyUnion
	{
		int i ;
		char c;
	}un;
	un.i = 1;
	return un.c;
}
int main() {
	//整型占4个字节，只需判断地址中第一个字节是01还是00
	//char指针恰好为1个字节，取char指针指向i,得到4个字节的第一个字节
	//若为01，则为小端，为00则为大端
	int ret;
	ret=check_sys2();
	if (ret == 1) {
		printf("小端\n");
	}
	else
	{
		printf("大端\n");
	}
	return 0;
}