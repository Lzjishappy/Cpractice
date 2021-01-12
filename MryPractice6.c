#define _CRT_SECURE_NO_DEPRECATE
/*
* 功能：内存题目训练4
* 日期：2021年01月11日 23:54:43
*
*/
#include<stdio.h>
unsigned char i = 0;
int main() {
	for (i = 0; i <= 255; i++) {
		printf("abc\n");
	}
	return 0;
}
/*
无符号char的范围为0-255
00000000  0
00000001  1
00000002  2
……
01111111  127
10000000   128
10000001   129
……
11111110   254
11111111   255
255+1为0
*/
