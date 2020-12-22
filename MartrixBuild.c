//#define _CRT_SECURE_NO_DEPRECATE
//
//#include<stdio.h>
////int main() {
////	int a[3][4];
////	int imin1=0, imin2=0;
////	for (int i = 0; i < 3; i++) {//生成随机数2维数组
////		for (int j = 0; j < 4; j++) {
////			a[i][j] = rand() % 100;
////		}
////	}
////	for (int i = 0; i < 3; i++) {//寻找最小值
////		for (int j = 0; j < 4; j++) {
////		if (a[imin1][imin2] > a[i][j]) {
////imin1 = i;
////			imin2 = j;
////			}
////		}
////	}
////	for (int i = 0; i < 3; i++) {//输出
////		for (int j = 0; j < 4; j++) {
////			printf("%d ", a[i][j]);
////		}
////		printf("\n");
////	}
////	printf("%d  %d  %d", a[imin1][imin2],imin1,imin2);
////	return 0;
////}//二维数组的创建输出和寻找最小值