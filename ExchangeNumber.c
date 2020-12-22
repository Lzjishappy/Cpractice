#include<stdio.h>
1. 给定两个整形变量的值，将两个值的内容进行交换。使用第三个变量
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


//2. 不允许创建临时变量，交换两个数的内容（附加题）  数学思路
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

