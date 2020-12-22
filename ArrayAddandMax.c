//#define _CRT_SECURE_NO_DEPRECATE
//#include<stdio.h>
//void main() {
//	int addmax(int x[][3], int m, int n, int row[]);//声明函数
//	int a[4][3],b[3],max;
//	for (int i = 0; i < 4; i++) {
//		for (int j = 0; j < 3; j++) {
//			a[i][j] = rand()%100;
//			printf("%d ", a[i][j]);
//		}
//		printf("\n");
//	}//随机为数组赋值
//	max=addmax(a, 4, 3, b);//调用函数
//	for (int i = 0; i < 3; i++) {
//		printf("%d ", b[i]);
//	}
//	printf("\n%d", max);
//	
//}
//int addmax(int x[][3], int m, int n, int row[]) {
//	int i, j, max = x[0][0];
//	for (i = 0; i < m; i++)
//		row[i] = 0;//row用来存放每行元素和，先赋值为0
//	for (i = 0; i < m; i++) {
//		for (j = 0; j < n; j++) {
//			row[i]+= x[i][j];
//			if (max < x[i][j]) {
//				max = x[i][j];
//			}
//		}
//	}
//	return max;
//}//编写函数求二维数组x【M】【N】中每行元素的和，并求出该二维数组的最大值