#define _CRT_SECURE_NO_WARNINGS//����scanf�Ⱥ������ְ�ȫ����.����궨��Ӧ�÷��ڶ��ϡ�


//[��������]
#include <stdio.h>

void exchange(int* px, int* py)
{
	int z = *px;//��a��ֵ��z
	*px = *py;//��b��ֵ��a
	*py = z;//��z(a)��ֵ��b
}

int main()
{
	int a = 0, b = 0;//����ʵ��
	scanf("%d %d", &a, &b);
	printf("%d %d\n", a, b);//δ����ǰ
	exchange(&a, &b);
	printf("%d %d\n", a, b);//������
	return 0;
}