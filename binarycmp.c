#define _CRT_SECURE_NO_DEPRECATE
#include<stdio.h>
void printwo(int x) {//���2���Ƶĺ���
	for (int i = 31; i >= 0; i--) {//��1����iλ���ж�x��iλ��0����1��Ȼ�������iλ���ж���һλ��ֱ��ȫ�����
		printf("%ld", (x & 1 << i) ? 1 : 0);
	}
	printf("\n");
}
int cmp(int a1, int a2) {
	int cout = 0;
	for (int i = 0; i < 32; i++) {
		if ((a1 & 1) != (a2 & 1))
			cout++;
		a1 = a1 >> 1;
		a2 = a2 >> 1;
	}

	return cout;
}
int main() {//����2�������Ƚ��ж��ٸ�bitλ��ͬ
	int a1, a2;
	scanf("%d%d", &a1, &a2);
	printwo(a1);
	printwo(a2);	
	printf(" %d", cmp(a1, a2));
	return 0;
}