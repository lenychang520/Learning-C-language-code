#define _CRT_SECURE_NO_WARNINGS//����scanf�Ⱥ������ְ�ȫ����.����궨��Ӧ�÷��ڶ��ϡ�

//#include <stdio.h>
//
//void Add(int* x)//ÿ����һ�θú�������Ӧ��ʵ�δ�С�����һ
//{
//	(*x) ++;
//}
//
//int main()
//{
//	int num = 0;
//	Add(&num);
//	printf("%d", num);
//	return 0;
//}



////[����һ�����Σ��޷��ţ�������˳���ӡ����ÿһλ]
//#include <stdio.h>
//
//void print(unsigned int x)//����һ�����Σ��޷��ţ�������˳���ӡ����ÿһλ�ĺ�����
//{
//	if (x > 9)//ȷ���ݹ���һλ��ʱ���ټ�����
//	{
//		print(x / 10);//ʹ�ݹ�ÿ�ζ��ӽ��ڵݹ����������
//	}
//	printf("%u ", (x % 10));//�ݹ�ֹͣʱ������λ
//}
//int main()
//{
//	unsigned int num = 0;
//	scanf("%u", &num);
//	print(num);
//	return 0;
//}



////[дһ����������������ʱ���������������ĳ���]
//#include <stdio.h>
//
//int my_strlen(char* p)//���鴫�εı����Ǵ���ַ
//{
//	if (*p != '\0')
//	{
//		return (1 + my_strlen(p+1));//���еݹ�
//	}
//	else
//	{
//		return 0;//��Ϊ\0�����ӣ���Ϊ\0��Ӧ�������鳤��
//	}
//}
//
//int main()
//{
//	char arr[] = "abc";//�ַ������鲻�ô�����
//	int len = my_strlen(arr);
//	printf("%d", len);
//	return 0;
//}



////[n�Ľ׳˸�ϰ](ѭ����)
//#include <stdio.h>
//
//int factoria(int x)
//{
//	int i = 0;//ѭ������
//	int sum_factoria = 1;
//	for (i = 1; i <= x; i++)
//	{
//		sum_factoria = i * sum_factoria;//ÿ�ζ��������ǰ������˵��ܺ�
//	}
//	return sum_factoria;
//}
//
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int ret = factoria(n);
//	printf("%d", ret);
//	return 0;
//}



////[n�Ľ׳˸�ϰ](�ݹ��)
//#include <stdio.h>
//
//int factorial(int x)
//{
//	if (x > 1)
//	{
//		return x * factorial(x - 1);//ÿ�εݹ飬��Ҫ��x����x-1
//	}
//	else
//	{
//		return 1;
//	}
//}
//
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	if (n < 0)
//	{
//		printf("����û�н׳�\n");
//		return 0;
//	}
//	else if (0 == n)
//	{
//		printf("1\n");
//		return 0;
//	}//���else if���ڷ����Ա�̣�����ʵ���Բ���Ҫ����Ϊfactorial�Ѿ�֧��������Ϊ0ʱ����1�ˡ�
//	int ret = factorial(n);
//	printf("%d\n", ret);
//	return 0;
//}
