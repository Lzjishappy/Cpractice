//#define _CRT_SECURE_NO_DEPRECATE
//
//#include<stdio.h>
////int main() {
//	int a[4] = { 6,5,10,4 };
//	int imin;
//	int t;
//	for (int i = 0; i < 3; i++) {//
//		imin = i;
//		for (int j = i+1; j < 4; j++) {//先找出最小值下标
//			if (a[imin] > a[j]) {
//				imin = j;
//			}
//		}
//		if (imin != i) {//若最小值下标和第一个数的下标不一样，则2数替换
//			t = a[i];
//			a[i] = a[imin];
//			a[imin] = t;
//		}
//	}
//	for (int k = 0; k < 4; k++) {
//		printf("%d ", a[k]);
//	}
//	//选择法排序
//	return 0;
//}