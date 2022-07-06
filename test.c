#define _CRT_SECURE_NO_WARNINGS 1
//scanf函数
#include<stdio.h>
int main()
{
	int a = 0;
	int b = 0;
	int sum = a + b;
	printf("请输入两个值:");
	scanf("%d %d", &a, &b);
	sum = a + b;
	printf("%d\n", sum);
	return 0;

}