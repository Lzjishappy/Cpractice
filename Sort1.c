//#define _CRT_SECURE_NO_DEPRECATE
//
//#include<stdio.h>
////int main() {
//	int a[4] = { 6,5,10,4 };
//	int imin;
//	int t;
//	for (int i = 0; i < 3; i++) {//
//		imin = i;
//		for (int j = i+1; j < 4; j++) {//���ҳ���Сֵ�±�
//			if (a[imin] > a[j]) {
//				imin = j;
//			}
//		}
//		if (imin != i) {//����Сֵ�±�͵�һ�������±겻һ������2���滻
//			t = a[i];
//			a[i] = a[imin];
//			a[imin] = t;
//		}
//	}
//	for (int k = 0; k < 4; k++) {
//		printf("%d ", a[k]);
//	}
//	//ѡ������
//	return 0;
//}