#define _CRT_SECURE_NO_DEPRECATE
/*
* ���ܣ�����ָ������
* ���ڣ�2021��01��11�� 23:54:43
*
*/
#include<stdio.h>
int add(int x, int y) {
	return x + y;
}
int sub(int x, int y) {
	return x - y;
}
int mul(int x, int y) {
	return x * y;
}
int div(int x, int y) {
	return x / y;
}
int main() {
	//����һ������funpotarr�������Ԫ���Ǻ���ָ������(int(*)(int,int)),��Ϊ����ָ������
	int(*funpotarr[])(int, int) = { add,sub,mul,div };
	int i = 0;
	for (i = 0; i < 4; i++) {
		printf("%d\n", funpotarr[i](3, 5));
	}
	return 0;
}
