//#define _CRT_SECURE_NO_DEPRECATE
//#include<stdio.h>
//int main() {
//	int a[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int left, right,n,try1;
//	right = sizeof(a) / sizeof(a[0]);
//	left = 0;
//	scanf("%d",&n);
//	while(left<=right){
//		try1 = (left + right) / 2;
//		if (n > a[try1]) { left = try1+1; }
//		else {
//			if (n < a[try1]) { right = try1-1; }
//			else {
//				printf("�ҵ��ˣ��±���%d", try1); break;
//			}
//		}	
//	}
//	if (left > right)
//		printf("�Ҳ���");
//	return 0;
//}//���ַ�������