#define _CRT_SECURE_NO_WARNINGS//����scanf�Ⱥ������ְ�ȫ����.����궨��Ӧ�÷��ڶ��ϡ�
#include <stdio.h>



////[if else if���]
//int main()
//{
//	int age = 0;
//	scanf("%d", &age);
//	if (age < 18)
//	{
//		printf("δ����\n");//��printf����ֻ��һ�д��룬��ôif��{}���ǿ�д�ɲ�д��
//	}
//	else if (age < 30)//else if���Բ��ÿ�&&���Ӷ����������ֱ��ʵ��һ�������ڵ��ж�
//	{
//		printf("������\n");
//	}
//	else if (age < 50)
//	{
//		printf("������\n");
//	}
//	else if (age < 100)
//	{
//		printf("������\n");
//	}
//	else
//	{
//		printf("�ٱ���ɽ\n");
//	}
//	return 0;
//}



////[����ż���ж�]
//int main()
//{
//	int num = 0;
//	scanf("%d", &num);
//	if (num % 2 == 1)//���ﲻ�÷�����д����Ϊnum % 2�Ǹ����ʽ�����д�ɸ�ֵ���ͻ�����������num == 2���ǻ��ǽ���д��2 == num����ֹ==д��=ʱ������
//	{
//		printf("���Ǹ�����\n");
//	}
//	else
//	{
//		printf("���Ǹ�ż��\n");
//	}
//	return 0;
//}



////[���1��100֮�������]
//int main()
//{
//	int a = 0;
//	while (a <= 100)
//	{
//		if (a % 2 == 1)
//		{
//			printf("%d\n", a);
//		}
//		a++;
//	}
//	return 0;
//}
//////����һ���Ƚϼ򻯵Ĵ��룬���Ǿ����ˣ����ܿ���if
////int main()
////{
////	int a = 1;
////	while (a <= 100)
////	{
////		printf("%d\n", a);
////		a += 2;//�����+=��ʾÿ��ѭ����+2
////	}
////	return 0;
////}



////[else�ľͽ�ԭ��1]
//int main()
//{
//	int a = 1;
//	int b = 2;
//	if (0 == a)
//		if (2 == b)
//			printf("hehe\n");
//	else
//		printf("haha\n");//��δ���������������hehe��Ϊʲô����Ϊ���ָ�ʽ���ҹ���������ģ�ʵ����else�ľͽ�ԭ��ʹ�����Ƕ�Ӧ��һ�����������if��
//	//Ҳ����˵����if��2 == b�����Ƕ�Ӧ�ġ�
//	return 0;
//}



////[else�ľͽ�ԭ��2]
//int main()
//{
//	int a = 1;
//	int b = 2;
//	if (0 == a)
//	{
//		if (2 == b)
//			printf("hehe\n");
//	}
//	else
//		printf("haha\n");//��δ���������������haha,��Ϊ��ʱif��2 == b����else�Ѿ��������Ÿ������ͽ�ԭ���ָ��if��0 == a���ˡ�
//	return 0;
//}



////[switch��default]
//int main()
//{
//	int day = 0;
//	scanf("%d", &day);
//	switch (day)//day���ǲ��������������β�����������������Ҳ�С������ַ�Ҳ���ԣ�Ϊʲô�أ���Ϊ�ַ����ӦASCII��ת�������Ρ�
//	{
//	case 1:
//		printf("����һ��Ҫ����\n");
//		break;//caseֻ�ǵ�����ڣ����û��break���ͻ�һ·ִ����ȥ���൱��break�ǳ���
//	case 2:
//		printf("���ڶ���Ҫ����\n");
//		break;
//	case 3:
//		printf("��������Ҫ����\n");
//		break;
//	case 4:
//		printf("�����ģ�Ҫ����\n");
//		break;
//	case 5:
//		printf("�����壬Ҫ����\n");
//		break;
//	case 6:
//		printf("����������Ϣ��\n");
//		break;
//	case 7:
//		printf("�����죬��Ϣ��\n");
//		break;
//	default://default�൱��if����е�else��������û�п�ִ�е�caseʱ���Ϳ���ִ�С�
//		printf("��ȷ���Լ������������1��7\n");
//	}
//	return 0;
//}



////[��ҵ,��ż�ж�]
//int main()
//{
//	int num = 0;
//	scanf("%d", &num);
//	if (num % 2 == 1)
//	{
//		printf("odd");
//	}
//	else
//	{
//		printf("even");
//	}
//	return 0;
//}



////[��żASCIIֵ�ж�]
//int main()
//{
//	char num = 0;
//	(int)scanf("%c", &num);//���ַ�����ǿת������������
//	if (num % 2 == 1)
//	{
//		printf("YES\n");
//	}
//	else 
//	{
//		printf("NO\n");
//	}
//	return 0;
//}



////[������С�Ƚ�]
//int main()
//{
//	int n1 = 0, n2 = 0;
//	scanf("%d %d", &n1, &n2);
//	if (n1 < n2)
//		printf("<");
//	else if (n1 == n2)
//		printf("=");
//	else
//		printf(">");
//	return 0;
//}