#define _CRT_SECURE_NO_WARNINGS//����scanf�Ⱥ������ְ�ȫ����.����궨��Ӧ�÷��ڶ��ϡ�

////[�ж��ǲ�������]
//#include <stdio.h>
//
//void check_leap_year(int x)//�ж���������ǲ�������ĺ���
//{
//	if (0 == x % 4 && x % 100 != 0 && 0 == x % 400)
//	{
//		printf("����������");
//	}
//	else
//	{
//		printf("���겻������");
//	}
//}
//
//int main()
//{
//	int year = 0;
//	scanf("%d", &year);
//	check_leap_year(year);
//	return 0;
//}



////[��ӡ2000��2100��������]
//#include <stdio.h>
//
//void leap_year()//�������ĺ���
//{
//	int i = 2000;//ѭ������
//	for (i = 2000; i < 2100; i++)
//	{
//		if ((0 == i % 4 && i % 100 != 0) || (0 == i % 400))
//		{
//			printf("%d ", i);
//			i += 4;//��󻹼Ӹ�4��Ϊ�˱ܿ�������������������ظ���ӡ�����ȥ�����д��룬�������겻��2000����2004ʱ����2004�ᱻ��ӡ����
//			break;//�ҵ���ֱ������ѭ���������һ�����������²���Ҫ�������˷�
//		}
//	}
//
//	for (i = i; i < 2100; i += 4)//����ѭ����ÿ��+4������+4һ�㶼�����꣩����������ܱ�100��������Ҳ����
//	{
//		if (0 == i % 100)
//		{
//			continue;//����������ܱ�100�����ģ��������꣬����ͱ�������ӡ���������
//		}
//		printf("%d ", i);
//	}
//}
//
//int main()
//{
//	leap_year();
//	return 0;
//}



////[ʵ��һ��������������Ķ��ֲ���]
//#include <stdio.h>
//
//int binary_search(int x[], int y, int n)
//{
//	int left = 0;
//	int right = n - 1;
//	int middle = 0;//ÿ��ѭ��������±�
//	while (left <= right)
//	{
//		middle = left + (right - left) / 2;
//		if (y == x[middle])
//		{
//			return middle;
//		}
//		if (y > x[middle])
//		{
//			left = middle + 1;//�߽���£��������1���ܻ���ѭ��
//		}
//		if (y < x[middle])
//		{
//			right = middle - 1;//�߽���£��������1���ܻ���ѭ��
//		}
//	}
//	return -1;
//}
//
//int main()
//{
//	int i = 0;//�����±�
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };	
//	int n = 0;//�����Ԫ�ظ���
//	n = sizeof(arr) / sizeof(arr[0]);
//	int target = 0;
//	scanf("%d", &target);
//	i = binary_search(arr, target, n);
//	if (-1 == i)
//	{
//		printf("δ���ڸ��������ҵ�����");
//	}
//	else
//	{
//		printf("%d", i);
//	}
//	return 0;
//}