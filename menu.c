#define _CRT_SECURE_NO_DEPRECATE
#include<stdio.h>
#include<time.h>
#include"game.h"
void menu() {
	printf("-----------------------------------------\n");
	printf("-------------��ӭ������������Ϸ----------\n");
	printf("----����1.��ʼ��Ϸ----------����2.�˳���Ϸ-----\n");
	printf("-----------------------------------------\n");
}
void board(char arr[ROW][COL],int row,int col) {
	for (int i=0; i < row; i++) {
		for (int j = 0; j < col; j++) {
			printf("%c ", arr[i][j]);
			printf("|");
		}
		printf("\n");
		for(int j=0;j<col;j++)
		printf("---");
		printf("\n");
			
	}
}
void play(char arr[ROW][COL],int row,int col,int cout) {
	int m, n;
		printf("�ֵ��㣨*���£�\n");
X:
	printf("���������������: ");
	scanf("%d",&m);
	printf("���������������:");
	scanf("%d",&n);
	if (m > row || m < 1 || n>col || n < 1) {
		printf("��������ȷ����������\n");
		goto X;
	}
	if (arr[m - 1][n - 1] != ' ') {
		printf("�˴������壬��������\n");
		goto X;
	}
	cout++;
	arr[m - 1][n - 1] = '*';  
}
void computerplay(char arr[ROW][COL],int row,int col) {
	int m, n;
	srand((unsigned)time(NULL));
	X:
	m = rand() % row;
	n = rand() % col;
	if (arr[m][n]!= ' ') {
		goto X;
	}
	arr[m][n] = 'o';
}
int judge(char arr[ROW][COL], int row, int col) {
	int k = 0, i,j,find=1;
	if (arr[0][2] == arr[1][1] && arr[0][2] == arr[2][0] && arr[0][2] != ' ')
		k = 1;
	for ( i = 0; i < row; i++) {
		
		if((arr[i][0]==arr[i][1])&& (arr[i][0]==arr[i][2])&& (arr[i][0]!=' '))
			k = 1;	break;
		if (arr[0][i]==arr[1][i] && arr[0][i]==arr[2][i] && arr[0][i] != ' ')
			k = 1; break;
		if (arr[i][i] == arr[i + 1][i + 1] && arr[i][i] == arr[i + 2][i + 2] && arr[i][i] != ' ')
			k = 1; break;
	}
	for (i = 0; i < row; i++) {
		for (j = 0; j < col; j++)
		{
			if (arr[i][j] == ' ')
				find = 0;

		}
	}
	if (find ==1)
		k = 2;
	return k;
	
}
void isWin(int a,int cout) {
	if (a == 1) {
		if (cout % 2 == 0) {
			printf("����Ӯ�ˣ�\n");
			exit();
		}
		else {
			printf("��ϲ��Ӯ��Ӯ�ˣ�\n");
			exit();
		}
	}
	if (a == 2) {
		printf("����Ӯ�ˣ�\n");
		exit();
	}
	
		
}
void game(){
	int cout=1;
    char chess[ROW][COL] = { {"   "},{"   "},{"   "} };
	board(chess,ROW,COL);
	do
	{   play(chess,ROW,COL,cout);
		board(chess,ROW,COL);
		isWin(judge(chess,ROW,COL), cout);
		computerplay(chess, ROW, COL);
		board(chess, ROW, COL);
		isWin(judge(chess, ROW, COL), cout);

	} while (1);
	
	
}
void exit1() {
	printf("�˳�");
}
void test() {
	int input;
	menu();
	begin:
	scanf("%d",&input);
	switch (input)
	{
	case 1:game(); break;
	case 2:exit1(); break;
	default: printf("�����������������");
		goto begin; break;
		
	}
}