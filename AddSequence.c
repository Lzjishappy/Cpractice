#include<stdio.h>
//��Sn = a + aa + aaa + aaaa + aaaaa��ǰ5��֮�ͣ�����a��һ�����֣�
//���磺2 + 22 + 222 + 2222 + 22222

int main() {
	int a,b,sum=0;
	printf("����һ������a��");
	scanf_s("%d", &a);
	printf("��Ҫ�������֮�ͣ�");
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