#define _CRT_SECURE_NO_DEPRECATE

#include<stdio.h>
int main() {
	int row;
	char max;
	char c[80];
	printf("������������\n");
	scanf("%d", &row);
	getchar();//������
	for (int i = 0; i < row; i++) {
		gets(c);//��ȡ�ַ���
		printf("%d ", strlen(c));//���һ�е��ַ�����
		max = c[0];
		for (int j = 0; j<=(strlen(c)-1 ); j++) {//
			if (max < c[j + 1]) {
				max = c[j + 1];
			}
		}//�ҳ����ֵ
		printf("%c \n", max);//������ֵ���һ���	
	}
}//����ַ������ַ�������ASCIIֵ�����ַ�