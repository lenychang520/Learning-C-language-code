#define _CRT_SECURE_NO_WARNINGS//����scanf�Ⱥ������ְ�ȫ����.����궨��Ӧ�÷��ڶ��ϡ�


////[��������]
//#include <stdio.h>
//
//void exchange(int* px, int* py)
//{
//	int z = *px;//��a��ֵ��z
//	*px = *py;//��b��ֵ��a
//	*py = z;//��z(a)��ֵ��b
//}
//
//int main()
//{
//	int a = 0, b = 0;//����ʵ��
//	scanf("%d %d", &a, &b);
//	printf("%d %d\n", a, b);//δ����ǰ
//	exchange(&a, &b);
//	printf("%d %d\n", a, b);//������
//	return 0;
//}


////[strcpy����]
//#include <stdio.h>
//#include <string.h>//����strcpy
//int main()
//{
//	char arr1[20] = { 0 };
//	char arr2[] = { "I Love China" };
//	strcpy(arr1, arr2);//��arr2������copy��arr1����
//	printf("%s\n%s\n", arr1, arr2);
//	return 0;
//}



#include <stdio.h>

void exchange(int x, int y)
{
	int z = 0;//�ձ���
	z = x;
	x = y;
	y = z;
}

int main()
{
	int a = 0, b = 0;//Ҫ�����ı���
	scanf("%d %d", &a, &b);
	printf("%d %d\n", a, b);//��¼ԭʼ��a��bֵ
	exchange(a,b);
	printf("%d %d\n", a, b);//���齻���ɹ����
	return 0;
}