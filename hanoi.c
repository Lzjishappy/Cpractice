#define _CRT_SECURE_NO_DEPRECATE
#include <stdio.h>
#include <windows.h>
//��ŵ��
void Hanoi(int n, char a, char b, char c);
void Move(int n, char a, char b);
int count;
int main(){
	int n = 8;
	printf("��ŵ���Ĳ���:\n");
	scanf(" %d", &n);
	Hanoi(n, 'A', 'B', 'C');
	Sleep(20000);
	return 0;
}
void Hanoi(int n, char a, char b, char c){//��a->c,n���ƶ���������b����תվ��a�������ڵĵط���c�������Ŀ�ĵ�
	if (n == 1)
	{
		Move(n, a, c);
	}
	else
	{
		Hanoi(n - 1, a, c, b);//a->c����С����a->b,��תվ��c
		Move(n, a, c);//����a->c
		Hanoi(n - 1, b, a, c);//���С����b->c,��תվ��c
	}
}
void Move(int n, char a, char b){
	count++;
	printf("��%d���ƶ� Move %d: Move from %c to %c !\n", count, n, a, b);
}
//Ҫ��a�ƶ���c�������Ƚ�a���ϲ����ƶ���b���ٽ���a�ĵ����ƶ���c���ٽ�b�ϵ��ƶ���c
//����С�����ƶ���Ҳ����ͬ���뷨�������õ��˵ݹ�ķ������ѳ�ʼ�������a��Ŀ�ĵط���c��bΪ��תվ��