#include<stdio.h>
//5.�������������Լ����
int main() {
	int a, b,c,d;
	scanf_s("%d%d", &a, &b);
	printf("a=%d b=%d", a, b);
	if (a < b) {
		c = a;
	}
	else {
		c = b;
	}
	for (int i = 1; i <= c; i++) {
		if (a%i == 0 && b%i == 0) {
			d = i;
		}
	}
	printf("%d", d);



	return 0;
}