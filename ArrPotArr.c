#define _CRT_SECURE_NO_DEPRECATE
/*
* 功能：如何用数组指针输出指针数组里对应数组的元素
* 日期：2021年01月11日 23:54:43
*
*/
#include<stdio.h>
int main() {
	int arr1[] = { 1,2,3 };
	int arr2[] = { 4,5,6 };
	int arr3[] = { 7,8,9 };
	int* potarr[] = { arr1,arr2,arr3 };//指针数组，数组里放了3个元素，每个元素都对应一个数组的首地址
	//创建一个数组指针指向这个potarr数组
	int* (*p)[3] = &potarr;
	int i, j;
	for (i = 0; i < 3; i++) {
		for (j = 0; j < 3; j++) {
			printf("%d ", *((*p)[i]+j));
			//(*p)[i]就是potarr里面的元素arr1,arr2,arr3
		}
		printf("\n");
	}


	return 0;
}
