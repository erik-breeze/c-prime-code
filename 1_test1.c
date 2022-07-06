#define _CRT_SECURE_NO_WARNINGS 1
//数据类型
//char 字符数据类型1
//short 短整型2
//int 整形4
//long 长整形4
//long long   更长的整形
//float 单精度浮点数4
//double 双精度浮点数8
#include<stdio.h>

//求数据类型的大小
int main()
{
	printf("%d\n", sizeof(char));
	printf("%d\n", sizeof(short));
	printf("%d\n", sizeof(int));
	printf("%d\n", sizeof(long));
	printf("%d\n", sizeof(long long));
	printf("%d\n", sizeof(float));
	printf("%d\n", sizeof(double));
	return 0;
}
