#define _CRT_SECURE_NO_DEPRECATE
#include<stdio.h>
#include "game.h"
#include<time.h>
void menu() {
	printf("-----------------------------------------\n");
	printf("-------------欢迎来到扫雷游戏----------\n");
	printf("----输入1.开始游戏----------输入2.退出游戏-----\n");
	printf("-----------------------------------------\n");
}
int InitArr(char arr[ROW+2][COL+2], char arr2[ROW][COL], int row, int col,int cout) {
	int i, j, k;
	srand((unsigned)time(NULL));
	for (i = 1; i < row+1; i++) {
		for (j = 1; j < col+1; j++) {
			k = rand()%5;
			if (k < 2) {
				arr[i][j] = '*';
				cout++;
			}
			else
				arr[i][j] = ' ';
		}
	}
	for (i = 0; i < row; i++) {
		for (j = 0; j < col; j++) {
			arr2[i][j] = ' ';
		}
	}
	return cout;
}
void board(char arr[ROW+2][COL+2], char arr2[ROW][COL], int row, int col) {
	for (int i = 0; i < row; i++) {
		for (int j = 0; j < col; j++) {
			printf("%c ", arr2[i][j]);
			printf("|");
		}
		
		printf("\n");
		for (int j = 0; j < col; j++)
			printf("---");
		printf("\n");
		}
	printf("\n");
	for (int i = 1; i <=row; i++) {
		for (int j = 1; j <= col; j++) {
			printf("%c ", arr[i][j]);
			printf("|");
		}
		
		printf("\n");
		for (int j = 1; j <= col; j++)
			printf("---");
		printf("\n");
	}
}
int play(char arr[ROW+2][COL+2], char arr2[ROW][COL], int row, int col,int num1) {
	int m, n,i,j;
	char cout = '0';
	X:
	printf("请输入要排雷的行数: ");
	scanf("%d", &m);
	printf("请输入要排雷的列数:");
	scanf("%d", &n);
	if (m > row || m < 1 || n>col || n < 1) {
		printf("请输入正确的行列数：\n");
		goto X;
	}
	if (arr2[m - 1][n - 1] != ' ') {
		printf("此处已排过雷，请重新输入\n");
		goto X;
	}
	if (arr[m ][n] == '*') {
		printf("你踩到了雷！！！！游戏结束！！");
			exit();
	}
	for (i = m-1; i <=m+1; i++) {
		for (j = n-1; j <=n + 1; j++) {
			if (arr[i][j] == '*')
				cout++;
		}
	}
	arr2[m - 1][n - 1] = cout;
	num1++;
	return num1;
		
}

void game() {
	int num=0;
	int num1=0;
	char TrueArr[ROW+2][COL+2];
	char dspArr[ROW][COL];
	num=InitArr(TrueArr,dspArr,ROW,COL,num);
	board(TrueArr, dspArr, ROW, COL);
	do {
		num1=play(TrueArr, dspArr, ROW, COL,num1);

		if (num+num1==9) {
			printf("你赢了！"); break;
		}
		board(TrueArr, dspArr, ROW, COL);
	} while (1);
	
}
void exit1() {
	printf("退出");
}
void test() {
	int input;
	menu();
begin:
	scanf("%d", &input);
	switch (input)
	{
	case 1:game(); break;
	case 2:exit1(); break;
	default: printf("输入错误，请重新输入:");
		goto begin; break;

	}
}