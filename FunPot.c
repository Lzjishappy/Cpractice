#define _CRT_SECURE_NO_DEPRECATE
/*
* ���ܣ�����ָ��
* ���ڣ�2021��01��11�� 23:54:43
*
*/
#include<stdio.h>
int add(int x, int y) {
	return x + y;
}
void print(char* p) {
	printf("%s", p);
}
int main() {
	//��ͨ��ʽ��������
	printf("%d\n", add(3, 5));
	print("kkk\n");
	//����ָ�붨�������
	//���巽ʽ���������� ��*ָ����������β����ͣ�=�������� 
	//���÷�ʽ����*ָ���������ʵ�Σ�
	int(*p)(int, int) = add;
	printf("%d\n", (*p)(3, 5));
	void(*p1)(char*) = print;
	(*p1)("kkk");
	return 0;
}
