#define _CRT_SECURE_NO_DEPRECATE
/*
* ���ܣ�дһ��С�����ж��Ǵ�˻���С��
* ���ڣ�2021/1/11
*
*/
//����ֽ���ģʽ����ָ���ݵĵ�λ�������ڴ�ĸߵ�ַ�������ݵĸ�λ�������ڴ�ĵ͵�ַ
//С���ֽ���ģʽ����ָ���ݵĵ�λ�������ڴ�ĵ͵�ַ�������ݵĸ�λ�������ڴ�ĸߵ�ַ
#include<stdio.h>
int check_sys1() {
	int i = 1;
	return *((char*)&i);
}
int check_sys2() {
	union MyUnion
	{
		int i ;
		char c;
	}un;
	un.i = 1;
	return un.c;
}
int main() {
	//����ռ4���ֽڣ�ֻ���жϵ�ַ�е�һ���ֽ���01����00
	//charָ��ǡ��Ϊ1���ֽڣ�ȡcharָ��ָ��i,�õ�4���ֽڵĵ�һ���ֽ�
	//��Ϊ01����ΪС�ˣ�Ϊ00��Ϊ���
	int ret;
	ret=check_sys2();
	if (ret == 1) {
		printf("С��\n");
	}
	else
	{
		printf("���\n");
	}
	return 0;
}