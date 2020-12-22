//#define _CRT_SECURE_NO_DEPRECATE
//#include<stdio.h>
//int main() {
//	char c[20];
//	printf("请输入语句：\n");
//	gets(c);
//	int n,i,j,m;
//	n = strlen(c);
//	char b[20];
//	for ( i = 0; i < n; i++) {
//		b[i] = '*';
//	}
//	for (i = 0, j = n-1;i<=j ; i++, j--) {
//		b[i] = c[i];
//		b[j] = c[j];
//		Sleep(1000);
//		system("cls");
//		for (m = 0; m <= i; m++) {
//			printf("\033[34m %c\033[0m", b[m]);
//		}
//		for (m= i+1; m<j; m++) {
//			printf("\033[33m %c\033[0m",b[m]);
//		}
//		for (m = j; m <n; m++) {
//			printf("\033[35m %c\033[0m", b[m]);
//		}
//		printf("\n");
//	}
//}//多个字符向之间移动