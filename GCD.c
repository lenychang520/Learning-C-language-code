#define _CRT_SECURE_NO_WARNINGS//����scanf�Ⱥ������ְ�ȫ����.����궨��Ӧ�÷��ڶ��ϡ�



////[����3���������˳�򰴴Ӵ�С����]
//#include <stdio.h>
//
//void Swap(int* px, int* py)//������ʵ�ε�ֵ���н���
//{
//	int box = 0;
//	box = *px;
//	*px = *py;
//	*py = box;
//}
//int main()
//{
//	int a = 0, b = 0, c = 0;
//	scanf("%d %d %d", &a, &b, &c);//˼·��ͨ��ֵ�Ľ���ʵ�����������abc��ֵ˳��ض��ǴӴ�С
//	if (a < b)
//	{
//		Swap(&a, &b);
//	}
//	if (a < c)
//	{
//		Swap(&a, &c);
//	}
//	if (b < c)
//	{
//		Swap(&b, &c);
//	}
//	printf("%d %d %d", a, b, c);
//	return 0;
//}



////[��ӡ1��100�ڵ�3�ı�������]
//#include <stdio.h>
//
//int main()
//{
//	int i = 0;//ѭ������
//	int origin = 3;
//	for (i = 1; i <= 33; i++)
//	{
//		printf("%d ", origin * i);
//	}
//	return 0;
//}



//[�����������������]
#include <stdio.h>

int find_common_factor(int x, int y)
{
	if (x < y)//ǿ�ƶ�xΪ�����ֵ
	{
		int num = 0;
		num = x;
		x = y;
		y = num;
	}
	int i = 0;//ѭ������
	int max = 1;
	for (i = 1; i <= y; i++)
	{
		if (0 == x % i && 0 == y % i)
		{
			max = i;
		}
	}
	return max;
}

int main()
{
	int n1 = 0, n2 = 0;
	scanf("%d %d", &n1, &n2);
	int ret = 0;
	ret = find_common_factor(n1, n2);
	printf("%d", ret);
}