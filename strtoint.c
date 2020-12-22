//#define _CRT_SECURE_NO_DEPRECATE
//
//#include<stdio.h>
////change(char *s, int *p) {
////	char a[80];
////	int num=0;
////	gets(s);//获取字符串
////	strcpy(a, s);//字符串复制到字符数组，便于依次判断
////	for (int i = 0; i < strlen(a); i++) {
////		if (a[i] <= 57 && a[i] >= 48) {
////			p[num] = a[i] - 48;//数字字符添加到整型数组中
////			num++;
////		}
////	}
////	printf("\n%d", num);
////	
////}
////int main() {
////	char b[80];
////	int p[80];
////	change(b,p);
//////}将字符串中的数字提取到整型数组