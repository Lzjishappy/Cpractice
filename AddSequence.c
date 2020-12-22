#include<stdio.h>
//求Sn = a + aa + aaa + aaaa + aaaaa的前5项之和，其中a是一个数字，
//例如：2 + 22 + 222 + 2222 + 22222

int main() {
	int a,b,sum=0;
	printf("输入一个数字a：");
	scanf_s("%d", &a);
	printf("输要求多少项之和：");
	scanf_s("%d", &b);
	int r[5];
	r[0] = a;
	for (int i = 0; i < b; i++) {
		printf("%d\n", r[i]);
		r[i + 1] = r[i] * 10 + a;
		sum = sum + r[i ];
	}
	printf("sum=%d", sum);

	return 0;
}