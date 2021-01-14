//#define _CRT_SECURE_NO_DEPRECATE
///*
//* 功能：指针数组,把指针存放到数组当中
//* 日期：2021年01月11日 23:54:43
//*
//*/
//#include<stdio.h>
//int main() {
//	int arr1[] = { 1,2,3 };
//	int arr2[] = { 4,5,6 };
//	int arr3[] = { 7,8,9 };
//	int* potarr[] = { arr1,arr2,arr3 };
//	//如何打印指针数组中的元素呢
//	int i, j;
//	for (i = 0; i < 3; i++) {
//		for (j = 0; j < 3; j++)
//			printf("%d",*(potarr[i]+j));
//		printf("\n");
//	}
//	return 0;
//}