#include<stdio.h>
#include<stdlib.h>
int main() {
	int num;
	again:
	printf("����1000��2000֮������һ�����");

	
		scanf_s ("%d", &num);
		if (num <+ 2000 &&num >= 1000) {
			if (num % 4 == 0) {
				printf("%d������", num);
			}
			else {
				printf("%d��������", num);
			}
			
			
		}
		else {
			
			goto again;//����againѭ��
		}
		



	return 0;
}