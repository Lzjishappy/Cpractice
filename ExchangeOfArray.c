#include<stdio.h>
//1. ������A�е����ݺ�����B�е����ݽ��н�����������һ���� �ҵ���������
int main() {
	int a[3] = { 1,2,3 };
	int b[3] = { 4,5,6 };
	int c[3] = {0,0,0};
	for (int i = 0; i < 3; i++) {
		printf("%d", a[i]);
	}
	printf("\n");
	for (int i = 0; i < 3; i++) {
		printf("%d", b[i]);
	}
	printf("\n");
	for (int i = 0; i < 3; i++) {
		c[i] = a[i];
		a[i] = b[i];
		b[i] = c[i];
	}

	for (int i = 0; i < 3; i++) {
		printf("%d", a[i]);
	}
	printf("\n");
	for (int i = 0; i < 3; i++) {
		printf("%d", b[i]);
	}
	return 0;
}