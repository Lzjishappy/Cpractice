#define _CRT_SECURE_NO_DEPRECATE
#include<stdio.h>
void menu() {
	printf("-----------------------------------------\n");
	printf("-------------欢迎来到三子棋游戏----------\n");
	printf("----输入1.开始游戏----------输入2.退出游戏-----\n");
	printf("-----------------------------------------\n");
}
void board(char arr[3][3]) {
	printf("\n---------\n");
	for (int i=0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			printf("%c ", arr[i][j]);
			printf("|");
		}
		printf("\n---------\n");
			
	}
}
void play(int b[2], char arr[3][3],int cout) {
	int m, n;
	if (cout % 2 == 1)printf("轮到*棋下：\n");
	else printf("轮到o棋下：\n");
	X:
	printf("请输入下棋的行数: ");
	scanf("%d",&m);
	printf("请输入下棋的列数:");
	scanf("%d",&n);
	if (m > 3 || m < 1 || n>3 || n < 1) {
		printf("请输入正确的行列数：\n");
		goto X;
	}
	if (arr[m - 1][n - 1] != ' ') {
		printf("此处已有棋，请重新下\n");
		goto X;
	}
	
	b[0] = m;
	b[1] = n;
}
int judge(char arr[3][3]) {
	int k = 0, i,j,find=1;
	if (arr[0][2] == arr[1][1] && arr[0][2] == arr[2][0] && arr[0][2] != ' ')
		k = 1;
	for ( i = 0; i < 3; i++) {
		
		if((arr[i][0]==arr[i][1])&& (arr[i][0]==arr[i][2])&& (arr[i][0]!=' '))
			k = 1;	break;
		if (arr[0][i]==arr[1][i] && arr[0][i]==arr[2][i] && arr[0][i] != ' ')
			k = 1; break;
		if (arr[i][i] == arr[i + 1][i + 1] && arr[i][i] == arr[i + 2][i + 2] && arr[i][i] != ' ')
			k = 1; break;
	}
	for (i = 0; i < 3; i++) {
		for (j = 0; j < 3; j++)
		{
			if (arr[i][j] == ' ')
				find = 0;

		}
	}
	if (find ==1)
		k = 2;
	return k;
	
}
void game(){
	int cout;
	int jg = 0;
	int location[2];
	cout = 1;
    char chess[3][3] = { {"   "},{"   "},{"   "} };
	board(chess);
	do
	{//一次下棋，输出棋盘，然后cout下棋步数增加
        play(location,chess,cout);
		if (cout % 2 == 1) 
			chess[location[0] - 1][location[1] - 1] = '*';
		else
			chess[location[0] - 1][location[1] - 1] = 'o';
		board(chess);
		cout++;	
		jg = judge(chess);
	} while (jg==0);
	if (jg==1) {
		if (cout % 2 == 1)printf("恭喜o棋赢了：\n");
		else printf("恭喜*棋赢了：\n");	
	}
	else {
		printf("打平了！\n");
	}
}
void exit1() {
	printf("退出");
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
	default: printf("输入错误，请重新输入");
		goto begin; break;
		
	}
}