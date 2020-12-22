#define _CRT_SECURE_NO_DEPRECATE

#include<stdio.h>
int main() {
	int row;
	char max;
	char c[80];
	printf("请输入行数：\n");
	scanf("%d", &row);
	getchar();//缓冲区
	for (int i = 0; i < row; i++) {
		gets(c);//获取字符串
		printf("%d ", strlen(c));//输出一行的字符个数
		max = c[0];
		for (int j = 0; j<=(strlen(c)-1 ); j++) {//
			if (max < c[j + 1]) {
				max = c[j + 1];
			}
		}//找出最大值
		printf("%c \n", max);//输出最大值并且换行	
	}
}//输出字符串的字符个数和ASCII值最大的字符