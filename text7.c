#define _CRT_SECURE_NO_WARNINGS//����scanf�Ⱥ������ְ�ȫ����.����궨��Ӧ�÷��ڶ��ϡ�




////[�������ڵ����������]
//int main()
//{
//	int year = 0, month = 0, date = 0;
//	scanf("%4d%2d%2d", &year, &month, &date);//�����ڷ���������λ��scanfҲ�ǿ�������ʽ��������ȡ�ļ�λ
//	printf("year=%d\n", year);
//	printf("month=%02d\n", month);//��02�Ǹ�֪��λ����������λ����0��ǰ����һλ
//	printf("date=%02d\n", date);
//	return 0;
//}



////[ѧ��������Ϣ�������]
//int main()
//{
//	float sub1 = 0.0f, sub2 = 0.0f, sub3 = 0.0f;//��ʼ����Ҫע�����ּӺ�׺��������ʼ����ֵΪ�������ͣ�������������ת����
//	//����Ҫ�Ӻ�׺�ļ�סint��short��0��double��0.0������unsigned����Ҫ��U��long��Ҫ��L��longlong��Ҫ��LL
//	int id = 0;
//	scanf("%d;%f,%f,%f", &id, &sub1, &sub2, &sub3);//�����;һ������Ӣ�ĸ�ʽ��;��Ϊ��������ܻ�Ĭ��ʹ�������ַ�����ע���л�
//	printf("The each subject score of No. %d, id is %.2f, %.2f, %.2f.", id, sub1, sub2, sub3);
//	return 0;
//}



////[printf�ķ���ֵ]
//#include <stdio.h>
//int main()
//{
//	int pr = 0;
//	pr = printf("Hello world!");
//	printf("\n%d", pr);//��ǰ���һ��\n�����У�����������pr���\n,��Ϊ����\n�Ὣpr�ķ���ֵ��12���13
//	return 0;
//}



////[ת���ַ�]
//#include <stdio.h>
//int main()
//{
//	printf("printf(\"Hello World!\\n\")");//ת�塰����ֹ���壬ת��\n������
//	return 0;
//}



////[�������]
//#include <stdio.h>
//int main()
//{
//	int n1 = 0, n2 = 0, n3 = 0, n4 = 0;
//	int i = 1;//����ch�±�
//	scanf("%d %d %d %d", &n1, &n2, &n3, &n4);
//	int ch[] = { n1, n2, n3, n4 };
//	int max = ch[0];//�ȼ���ch[0]��������
//	while (i < 4)//while�����еıȽ��ǳ��õ�������ݲ���ѭ���ķ�ʽ
//	{
//		if (ch[i] > max)
//		{
//			max = ch[i];//���и����ߣ����滻������ͱ���ԭmax
//		}
//		i++;//ʹ�Ƚ����������ȥ
//	}
//	printf("%d\n", max);
//	return 0;
//}



////[����������]
//#include <stdio.h>
//float V(float r)
//{
//	float pai = 3.1415926f;
//	float v = (4.0f / 3.0f) * pai * r * r * r;//�������߲��ܶ�������������C�����в�û������������������ܽ�r * r * rд��r^3.
//	return v;
//}
//int main()
//{
//	float r = 0.0f;
//	scanf("%f", &r);
//	float result = V(r);
//	printf("%f", result);
//	return 0;
//}



//[BMIָ��]
#include <stdio.h>
float bmi(float height, float weight)
{
	float point = weight / (height * height * 0.0001f);//bmi���㹫ʽ
	return point;
}
int main()
{
	float height = 0.0f, weight = 0.0f;
	scanf("%f %f", &weight, &height);
	float bmir = bmi(height, weight);
	printf("%f", bmir);
	return 0;
}