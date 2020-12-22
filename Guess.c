//#define _CRT_SECURE_NO_DEPRECATE
//
//#include<stdio.h>

//int main() {
//	int a, b, c, d, e;
//	for (int i = 1; i <10; i++) {
//		for (int j = 1234; j <= 99999; j++) {
//			a = j / 10000;
//			b = (j / 1000) % 10;
//			c = (j / 100 )% 10;
//			d = (j / 10) % 10;
//			e = j % 10;
//			
//			if (i*j == (a + b * 10 + c * 100 + d * 1000 + e * 10000)&&(a!=b)&&(d!=c)&&(a!=e)&&(a!=c)) {
//				printf("%d %d\n", i, j);
//		}}}
//return 0;
//}//福尔摩斯猜数,ABCDE*?=EDCBA,ABCDE和？都是数字