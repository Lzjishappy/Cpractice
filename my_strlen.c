#include<stdio.h>
#include<string.h>
//�Լ���дһ��strlen����
int my_strlen(char* str) {//�β�Ϊָ�룬ָ������ĵ�һ��Ԫ�ص��׵�ַ
	if (*str != '\0')
		return 1 + my_strlen(str + 1);
	else
		return 0;
}


int main() {
	char a[80];
	gets(a);
	printf("%d", my_strlen(a));//�ַ����鴫���βε��������һ��Ԫ�ص��׵�ַ


	return 0;
}