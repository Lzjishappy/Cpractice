#include<stdio.h>
//�ݹ����⣬n��̨�ף�ÿ����1�����2�㣬��������������
int climb(int m){
	if (m == 1 || m == 2) {
		return m;
	}
	else {
		return climb(m - 1) + climb(m - 2);//�����˼��
	}



}
int main() {
	int n,number;
	scanf_s("%d", &n);
	number=climb(n);
	printf("%d", number);

}