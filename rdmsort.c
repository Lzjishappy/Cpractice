//#define _CRT_SECURE_NO_DEPRECATE
//
//#include<stdio.h>
////int main() {
////	int a[30];
////	int i,cout1=0,cout2=0,t;
////	for (i = 0; i < 30; i++) {
////		a[i] = rand() % 100;
////	}
////	for (i = 0; i < 30; i++) {
////		printf("%d ", a[i]);
////		if ((i + 1) % 10 == 0)
////			printf("\n");
////		if (a[i] >= 90)
////			cout1++;
////		if (a[i] < 60)
////			cout2++;
////	}
////	printf("优秀人数：%d\n", cout1);
////	printf("不及格人数：%d\n", cout2);
////	for (i = 0; i < 29; i++) {
////		for (int j = 0; j < 29-i ; j++) {
////			if (a[j] < a[j + 1]) {
////
////
////				t = a[j];
////				a[j] = a[j + 1];
////				a[j + 1] = t;
////			}
////		}//冒泡排序
////	}
////	for (i = 0; i < 30; i++) {
////		printf("%d ", a[i]);
////		if ((i + 1) % 10 == 0)
////			printf("\n");	
////	}
////	return 0;
////}//随机生成30个成绩 每行10个输出 并从大到小排序