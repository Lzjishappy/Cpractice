#include<stdio.h>
//
2.求出0～999之间的所有“水仙花数”并输出。
“水仙花数”是指一个三位数，其各位数字的立方和确好等于该数本身，如；153＝1＋5＋3 ? ，则153是一个“水仙花数”。
int main() {
	int a, b, c;
	for (int i = 1; i <= 999; i++) {
		a = i / 100;
		b = (i %100)/10;
		c = (i % 100) % 10;
		if (i ==a*a*a + b*b*b + c*c*c) {
			printf("%d\n", i);
		}

		
	}


	return 0;
}