#include<stdio.h>
//输入一个数字，将每位数都输出，例如 输入1234输出1 2 3 4
void print(int num) {
	if (num > 9)
		print(num / 10);
	printf("%d ", num % 10);


}
int main() {
	int n;
	scanf_s("%d", &n);
	print(n);
	return 0;


}