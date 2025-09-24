#define _CRT_SECURE_NO_WARNINGS//避免scanf等函数出现安全警告.这个宏定义应该放在顶上。



////[输入3个数，输出顺序按从大到小排列]
//#include <stdio.h>
//
//void Swap(int* px, int* py)//将两个实参的值进行交换
//{
//	int box = 0;
//	box = *px;
//	*px = *py;
//	*py = box;
//}
//int main()
//{
//	int a = 0, b = 0, c = 0;
//	scanf("%d %d %d", &a, &b, &c);//思路是通过值的交换实现最终输出的abc的值顺序必定是从大到小
//	if (a < b)
//	{
//		Swap(&a, &b);
//	}
//	if (a < c)
//	{
//		Swap(&a, &c);
//	}
//	if (b < c)
//	{
//		Swap(&b, &c);
//	}
//	printf("%d %d %d", a, b, c);
//	return 0;
//}



////[打印1到100内的3的倍数的数]
//#include <stdio.h>
//
//int main()
//{
//	int i = 0;//循环变量
//	int origin = 3;
//	for (i = 1; i <= 33; i++)
//	{
//		printf("%d ", origin * i);
//	}
//	return 0;
//}



//[求两个数的最大公因数]
#include <stdio.h>

int find_common_factor(int x, int y)
{
	if (x < y)//强制定x为更大的值
	{
		int num = 0;
		num = x;
		x = y;
		y = num;
	}
	int i = 0;//循环变量
	int max = 1;
	for (i = 1; i <= y; i++)
	{
		if (0 == x % i && 0 == y % i)
		{
			max = i;
		}
	}
	return max;
}

int main()
{
	int n1 = 0, n2 = 0;
	scanf("%d %d", &n1, &n2);
	int ret = 0;
	ret = find_common_factor(n1, n2);
	printf("%d", ret);
}