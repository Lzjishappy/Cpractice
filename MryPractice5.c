//#define _CRT_SECURE_NO_DEPRECATE
///*
//* 功能：内存题目训练4
//* 日期：2021年01月11日 23:54:43
//*
//*/
//#include<stdio.h>
//int main() {
//	char a[1000];
//	int i;
//	for (i = 0; i < 1000; i++) {
//		a[i] = -1 - i;
//	}
//	printf("%d", strlen(a));
//	return 0; 
//}
////char的-128~127
////a[i]依次为-1，-2，-3……-128 127 126……3，2，1，0，-1，-2……
////strlen判断到'\0'前面，所以值为128+127=255