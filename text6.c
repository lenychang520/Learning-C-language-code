#define _CRT_SECURE_NO_WARNINGS//����scanf�Ⱥ������ְ�ȫ����.����궨��Ӧ�÷��ڶ��ϡ�
#include <stdio.h>



////[��ӡ1��10]
//int main()
//{
//	int i = 1;
//	while (i <= 10)
//	{
//		if (i == 5)
//		{
//			continue;
//		}//continue����������ѭ���ĺ������裬Ȼ�������һ��ѭ�����������break��������ֹ����ѭ����
//		printf("%d\n", i);
//		i++;
//	}
//	return 0;
//}



////[getchar��putchar�ĳ���]
//int main()
//{
//	int ch = getchar();//�����������������ʽ�ŵ�ch��,getchar()���ص���һ�����͡�������Ϊ�������ļ�ĩβ���߳����ʱ��getchar()����EOF����EOF��һ�����ͳ���������ֵ��-1��
//	                   //�����char����char���治��-1����Ϊ-1��һ�����Ρ�
//	return 0;
//}



////[scanf�ķ���ֵ]
//int main()
//{
//	int a;
//	int b;
//	printf("�������������֣�");
//	int ret = scanf("%d%d", &a, &b);
//	printf("a = %d, b = %d\n", a, b);
//	printf("ret = %d\n", ret);
//	return 0;
//}



////[scanf�ķ���ֵ]
//int main()
//{
//	int a;
//	int b;
//	printf("�������������֣�");
//    scanf("%d%d", &a, &b);
//	int ret = getchar();
//	putchar (ret);//getchar��putchar���������ŵ�
//	return 0;
//}



////[getchar��scanf�Ĵ���]
//int main()
//{
//	char pasw[20] = {0};
//	printf("���������룺");
//	scanf("%s", pasw);
//	printf("��ȷ�����루Y/N����");
//	while ('\n' != getchar())
//	{
//		;
//	}//���ѭ����Ϊ�˽����뻺������scanfδ��ȡ������ȥ����ʹ�����getchar()������ȡ��scanfδ��ȡ�����ݡ�
//	//Ҳ�н����ѭ��Ū��getchar�������ģ�������һ���ܲ�Ĵ��룬��Ϊ������벻�ܽ��scanfδ�ܶ�ȡ��ȫ���ݵ������
//	int ensure = getchar();//�������ȷ�Ͻ�����浽ensure����
//	if ('Y' == ensure)
//	{
//		printf("������ȷ");
//	}
//	if ('N' == ensure)
//	{
//		printf("�������");
//	}
//	return 0;
//}



////[ֻ��ӡ����]
//int main()
//{
//	char ch = '\0';
//	while ((ch = getchar()) != EOF)//����Ҫ�ǵø�ch = getchar()�������ţ���=�����ȼ��ȸ�ֵʽ�ߣ���ʹ�ô����֡�
//	{
//		if (ch < '0' || ch > '9')//��0��9�����ַ������ͣ��������ͱ�ת������ASCIIֵ�ˣ��Ӷ�ʵ�ִ�С�Ƚϣ�����ʵ�ַ�Χ���ơ�
//		{
//			continue;
//		}
//		putchar(ch);
//	}
//	return 0;
//}



////[ת��ASCIIֵΪ��Ӧ�ַ�]
//int main()
//{
//	char num[] = { 73,32,99,97,110,32,100,111,32,105,116,33,'\0'};//ͨ����char+���飬��ʹ��ASCII����ת�����ַ���
//	printf("%s", num);
//	return 0;
//}



////[ת��ASCIIֵΪ��Ӧ�ַ�(whileѭ����)]
//int main()
//{
//	int num[] = { 73,32,99,97,110,32,100,111,32,105,116,33 };
//	int i = 0;
//	int n = sizeof(num) / sizeof(num[0]);//�ܵĴ�С���Ե����Ĵ�С�͵����������������е����ݵĸ���n��
//		while (i < n)
//		{ 
//			printf("%c", num[i]);
//			i++;
//		}//�õ������������±���ʵ�������ת����
//	return 0;
//}



////[�������ڵ����������](δ��)
//int main()
//{
//	char birthdate[] = { 0 };//������������������һ��һ���ָ���
//	scanf("%s", birthdate);
//	int i = 0, a = 0, b = 0, c = 0;//i��������±�
//	printf("%d", a)
//	while ()
//
//	return 0;
//}