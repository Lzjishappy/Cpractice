#include<stdio.h>
1. �����������α�����ֵ��������ֵ�����ݽ��н�����ʹ�õ���������
int main() {
	int a = 1, b = 2;
	int c;
	printf("a=%d,b=%d\n", a, b);
	c = a;
	a = b;
	b = c;
	printf("a=%d,b=%d", a, b);
	return 0;
}


//2. ����������ʱ���������������������ݣ������⣩  ��ѧ˼·
//int main() {
//	int a  ,b ;
//	scanf_s("%d", &a);
//	scanf_s("%d", &b);
//	printf("a=%d,b=%d\n", a, b);
//	a = a + b;
//	b = a - b;
//	a = a - b;
//	printf("a=%d,b=%d\n", a, b);
//}

