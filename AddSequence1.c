#include<stdio.h>
//2. 计算1/1-1/2+1/3-1/4+1/5 …… + 1/99 - 1/100 的值。

int main() {
       float sum=0.0;//整数除以整，要用float定义
	for (int i = 1; i <= 100; i++) {
		if (i % 2 == 0) {
			sum =sum+( -1.0 / i);
		}
		else
		{
			sum =sum+ (1.0 / i);
		}
		
	  }
	printf("%f", sum);
	
	return 0;

}
