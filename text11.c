#define _CRT_SECURE_NO_WARNINGS//����scanf�Ⱥ������ְ�ȫ����.����궨��Ӧ�÷��ڶ��ϡ�



////[�������ĺ����ֵ]
//#include <stdio.h>
//
//int sum(int x)//��ͺ���
//{
//	int i = 0;//ѭ������
//	int input = 0;//�������
//	int sum = 0;//��������ܺ�
//	for (i = 0; i < x; i++)
//	{
//		scanf("%d", &input);
//		sum = sum + input;
//	}
//	return sum;
//}
//
//double avr(int y, int x)//��ƽ��������
//{
//	return ((double)y / x);
//}
//
//int main()
//{
//	int n = 0;//��������
//	scanf("%d", &n);
//	int total = 0;//�ܺ�
//	total = sum(n);
//	double av = 0.0f;//ƽ����
//	av = avr(total, n);
//	printf("%d %.5f", total, av);
//	return 0;
//}



////[��ߵķ���]
//#include <stdio.h>
//
//int sermax(int x)//ȡ���ֵ����
//{
//	int score[100] = { 0 };//���ڴ�������ķ���
//	int i = 0;//����arr���±�
//	int inmax = 0;//�������е������
//	inmax = score[0];
//	for (i = 0; i < x; i++)
//	{
//		scanf("%d", &score[i]);
//		if (inmax < score[i])
//		{
//			inmax = score[i];
//		}
//	}
//	return inmax;
//}
//int main()
//{
//	int n = 0;//�������ֵĸ���
//	scanf("%d", &n);
//	int max = 0;//���ֵ
//	max = sermax(n);
//	printf("%d", max);
//	return 0;
//}



////[��ָ��������ͬ�����ĸ���]
//#include <stdio.h>
//
//int equal(int x)//Ѱ����ͬ�������ĺ���
//{
//	if (x < 0 || x > 100)//��ֹ�Է������n�����Ϸ�Χ�������Ա�̣�
//	{
//		return 0;
//	}
//	int i = 0;//�����±�
//	int given = 0;//ָ��������
//	int arr[100] = { 0 };//����input������
//	int amount = 0;//��given��ͬ�����ĸ���
//	for (i = 0; i < x; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//		scanf("%d", &given);
//	for (i = 0; i < x; i++)
//	{
//		if (arr[i] == given)
//		{
//			amount++;
//		}
//	}
//	return amount;
//}
//
//int main()
//{
//	int n = 0;//�������ֵĸ���
//	scanf("%d", &n);
//	int ret = 0;
//	ret = equal(n);
//	printf("%d", ret);
//	return 0;
//}



////[����ժƻ��]
//#include <stdio.h>
//
//int catch_count()//����ժƻ������
//{
//	int original_height = 0;//���յĳ�ʼ�ܹ����ĸ߶�
//	int arr[10] = { 0 };//�洢ƻ���߶ȵ�����
//	int i = 0;//����arr���±�
//	int catch_sum = 0;//һ��ץ����ƻ����
//	for (i = 0; i < 10; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	scanf("%d", &original_height);
//	for (i = 0; i < 10; i++)
//	{
//		if ((original_height + 30) >= arr[i])
//		{
//			catch_sum++;
//		}
//	}
//	return catch_sum;
//}
//
//int main()
//{
//	printf("%d\n", catch_count());
//	return 0;
//}