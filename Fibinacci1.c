#include<stdio.h>

int fbnc1(int n) {
	int a[10000];
	a[0] = a[1] = 1;
	for (int i =2; i < n; i++) {
		a[i] = a[i-1] + a[i-2];
	}
	return a[n-1];
}
int fbnc2(int n) {
	int a, b, c;
	a = 1;
	b = 1;
	c = 1;
	while (n>2)
	{
		c = a + b;
		a = b;
		b = c;
		n--;
	}
	return c;
}
int main() {
	int n;
	int ret;
	scanf_s("%d", &n);
	ret = fbnc1(n);
	printf("%d ", ret);
	ret = fbnc2(n);
	printf("%d", ret);

}