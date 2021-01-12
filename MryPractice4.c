//#define _CRT_SECURE_NO_DEPRECATE
///*
//* 功能：内存题目训练4
//* 日期：2021年01月11日 23:54:43
//*
//*/
//#include<stdio.h>
//int main() {
//	//输出结果？
//	unsigned int i;
//	for (i = 9; i >= 0; i--) {
//		printf("%u ", i);
//	}
//	return 0;
//}
////无符号不为负数，所以打印 9 8 7 6 5 4 3 2 1 0
////继续i--时，变成-1，-1输出无符号数是个很大的数字为2^32次方，然后依次递减