//#define _CRT_SECURE_NO_DEPRECATE
//
//#include<stdio.h>
////int main() {
////	int a[11];
////	int i,t,x;
////	printf("Enter Ten number:");
////	for ( i = 0; i <10; i++) {//获取数据
////		scanf("%d", &a[i]);
////	}
////	for ( i = 0; i < 9; i++) {//冒泡法排序从小到大
////		for (int j = 0; j < 9 - i; j++) {
////			if (a[j] > a[j + 1]) {
////				t = a[j];
////				a[j] = a[j + 1];
////				a[j + 1] = t;
////			}
////		}
////	}
////	for ( i = 0; i < 10; i++) {
////		printf("%d ", a[i]);
////	}//输出数组前10位，11位没有数据
////	printf("\n输入插入的数据：");
////	scanf("%d", &x);
////	for ( i = 0; i < 10; i++) {
////		if (a[i] >= x) break;//找到插入的位置i
////	}
////	printf("i=%d", i);
////	for (int j = 10; j > i; j--) {
////		a[j] = a[j - 1];
////	}//插入后，后面的数据依次向后移
////	a[i] = x;//插入数据
////	for ( i = 0; i < 11; i++) {
////		printf("%d ", a[i]);
////	}//输出数组
////	return 0;
////}//输入10个数据 从小到大排序然后插入一个数，不影响排序