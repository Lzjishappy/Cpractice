#define _CRT_SECURE_NO_DEPRECATE
#include<stdio.h>
#include "gamemine1.h"
#include<time.h>
void menu() {
	printf("-----------------------------------------\n");
	printf("-------------��ӭ����ɨ����Ϸ----------\n");
	printf("----����1.��ʼ��Ϸ----------����2.�˳���Ϸ-----\n");
	printf("-----------------------------------------\n");
}
void InitArr(char arr[ROWS][COLS], int rows, int cols,char set) {
	int i, j;
	for (i = 0; i < rows; i++) {
		for (j = 0; j < cols; j++) {
			arr[i][j] = set;
		}
	}
}
void board(char arr[ROWS][COLS], int row, int col) {
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
void SetMine(char arr[ROWS][COLS], int row, int col,int number) {
	int x,y;
	while (number>0)
	{
		x = rand() % row + 1;
		y = rand() % col + 1;
		if (arr[x][y] == ' ') {
			arr[x][y] = '*';
			number--;
		}
	}
}
void play(char arr[ROWS][COLS], char arr2[ROWS][COLS], int row, int col) {
	int m, n, i, j;
	char cout ;
	int win = 0;
	while (win < ROW*COL - NUM)
	{
		cout = '0';
	X:
		printf("������Ҫ���׵�����: ");
		scanf("%d", &m);
		printf("������Ҫ���׵�����:");
		scanf("%d", &n);
		if (m > row || m < 1 || n>col || n < 1) {
			printf("��������ȷ����������\n");
			goto X;
		}
		if (arr2[m][n] != '?') {
			printf("�˴����Ź��ף�����������\n");
			goto X;
		}
		if (arr[m][n] == '*') {
			printf("��ȵ����ף���������Ϸ��������\n");
			board(arr, ROW, COL);
			exit();
		}
		for (i = m - 1; i <= m + 1; i++) {
			for (j = n - 1; j <= n + 1; j++) {
				if (arr[i][j] == '*')
					cout++;
			}
		}
		arr2[m][n] = cout;
		board(arr2, ROW, COL);
	}
	if (win == ROW * COL - NUM) {
	printf("��Ӯ��\n");
	board(arr, ROW, COL);
}
}

void game() {
	srand((unsigned)time(NULL));
	char TrueArr[ROWS][COLS];
	char dspArr[ROWS][COLS];
	InitArr(TrueArr,ROWS,COLS,' ');
	InitArr(dspArr, ROWS, COLS,'?');
	board(dspArr, ROW, COL);
	SetMine(TrueArr, ROW, COL,NUM);
	play(TrueArr, dspArr, ROW, COL);
}
void exit1() {
	printf("�˳�");
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
	default: printf("�����������������:");
		goto begin; break;

	}
}