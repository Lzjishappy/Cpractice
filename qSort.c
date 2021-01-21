/*
* ���ܣ���������
*  qsort���Զ��������ͽ�������
   void qsort(void*, size_t, size_t, int ( * )(const void * ,  const void *  ))
   ��һ������Ϊ�����������׵�ַ
   �ڶ�������Ϊ���鳤��
   ����������Ϊ����Ԫ����ռ�ֽ�
   ���ĸ�����Ϊ�����ú�����ָ�룬���������Ǻ�����ָ�룬��ֱ��д�����������ú�������ȷ������ķ�ʽ
* ���ڣ�2021-01-21 18:48:14
*
*/
#define _CRT_SECURE_NO_DEPRECATE
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
//1.���ͱȽϺ���
int cmp_int(const void* e1, const void* e2) {
	return *(int*)e1 - *(int*)e2;
}
//2.�����ͱȽϺ���
int cmp_double(const void* e1, const void* e2) {
	return *(double*)e1 > *(double*)e2 ? 1 : -1;//�������������ת��Ϊ���ͻᶪ��С�������Դ��ڷ���1��С�ڷ���-1
}
//3.�ַ��ͱȽϺ���
int cmp_char(const void* e1, const void* e2) {
	return *(char*)e1 - *(char*)e2;
}
//4.1�ַ����ȽϺ������Ƚ��ֵ�˳��
int cmp_string1(const void* e1, const void* e2) {
	return *(char*)e1 - *(char*)e2;
}
//4.2�ַ����ȽϺ������Ƚ��ַ�������
int cmp_string2(const void* e1, const void* e2) {
	return strlen((char*)e1)-strlen((char*)e2);
}
//5.�ṹ��ȽϺ���
struct  Stu
{
	char name[20];
	int age;
};
  //5.1������Ƚ�
int cmp_struct1(const void* e1, const void* e2) {
	return ((struct Stu*)e1)->age - ((struct Stu*)e2)->age;
}
  //5.2�������Ƚ�
int cmp_struct2(const void* e1, const void* e2) {
	return strcmp(((struct Stu*)e1)->name, ((struct Stu*)e2)->name);
}

int main() {
	unsigned int i;
	//1.����
	int arr_int[] = { 4,5,1,6,7,3,4,7,6,1 };
	qsort(arr_int, sizeof(arr_int) / sizeof(arr_int[0]), sizeof(int), cmp_int);
	for (i = 0; i < sizeof(arr_int) / sizeof(arr_int[0]); i++) {
		printf("%d ", arr_int[i]);
	}
	printf("\n");
	//2.������
	double arr_double[] = { 5.1647,3.16478,9.64,1.7964 };
	qsort(arr_double, sizeof(arr_double) / sizeof(arr_double[0]), sizeof(double), cmp_double);
	for (i = 0; i < sizeof(arr_double) / sizeof(arr_double[0]); i++) {
		printf("%lf    ", arr_double[i]);
	}
	printf("\n");
	//3.�ַ���
	char arr_char[] = "kcanudz";
	qsort(arr_char, strlen(arr_char), sizeof(char), cmp_char);
	for (i = 0; i <strlen(arr_char); i++) {
		printf("%c ", arr_char[i]);
	}
	printf("\n");
	//4.�ַ�����
	char arr_string[][10] = { "cmd","ksdhiu","asdbisa","aaojdsie","zihie" };
	qsort(arr_string, sizeof(arr_string) / sizeof(arr_string[0]), sizeof(arr_string[0]), cmp_string1);
	for (i = 0; i < sizeof(arr_string) / sizeof(arr_string[0]); i++) {
		printf("%s\n", arr_string[i]);
	}
	printf("\n");
	qsort(arr_string, sizeof(arr_string) / sizeof(arr_string[0]), sizeof(arr_string[0]), cmp_string2);
	for (i = 0; i < sizeof(arr_string) / sizeof(arr_string[0]); i++) {
		printf("%s\n", arr_string[i]);
	}
	printf("\n");
	//5.�ṹ��
	struct Stu stu[5] = { {"Alice",20},{"Bob",35},{"Kim",15},{"Gree",19},{"Aex",40} };
	qsort(stu, sizeof(stu) / sizeof(stu[0]), sizeof(stu[0]), cmp_struct1);
	for (i = 0; i < 5; i++) {
		printf("%s:%d\n", stu[i].name, stu[i].age);
	}
	printf("\n");
	qsort(stu, sizeof(stu) / sizeof(stu[0]), sizeof(stu[0]), cmp_struct2);
	for (i = 0; i < 5; i++) {
		printf("%s:%d\n", stu[i].name, stu[i].age);
	}
	return 0;
}

