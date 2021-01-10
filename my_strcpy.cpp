#define _CRT_SECURE_NO_DEPRECATE
/*
* 功能：规范模拟实现strcpy函数
* 日期：2021/1/10
*
*/
#include<stdio.h>
#include<assert.h>
char* my_strcpy(char* dest,const char* src) {
	//const表示初始字符串不能改变
	//ret存储的是目的字符串的地址
	char* ret = dest;
	//断言，防止字符串为空导致野指针发生错误
	assert(*dest != NULL);
	assert(*src != NULL);
	//将初始字符串copy到目的字符串，当*src为'\0'时，下一个循环结束
	while (*dest++ = *src++)
	{
		;
	}
	return ret;
}
int main() {
	char arr1[20] = "********";
	char arr2[20] = "222";
	printf("%s", my_strcpy(arr1, arr2));

}
