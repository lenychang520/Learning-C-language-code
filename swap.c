//��������ʱ������ʵ������ֵ�Ľ���

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