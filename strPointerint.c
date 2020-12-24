#define _CRT_SECURE_NO_DEPRECATE
#include<string.h>
#include<stdio.h>
int change(char* a, int* p) {
	int num=0;
	while (*a!='\0')
	{
		if (*a <= '9' && *a >= '0') {
            *p = *a-'0';
			p++;
			num++;
		}
		a++;
	}
	
	printf("%d\n", num);
	return num;
	
}
int main() {
	char a[80];
	gets(a);
	int p[80];
	int x;
	x=change(a,p);
	for (int i = 0; i < x; i++) {
		printf("%d ", p[i]);
	}
}//将字符串中的数字提取到整型数组 