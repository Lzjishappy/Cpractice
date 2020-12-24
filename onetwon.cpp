#include<stdio.h>
//递归问题，n层台阶，每次爬1层或者2层，共多少中爬法？
int climb(int m){
	if (m == 1 || m == 2) {
		return m;
	}
	else {
		return climb(m - 1) + climb(m - 2);//逆序的思想
	}



}
int main() {
	int n,number;
	scanf_s("%d", &n);
	number=climb(n);
	printf("%d", number);

}