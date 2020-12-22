//#define _CRT_SECURE_NO_DEPRECATE
//#include<stdio.h>
//#define N 20
//void main() {
//	char name[20][30],temp[30];
//	int i, j, n;
//	scanf_s("%d",& n);//n个学校
//	getchar();//读走缓冲区的回车符
//	printf("Enter their names:\n");
//	for (i = 0; i < n; i++) {
//		gets(name[i]);
//	}
//	for (i = 0; i < n - 1; i++) {
//		for (j = 0; j < n - i - 1; j++) {
//			if (strcmp(name[j], name[j + 1]) > 0) {
//				strcpy(temp, name[j]);
//				strcpy(name[j], name[j + 1]);
//				strcpy(name[j + 1], temp);
//
//			}
//		}
//	}
//	printf("entry:");
//	for (i = 0; i < n; i++)
//		puts(name[i]);
//
//}//将学校的名字排序，用到了冒泡排序法，比较字符串的大小用到了strcmp函数