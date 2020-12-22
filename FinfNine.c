#include<stdio.h>
//3. 编写程序数一下 1到 100 的所有整数中出现多少个数字9。
int main() {
	int a, b;
	int cout=0;
	for (int i = 1; i <= 100; i++) {
		a = i / 10;//十位数，若是个位数则为0
		b = i % 10;//个位数
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
