#include<stdio.h>
//2. ����1/1-1/2+1/3-1/4+1/5 ���� + 1/99 - 1/100 ��ֵ��

int main() {
       float sum=0.0;//������������Ҫ��float����
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
