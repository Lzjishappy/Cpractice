#define _CRT_SECURE_NO_DEPRECATE
#include<stdio.h>
void printwo(int x) {//���2���Ƶĺ���
	for (int i = 31; i >= 0; i--) {//��1����iλ���ж�x��iλ��0����1��Ȼ�������iλ���ж���һλ��ֱ��ȫ�����
		printf("%ld", (x & 1 << i) ? 1 : 0);
	}
	printf("\n");
}
void printodd(int x) {//��ӡ������bitλ
	for (int i = 30; i >= 0; i = i - 2) {
		printf(" ");
		printf("%ld", (x & 1 << i) ? 1 : 0);
	}
	printf("\n");
}
void printeven(int x) {//��ӡż������λ
	for (int i = 31; i >= 1; i = i - 2) {
		printf("%ld", (x & 1 << i) ? 1 : 0);
		printf(" ");
	}
	printf("\n");
}
int main() {//��ӡ2���Ƶ�����λ��ż��λ
	int x;
	scanf("%d", &x);
	printwo(x);
	printodd(x);
	printeven(x);
	return 0;
}