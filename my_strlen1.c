#include<stdio.h>
#include<string.h>
//�Լ���дһ��strlen����
int my_strlen(char* str) {//�β�Ϊָ�룬ָ������ĵ�һ��Ԫ�ص��׵�ַ
	int count = 0;
	while (*str!='\0')//�����ü���һ��Ԫ��
	{
		count++;
		*str++;//�ж���һ��Ԫ��
	}
	return count;
}


int main() {
	char a[80] ;
	gets(a);
	printf("%d",my_strlen(a));//�ַ����鴫���βε��������һ��Ԫ�ص��׵�ַ


	return 0;
}