#define _CRT_SECURE_NO_DEPRECATE
#include<stdio.h>
//int my_strlen1(char* p) {
//	
//	if (*p != '\0')
//		return 1 + my_strlen1(p + 1);
//	else
//		return 0;
//}
//int my_strlen1(char* p) {
//	int cout = 0;
//	while (*p!='\0')
//	{
//		cout++;
//		*p++;
//	}
//	return cout;
//}
int my_strlen1(char* str) {
	char* start=str;
	char* end=str;
	while(*end != '\0') {
		*end++;
	}
	return end - start;
}
int main() {
	char a[] = "bit";
	int num;
	num = my_strlen1(a);
	printf("%d", num);
	return 0;
}