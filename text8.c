#define _CRT_SECURE_NO_WARNINGS//����scanf�Ⱥ������ְ�ȫ����.����궨��Ӧ�÷��ڶ��ϡ�



////[��ӡ1��10]
//#include <stdio.h>
//int main()
//{
//	for (int i = 1; i <= 10; i++)//�������ʽ�ֱ��ǳ�ʼ����������������ע���÷ֺŸ����������ǳ����Ķ��Ÿ���
//		//��ð�i�ĳ�ʼ���ŵ�ǰ��ȥ������֧��C99�﷨��C++�﷨�ı���������벻��
//	{
//		printf("%d\n", i);
//	}
//	return 0;
//}



////[��ӡ9��a]
//#include <stdio.h>
//int main()
//{
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < 3; i++)
//	{
//		for (j = 0; j < 3; j++)//���Ƕ��ʹ��ÿ�ζ�iѭ��������3��jѭ�����������i=0��j=0ʡ���ˣ��Ǿ�ֻ�ܴ�ӡ��3��a
//		{
//			printf("a");
//		}
//	}
//	return 0;
//}



////[ϸ�ڴ���]  
//#include <stdio.h>
//int main()
//{
//	int i = 0, k = 0;
//	for (i = 0, k = 0; k = 0; i++, k++)//ѭ����Σ���Ϊ�������ʽд���˸�ֵʽ����0Ϊ�٣���˲���ѭ�������һ��Ҫ��ס0дk���
//	{
//		printf("a");
//	}
//	return 0;
//}



////[����do while���]
//#include <stdio.h>
//int main()
//{
//	int i = 1;
//	do
//	{
//		printf("%d ", i);
//		i++;//����ִ��1�Σ��������ѭ����񣬿�while��С����
//	} while (i <= 10);
//	return 0;
//}



////[����n�Ľ׳�]
//#include <stdio.h>
//int main()
//{
//	int n = 0, s = 1, ret = 1;//s�ǽ׳˵ĵ�һλ1��ret��Ҫ����Ľ��
//	scanf("%d", &n);
//	for (s = 1; s <= n; s++)//����s�������ӣ������ǾͲ��ϳ���������Ӿ��ǽ׳��ˣ��ǲ�����Щ��������1
//	{
//		ret = ret * s;
//	}
//	printf("%d", ret);
//	return 0;
//}



////[����1��10�Ľ׳�֮��](����ʵ�ַ�)
//#include <stdio.h>
//int jiecheng(int n)//�׳˺���
//{
//	int ret = 1, i = 1;
//	for (i = 1; i <= n; i++)
//	{
//		ret = ret * i;
//	}
//	return ret;
//}
//int main()
//{
//	int j1 = jiecheng(1);
//	int j2 = jiecheng(2);
//	int j3 = jiecheng(3);
//	int j4 = jiecheng(4);
//	int j5 = jiecheng(5);
//	int j6 = jiecheng(6);
//	int j7 = jiecheng(7);
//	int j8 = jiecheng(8);
//	int j9 = jiecheng(9);
//	int j10 = jiecheng(10);
//	int sum = j1 + j2 + j3 + j4 + j5 + j6 + j7 + j8 + j9 + j10;
//	printf("%d", sum);
//	return 0;
//}



////[����1��10�Ľ׳�֮��]��Ƕ��ѭ������
//#include <stdio.h>
//int main()
//{
//	int n = 10;//����ѭ����n
//	int i = 1;//�׳����ȵ�����1
//	int ret = 1;//ÿ�ν׳˵Ľ��
//	int sum = 0;//ÿ�ν׳˵Ľ��֮��
//	for (i = 1; i <= 10; i++)
//	{
//		int ret = 1;//ÿ�ν�����ѭ��ʱ����ret�������ó�1
//		int j = 1;//Ƕ��ѭ���еġ�i��
//		for (j = 1; j <= i; j++)//��ѭ���Ǽ���i������������Ӧ�á�i
//		{
//			ret = ret * j;
//		}
//		sum += ret;
//	}
//	printf("%d", sum);
//	return 0;
//}



////[����1��10�Ľ׳�֮��](���Ʒ�)
//#include <stdio.h>
//int main()
//{
//	int i = 0;
//	int ret = 1;
//	int sum = 0;
//	for (i = 1; i <= 10; i++)
//	{
//		ret = ret * i;//������ret��ʹ��ÿ�μ���׳�ʱ����ֱ������֮ǰ����Ľ���ٳ˸�����������Ϊ�µ�����һ���׳�
//		sum = sum + ret;//��ÿ�ζ�sum���½׳˼����������ܵĽ׳�
//	}
//	printf("%d", sum);
//	return 0;
//}




////[����������������](������Ѱ��)
//#include <stdio.h>
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9 };
//	int k = 7;//Ҫ��Ѱ������
//	int i = 0;//�����±�
//	int sz = sizeof(arr) / sizeof(arr[0]);//����Ԫ������
//	for (i = 0; i < sz; i++)
//	{
//		if (arr[i] == k)
//		{
//			printf("�ҵ��ˣ��������±��ǣ�%d\n", i);
//			break;//�ҵ����ѭ���жϣ�������жϣ�����һֱ����ȥ��ֱ������
//		}
//	}
//	if (i == sz)
//	{
//		printf("û���ҵ�\n");
//	}
//	return 0;
//}



//[����������������](���ֲ��ҷ�)
#include <stdio.h>
int main()
{
	int arr[] = { 1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20 };
	int k = 13;//��Ҫ�ҵ�����
	int sz = sizeof(arr) / sizeof(arr[0]);//����Ԫ����
	int left = 0;//��ʼ����߽�
	int right = sz - 1;//��ʼ���ұ߽�
	while (left <= right)
	{
		int i = (left + right) / 2;//�����±�ȡ�м���
		if (arr[i] > k)
		{
			right = i - 1;
		}
		else if (arr[i] < k)
		{
			left = i + 1;
		}
		else if (arr[i] == k)
		{
			printf("�ҵ��ˣ��������±�Ϊ��%d", i);
			break;
		}
	}
	if (left > right)
	{
		printf("���������д���");
	}
	return 0;
}