#define _CRT_SECURE_NO_WARNINGS//����scanf�Ⱥ������ְ�ȫ����.����궨��Ӧ�÷��ڶ��ϡ�



////[�������]
//#include <stdio.h>
//int main()
//{
//	int i = 0;//ѭ������
//	float m = 0.0f;//�����money
//	float sum = 0;//sum��н���ܺ�
//	for (i = 0; i < 12; i++)
//	{
//		scanf("%f",&m);
//		sum = sum + m;//ʹ������sum����ÿ�ε���һ���ۺϼ��µ���
//	}
//	printf("$%.2f", sum / 12);
//	return 0;
//}



////[���ű��㷨ѵ��VIP-����ƽ��ֵ]
//#include <stdio.h>
//int avr(int n)
//{
//	int i = 0;//ѭ������
//	int sum = 0;//��������֮��
//	int date[100] = { 0 };//��ʼ�����飬ע�����Щ�ռ�
//	int* p = date;//��date�����ָ��p
//	for (i = 0; i < n; i++)//����ѭ��
//	{
//		scanf("%d", &date[i]);//�������[i]������ÿ�����붼ֻ��浽0λ����
//	}
//	for (i = 0; i < n; i++)//ָ���������ѭ��
//	{
//		sum += *p++;
//	}
//	return (sum / n);
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int ret = avr(n);
//	printf("%d", ret);
//	return 0;
//}



////[�ַ��ƶ�Ч��]
//#include <stdio.h>
//#include <string.h>//����strlen
//#include <Windows.h>//����sleep
//#include <stdlib.h>//����system
//int main()
//{
//	char text[16] = "I Love China!!!";//�����ַ�
//	char fade[16] = "***************";//�ڵ��ַ���.��Ҫ��д��15��\0Ҳռһ���ַ���λ��
//	int left = 0;//��߽�
//	int right = strlen(text) - 1;//�ұ߽�.���ʹ��sizeof�����Ǽ�������Ϊ����ַ�����\0Ҳ����һλ�ַ�
//	for (left = 0, right = strlen(text) - 1; left <= right; left++, right--)
//	{
//		fade[left] = text[left];
//		fade[right] = text[right];
//		printf("%s\n", fade);
//		Sleep(1000);//ʹÿ��ѭ������ӻ�1000��
//		system("cls");//ÿ��ѭ�������գ�
//	}
//	return 0;
//}



//[ģ���¼]
#include <stdio.h>
#include <string.h>
int main()
{
	int n = 1;//ѭ������
	printf("���������룺");
	for (n = 1; n <= 3; n++)
	{
		char password[50] = { '0' };//���ǿ��Լ���������abcdef
		scanf("%s", password);//ֻ���ַ��������ǲ���д&��
		if (strcmp(password, "abcdef") == 0)//���ַ�����ȫ���ʱ�������0
		{
			printf("��¼�ɹ�\n");
			break;
		}
		else if (password != "abcdef" && n != 3)//��ֹ�����δ���ʱ���
		{
			printf("������󣬻�ʣ%d���ᣬ�������������룺\n", (3-n));
		}
		else if (password != "abcdef" && 3 == n)
		{
			printf("���Ѿ�����������룬�˻�������\n");
		}
	}
	return 0;
}