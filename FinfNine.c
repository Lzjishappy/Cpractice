#include<stdio.h>
//3. ��д������һ�� 1�� 100 �����������г��ֶ��ٸ�����9��
int main() {
	int a, b;
	int cout=0;
	for (int i = 1; i <= 100; i++) {
		a = i / 10;//ʮλ�������Ǹ�λ����Ϊ0
		b = i % 10;//��λ��
		if (a == 9) {
			cout++;
		}
		if (b == 9) {
			cout++;
		}
		
	}
	printf("%d", cout);


	return 0;
}
