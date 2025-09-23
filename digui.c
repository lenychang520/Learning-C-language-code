#define _CRT_SECURE_NO_WARNINGS//避免scanf等函数出现安全警告.这个宏定义应该放在顶上。

//#include <stdio.h>
//
//void Add(int* x)//每调用一次该函数，对应的实参大小都会加一
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



////[输入一个整形（无符号），按照顺序打印它的每一位]
//#include <stdio.h>
//
//void print(unsigned int x)//输入一个整形（无符号），按照顺序打印它的每一位的函数。
//{
//	if (x > 9)//确保递归在一位数时不再继续递
//	{
//		print(x / 10);//使递归每次都接近于递归的限制条件
//	}
//	printf("%u ", (x % 10));//递归停止时输出余的位
//}
//int main()
//{
//	unsigned int num = 0;
//	scanf("%u", &num);
//	print(num);
//	return 0;
//}



////[写一个函数，不创建临时变量，计算出数组的长度]
//#include <stdio.h>
//
//int my_strlen(char* p)//数组传参的本质是传地址
//{
//	if (*p != '\0')
//	{
//		return (1 + my_strlen(p+1));//进行递归
//	}
//	else
//	{
//		return 0;//若为\0则不增加，因为\0不应计入数组长度
//	}
//}
//
//int main()
//{
//	char arr[] = "abc";//字符串数组不用大括号
//	int len = my_strlen(arr);
//	printf("%d", len);
//	return 0;
//}



////[n的阶乘复习](循环版)
//#include <stdio.h>
//
//int factoria(int x)
//{
//	int i = 0;//循环变量
//	int sum_factoria = 1;
//	for (i = 1; i <= x; i++)
//	{
//		sum_factoria = i * sum_factoria;//每次都充分利用前几个相乘的总和
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



////[n的阶乘复习](递归版)
//#include <stdio.h>
//
//int factorial(int x)
//{
//	if (x > 1)
//	{
//		return x * factorial(x - 1);//每次递归，都要用x来乘x-1
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
//		printf("负数没有阶乘\n");
//		return 0;
//	}
//	else if (0 == n)
//	{
//		printf("1\n");
//		return 0;
//	}//这段else if属于防御性编程，但其实可以不需要，因为factorial已经支持在输入为0时返回1了。
//	int ret = factorial(n);
//	printf("%d\n", ret);
//	return 0;
//}



////[青蛙跳台阶，青蛙一次可跳一格或两个，求跳到第n个台阶时有几种情况]（递归版）
//#include <stdio.h>
//
//int possibility(int x)
//{
//	if (1 == x)//考虑边界
//	{
//		return 1;
//	}
//	if (x >= 2)
//	{
//		return possibility(x - 1) + possibility(x - 2);//possibility的结果可能是来源于x-1层或x-2层，故而返回值得是这样
//	}
//	return 1;//防御性代码，防止输入非法值，这是一个好习惯。为什么返回1呢？因为这样当x为0时，其返回值是1，即已经在0层要去到0层，那就要什么都不做，而这也算1中方法
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	if (n <= 0)
//	{
//		printf("青蛙最低就在0层，请不要输入小于1的整数");
//		return 0;
//	}
//	int ret = 0;
//	ret = possibility(n);
//	printf("%d", ret);
//	return 0;
//}



////[青蛙跳台阶，青蛙一次可跳一格或两个，求跳到第n个台阶时有几种情况]（迭代版）
//#include <stdio.h>
// 
//int possibility(int x)
//{
//	int i = 0;//循环变量
//	//每次迭代可以分为3个a、b、c，传递下去的时候进行换值连锁，可以考虑反着来进行。要考虑反着来时的边界问题，当x为小于等于0的数的时候的防御
//	int a = 1;
//	int b = 2;
//	int c = 0;
//	if (0 == x || 1 == x)
//	{
//		return 1;
//	}
//	if (2 == x)
//	{
//		return 2;
//	}
//	for (i = 3; i <= x; i++)
//	{
//		c = a + b;// Jump(i) = Jump(i-1) + Jump(i-2)
//		a = b;
//		b = c;
//	}
//	return c;
//}
//
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	if (n <= 0)
//	{
//		printf("青蛙最低就在0层，请不要输入小于1的整数");
//		return 0;
//	}
//	int ret = 0;
//	ret = possibility(n);
//	printf("%d", ret);
//	return 0;
//}
