#define _CRT_SECURE_NO_DEPRECATE
#include<stdio.h>
//不适用字符串函数，利用指针和递归将字符串逆序输出
int mystrlen(char * pc) {
	int cout = 0;
	while (*pc != '\0')
	{
		pc++;
		cout++;
	}
	return cout;
}
static int i = 1;
void reverse_string(char* string) {

	char* start = string;
	char* end = string + mystrlen(string) - i;
	char tmp;
	tmp = *start;
	*start = *end;
	*end = tmp;
	i++;
	if ((start + 1) <= (end - 1))
	{
		reverse_string(string + 1);
	}
}
int main() {
	char bit[] = "abcdefghijklmn123456";
	printf("%s", bit);
	reverse_string(bit);
	printf("\n%s", bit);


	return 0;
}