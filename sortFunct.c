//#define _CRT_SECURE_NO_DEPRECATE
//
//#include<stdio.h>
////int main() {
////	int a[10];
////	void sort(int a[], int n);//声明函数
////	for (int i = 0; i < 10; i++) {
////		a[i]=rand() % 100;
////		printf("%d ", a[i]);
////	}
////	printf("\n");
////	sort(a, 10);
////	for (int i = 0; i < 10; i++) {
////		printf("%d ", a[i]);
////	}
////	printf("\n");
////	return 0;
////
////}
////void sort(int a[], int n) {
////	int t;
////	for (int i = 0; i < n-1; i++) {
////		for (int j = 0; j < n - 1-i; j++) {
////			if (a[j] < a[j + 1]) {
////				t = a[j + 1];
////				a[j + 1] = a[j];//冒泡法
////				a[j] = t;
////			}
////		}
////	}
////}排序法函数 从大到小