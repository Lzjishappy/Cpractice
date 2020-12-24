#include<stdio.h>
#include<string.h>
//自己编写一个strlen函数
int my_strlen(char* str) {//形参为指针，指向数组的第一个元素的首地址
	int count = 0;
	while (*str!='\0')//解引用即第一个元素
	{
		count++;
		*str++;//判断下一个元素
	}
	return count;
}


int main() {
	char a[80] ;
	gets(a);
	printf("%d",my_strlen(a));//字符数组传到形参的是数组第一个元素的首地址


	return 0;
}