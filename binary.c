#define _CRT_SECURE_NO_DEPRECATE
#include<stdio.h>
int judge1(int x) {//�ж϶�������1�ĸ���������Ϊ������ʱ��������
	int cout = 0;
	while (x > 1)
	{
		if (x % 2 == 1)
			cout++;
		x /= 2;
	}
	if (x == 1) {
		cout++;
	}
	return cout;
}

int judge2(int x) {//x�����һλ�ж��ǲ���1���ǵĻ�cout++��Ȼ��x����һλ���ж���һλ���ܹ��ж�32��
	int cout = 0;
	for (int i = 0; i < 32; i++) {
		if (x & 1 == 1)
			cout++;
		x = x >> 1;
	}
	return cout;
}

void printwo(int x) {//���2���Ƶĺ���
	for (int i = 31; i >= 0; i--) {//��1����iλ���ж�x��iλ��0����1��Ȼ�������iλ���ж���һλ��ֱ��ȫ�����
		printf("%ld", (x & 1 << i) ? 1 : 0);
	}
}

int main() {
	int x;
	int ret;
	char a[100];
	scanf("%d", &x);
	printwo(x);
	_itoa(x, a, 2);//itoa��������x�Ķ����Ʒŵ�a�ַ���������ȥ
	printf("\n%s", a);
	ret = judge2(x);
	printf("\n%d", ret);
	return 0;
}