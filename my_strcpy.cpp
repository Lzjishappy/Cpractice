#define _CRT_SECURE_NO_DEPRECATE
/*
* ���ܣ��淶ģ��ʵ��strcpy����
* ���ڣ�2021/1/10
*
*/
#include<stdio.h>
#include<assert.h>
char* my_strcpy(char* dest,const char* src) {
	//const��ʾ��ʼ�ַ������ܸı�
	//ret�洢����Ŀ���ַ����ĵ�ַ
	char* ret = dest;
	//���ԣ���ֹ�ַ���Ϊ�յ���Ұָ�뷢������
	assert(*dest != NULL);
	assert(*src != NULL);
	//����ʼ�ַ���copy��Ŀ���ַ�������*srcΪ'\0'ʱ����һ��ѭ������
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
