#define _CRT_SECURE_NO_WARNINGS 1
//局部变量和全局变量
//全局变量{}外定义的，作用域为整个工程
//局部变量{}内定义的，作用域为{}内
//不建议全局和局部名字相同

int a = 100;
int main()
{
	int a = 55678;
	printf("%d\n", a);//此处打印出55678，说明局部和全局冲突时，局部优先。
	return 0;
}
