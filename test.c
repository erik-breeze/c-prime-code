#define _CRT_SECURE_NO_WARNINGS 1
//scanf����
#include<stdio.h>
int main()
{
	int a = 0;
	int b = 0;
	int sum = a + b;
	printf("����������ֵ:");
	scanf("%d %d", &a, &b);
	sum = a + b;
	printf("%d\n", sum);
	return 0;

}