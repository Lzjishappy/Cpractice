//#define _CRT_SECURE_NO_DEPRECATE
///*
//* 功能:数组指针打印二维数组
//* 日期：2021年01月11日 23:54:43
//*
//*/
//#include<stdio.h>
//void print(int(*p)[3], int x, int y) {
//	int i, j;
//	for (i = 0; i < 2; i++) {
//		for (j = 0; j < 3; j++) {
//			printf("%d", *(*(p + i) + j));
//			//p是指向{ 1,2,3 }的地址，p + 1是指向{ 7,8,9 }的地址，*(p)是 { 1，2，3 }首元素的地址，**p是第一个数组中第一个元素的地址的解引用
//		}
//	}
//}
//int main() {
//	int arr[2][3] = { {1,2,3},{7,8,9} };
//	print(arr, 2, 3);
//	return 0;
//}
