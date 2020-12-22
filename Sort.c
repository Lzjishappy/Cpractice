//#define _CRT_SECURE_NO_DEPRECATE
//
//#include<stdio.h>
//int main() {
//	int a[4] = { 6,5,10,4 };
//	int t;
//	int cout=0;
//	for (int j = 0; j < 3; j++) {
//        for (int i = 0; i < 3-j; i++) {
//			if (a[i] > a[i + 1]) {//两两比较，从小到大排
//				t = a[i];
//				a[i] = a[i + 1];
//				a[i + 1] = t;
//				cout++;
//			}
//		}
//		if (cout == 0)break;
//	}
//	for (int k = 0; k < 4; k++) {
//		printf("%d ", a[k]);
//	}
//}//冒泡法排序