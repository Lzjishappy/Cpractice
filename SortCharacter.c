//#define _CRT_SECURE_NO_DEPRECATE
//#include<stdio.h>
//#define N 20
//void main() {
//	char name[20][30],temp[30];
//	int i, j, n;
//	scanf_s("%d",& n);//n��ѧУ
//	getchar();//���߻������Ļس���
//	printf("Enter their names:\n");
//	for (i = 0; i < n; i++) {
//		gets(name[i]);
//	}
//	for (i = 0; i < n - 1; i++) {
//		for (j = 0; j < n - i - 1; j++) {
//			if (strcmp(name[j], name[j + 1]) > 0) {
//				strcpy(temp, name[j]);
//				strcpy(name[j], name[j + 1]);
//				strcpy(name[j + 1], temp);
//
//			}
//		}
//	}
//	printf("entry:");
//	for (i = 0; i < n; i++)
//		puts(name[i]);
//
//}//��ѧУ�����������õ���ð�����򷨣��Ƚ��ַ����Ĵ�С�õ���strcmp����