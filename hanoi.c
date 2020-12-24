#define _CRT_SECURE_NO_DEPRECATE
#include <stdio.h>
#include <windows.h>
//汉诺塔
void Hanoi(int n, char a, char b, char c);
void Move(int n, char a, char b);
int count;
int main(){
	int n = 8;
	printf("汉诺塔的层数:\n");
	scanf(" %d", &n);
	Hanoi(n, 'A', 'B', 'C');
	Sleep(20000);
	return 0;
}
void Hanoi(int n, char a, char b, char c){//，a->c,n是移动的塔数，b是中转站，a是塔所在的地方，c是最大盘目的地
	if (n == 1)
	{
		Move(n, a, c);
	}
	else
	{
		Hanoi(n - 1, a, c, b);//a->c首先小部分a->b,中转站是c
		Move(n, a, c);//底盘a->c
		Hanoi(n - 1, b, a, c);//最后小部分b->c,中转站是c
	}
}
void Move(int n, char a, char b){
	count++;
	printf("第%d次移动 Move %d: Move from %c to %c !\n", count, n, a, b);
}
//要想a移动到c，必须先将a的上部分移动到b，再将在a的地盘移动到c，再将b上的移动到c
//而将小部分移动，也是相同的想法，所以用到了递归的方法，把初始塔块放在a，目的地放在c，b为中转站。