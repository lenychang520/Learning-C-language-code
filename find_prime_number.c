#define _CRT_SECURE_NO_WARNINGS//����scanf�Ⱥ������ְ�ȫ����.����궨��Ӧ�÷��ڶ��ϡ�

////[�ж��Ƿ�Ϊ����]����һö�ٷ���
//#include <stdio.h>
//
//void prime_num(int x)//�����жϺ���
//{
//	if (x <= 1)
//	{
//		printf("������������\n");
//		return;
//	}
//	if (x == 2)//�߽翼��
//	{
//		printf("����������\n");
//		return;
//	}
//	int i = 2;//i��ѭ������
//	for (i = 2; i < x; i++)
//	{
//		if ((x % i) == 0)//�����Ƿ���þ�
//		{
//			printf("������������\n");
//			break;//����ѭ���������������Լ�i�Ľ�һ����ֵ
//		}
//	}
//	if (i == x)//���iȫ������2��x-1��ѭ���������ܳ�����֤����ȷΪ����
//	{
//		printf("����������\n");
//	}
//}
//
//int main()
//{
//	int num = 0;
//	scanf("%d", &num);
//	prime_num(num);
//	return 0;
//}

//[�ж��Ƿ�Ϊ����](sqrt�Ż���)
#include <stdio.h>
#include <math.h>

void prime_num(int x)//�����жϺ���
{
	if (x <= 1)
	{
		printf("������������\n");
		return;
	}
	if (x == 2)//�߽翼��
	{
		printf("����������\n");
		return;
	}
	int i = 2;//i��ѭ������
	for (i = 2; i <= sqrt(x); i++)
	{
		if ((x % i) == 0)//�����Ƿ���þ�
		{
			printf("������������\n");
			return;//һ�����֣�ֱ������prime_num����
		}
	}
		printf("����������\n");
}

int main()
{
	int num = 0;
	scanf("%d", &num);
	prime_num(num);
	return 0;
}