//#define _CRT_SECURE_NO_DEPRECATE
//
//#include<stdio.h>
////int main() {
////	int a[10][7];
////	float s[10];
////	int sum = 0;
////	float t;
////	int imin = 0, imax = 0;
////	for (int i = 0; i < 10; i++) {
////		for (int j = 0; j < 7; j++) {
////			a[i][j] = rand() % 50 / 10+5;
////			printf("%d ", a[i][j]);
////		}
////		printf("\n");
////	}
////	for (int i = 0; i < 10; i++) {
////		sum = 0;
////		for (int j = 0; j < 7; j++) {
////			if (a[i][imin] > a[i][j]) {
////				imin = j;
////			}
////			if (a[i][imax] <a[i][j ]) {
////				imax = j;
////			}
////			sum = sum + a[i][j];
////	
////
////		}
////		s[i] = (sum - a[i][imin] - a[i][imax]) / 5.0;
////		printf("%.1f  ",s[i]);
////	}
////	for (int i = 0; i < 9; i++) {
////		for (int j = 0; j < 9 - i; j++) {
////			if (s[j] < s[j + 1]) {
////				t = s[j];
////				s[j] = s[j + 1];
////				s[j + 1] = t;
////			}
////		}
////	}
////	printf("\n");
////		for (int j = 0; j < 10; j++) {
////			printf("%.1f  ", s[j]);
////		}
////
////	return 0;
////}//随机生成10位歌手的成绩（5-10）之间，去掉一个最高分和一个最低分，把最后的成绩保留一位小数按从高到低输出