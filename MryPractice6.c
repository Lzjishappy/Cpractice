#define _CRT_SECURE_NO_DEPRECATE
/*
* ���ܣ��ڴ���Ŀѵ��4
* ���ڣ�2021��01��11�� 23:54:43
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
�޷���char�ķ�ΧΪ0-255
00000000  0
00000001  1
00000002  2
����
01111111  127
10000000   128
10000001   129
����
11111110   254
11111111   255
255+1Ϊ0
*/