#define _CRT_SECURE_NO_DEPRECATE
/*
* ���ܣ����������ָ�����ָ���������Ӧ�����Ԫ��
* ���ڣ�2021��01��11�� 23:54:43
*
*/
#include<stdio.h>
int main() {
	int arr1[] = { 1,2,3 };
	int arr2[] = { 4,5,6 };
	int arr3[] = { 7,8,9 };
	int* potarr[] = { arr1,arr2,arr3 };//ָ�����飬���������3��Ԫ�أ�ÿ��Ԫ�ض���Ӧһ��������׵�ַ
	//����һ������ָ��ָ�����potarr����
	int* (*p)[3] = &potarr;
	int i, j;
	for (i = 0; i < 3; i++) {
		for (j = 0; j < 3; j++) {
			printf("%d ", *((*p)[i]+j));
			//(*p)[i]����potarr�����Ԫ��arr1,arr2,arr3
		}
		printf("\n");
	}


	return 0;
}
