#include<stdio.h>
#include<stdlib.h>
int main() {
	int num;
	again:
	printf("输入1000到2000之间任意一个年份");

	
		scanf_s ("%d", &num);
		if (num <+ 2000 &&num >= 1000) {
			if (num % 4 == 0) {
				printf("%d是闰年", num);
			}
			else {
				printf("%d不是闰年", num);
			}
			
			
		}
		else {
			
			goto again;//跳到again循环
		}
		



	return 0;
}