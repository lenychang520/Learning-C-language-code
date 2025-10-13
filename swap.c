//不创建临时变量，实现两个值的交换

#include <stdio.h>

int main()
{
	int a = 5, b = 2;
	a = a ^ b;
	b = a ^ b;
	a = a ^ b;
	printf("%d\n", a);
	printf("%d\n", b);
	return 0;
}