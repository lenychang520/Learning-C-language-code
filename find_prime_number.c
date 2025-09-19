#define _CRT_SECURE_NO_WARNINGS//避免scanf等函数出现安全警告.这个宏定义应该放在顶上。

////[判断是否为素数]（逐一枚举法）
//#include <stdio.h>
//
//void prime_num(int x)//素数判断函数
//{
//	if (x <= 1)
//	{
//		printf("该数不是素数\n");
//		return;
//	}
//	if (x == 2)//边界考量
//	{
//		printf("该数是素数\n");
//		return;
//	}
//	int i = 2;//i是循环变量
//	for (i = 2; i < x; i++)
//	{
//		if ((x % i) == 0)//检验是否除得尽
//		{
//			printf("该数不是素数\n");
//			break;//跳出循环，以免多余计算以及i的进一步加值
//		}
//	}
//	if (i == x)//如果i全走完了2到x-1的循环都还不能除尽，证明其确为素数
//	{
//		printf("该数是素数\n");
//	}
//}
//
//int main()
//{
//	int num = 0;
//	scanf("%d", &num);
//	prime_num(num);
//	return 0;
//}

//[判断是否为素数](sqrt优化版)
#include <stdio.h>
#include <math.h>

void prime_num(int x)//素数判断函数
{
	if (x <= 1)
	{
		printf("该数不是素数\n");
		return;
	}
	if (x == 2)//边界考量
	{
		printf("该数是素数\n");
		return;
	}
	int i = 2;//i是循环变量
	for (i = 2; i <= sqrt(x); i++)
	{
		if ((x % i) == 0)//检验是否除得尽
		{
			printf("该数不是素数\n");
			return;//一旦发现，直接跳出prime_num函数
		}
	}
		printf("该数是素数\n");
}

int main()
{
	int num = 0;
	scanf("%d", &num);
	prime_num(num);
	return 0;
}