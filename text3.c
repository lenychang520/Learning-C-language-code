#define _CRT_SECURE_NO_WARNINGS//����scanf�Ⱥ������ְ�ȫ����.����궨��Ӧ�÷��ڶ��ϡ�
#include <stdio.h>



////[���Բ��ַ]
//int main()
//{
//	int a = 10;
//	&a;//��F10���ڵ��ԡ����ڡ�����������ҵ�&a�ĵ�ַ
//	//a�ڴ˴��ĵ�ַ��0x0000000000000004��Ϊʲô��0x�أ�����ʮ�����Ƶı�־��
//	return 0;
//}



////[��ַ��ӡ]
//int main()
//{
//	int a = 10;
//	printf("%p\n", &a);//��ӡ��ַ��%p������һ����&a������a����Ϊ&�Ÿ��ߵ�ַ��
//	return 0;
//}



////[ָ������Ĵ�С]
//int main()
//{
//	printf("%zu\n", sizeof(char*));//%zu��ר�Ŵ�ӡsizeof�Ľ���ġ�
//	printf("%zu\n", sizeof(short*));
//	printf("%zu\n", sizeof(int*));
//	printf("%zu\n", sizeof(long*));//��64λϵͳ�ϣ�ָ���������8�ֽڣ�32λϵͳ�ϣ�ָ���������4�ֽڡ�
//	return 0;
//}



////[ָ��ĳ���ʹ��]
//int main()
//{
//	int a = 0;
//	int* p = &a;//*������������ָ�룬��ָ��������a�����ĵ�ַ
//	*p = 20;//�����*�൱����̽�����ŵ�ַ����׷�١��������ָ��p��ָ�Ķ����Ƕ��٣�����Ҳ���ǽ�a��Ϊ��20��
//	printf("%d\n", a);
//	return 0;
//}



////[����������]
//int main()
//{
//    int a = 0, b = 0;
//    scanf("%d %d", &a, &b);
//    int num1 = ((a) / (b)), num2 = a % b;
//    printf("%d %d", num1, num2);
//    return 0;
//}



////[��������ĸ�����ֵ]
//int main()
//{
//	double a = 0, b = 0;
//	scanf("%lf %lf", &a, &b);
//	printf("%.9f",((a)/(b)));
//	return 0;
//}



////[�ֶκ�������]
//// y={  x      x<1
////   | 2x - 1   1 <= x < 10
////   { 3x - 11  x >= 10
//int function(int x)
//{
//	int y = 0;
//	if (x < 1)
//	{
//		y = x;
//	}
//	else if (x < 10)//����Ҳ������if (x >= 1 && x < 10)��&&���������жϣ���ʾ�����ҡ���ֻ���������ߵ�������Ϊ��ʱ���������ʽ��Ϊ�档������
//		//д��if (1 <= x < 10)������C�����в�����ʵ�֡�x��1��10֮�䡱���жϡ�
//		//��C�����1 <= x < 10 ʵ���ϻ����ж� 1 <= x�������0��1��Ȼ��������������10�Ƚϣ��߼��Ǵ���ġ�
//	{
//		y = 2 * x - 1;
//	}
//	else
//	{
//		y = 3 * x - 11;
//	}
//	return y;
//}
//int main()
//{
//	int x = 0;
//	scanf("%d", &x);
//	int consequence = function(x);
//	printf("%d", consequence);
//	return 0;
//}



////[�������ֵ]
//int main()
//{
//	float a = 0;
//	scanf("%f", &a);
//	if (a < 0)
//	{
//		a = -a;//���ﲻ�ܵ���д��-a����Ϊ-aֻ��һ�����ʽ����û�аѽ����ֵ��a����Ϊʲô����a++���أ���Ϊa++��������������ǶԱ���������в�����
//	}
//	else
//	{
//		a = a;
//	}
//	printf("%.2f", a);
//	return 0;
//}



////[�ṹ��]
//struct Lee
//{
//	float height;
//	char sex[10];
//	float  weight;
//	int tele;
//};//����ķֺž��Բ�������������ʡ�ԣ�
//
//int main()
//{
//	struct Lee s = {178,"male",80.1,14596238451};
//	printf("%f\n %s\n %f\n %d\n",s.height,s.sex,s.weight,s.tele);//��ȡ�ṹ���ʱ����뿿����.������
//	return 0;
//}



////[�ṹ���ָ��]
//struct Lee
//{
//	float height;
//	char sex[10];
//	float  weight;
//	int tele;
//};
//void print(struct Lee* ps)
//{
//	printf("%f\n %s\n %f\n %d\n", (*ps).height, (*ps).sex, (*ps).weight, (*ps).weight);//�����(*ps).�����滻��ps->��
//}
//int main()
//{
//	struct Lee s = { 178,"male",80.1,14596238451 };
//	print(&s);
//	return 0;
//}