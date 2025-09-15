#define _CRT_SECURE_NO_WARNINGS//避免scanf等函数出现安全警告.这个宏定义应该放在顶上。



////[求整数的和与均值]
//#include <stdio.h>
//
//int sum(int x)//求和函数
//{
//	int i = 0;//循环变量
//	int input = 0;//输入变量
//	int sum = 0;//输入变量总和
//	for (i = 0; i < x; i++)
//	{
//		scanf("%d", &input);
//		sum = sum + input;
//	}
//	return sum;
//}
//
//double avr(int y, int x)//求平均数函数
//{
//	return ((double)y / x);
//}
//
//int main()
//{
//	int n = 0;//整数个数
//	scanf("%d", &n);
//	int total = 0;//总和
//	total = sum(n);
//	double av = 0.0f;//平均数
//	av = avr(total, n);
//	printf("%d %.5f", total, av);
//	return 0;
//}



////[最高的分数]
//#include <stdio.h>
//
//int sermax(int x)//取最大值函数
//{
//	int score[100] = { 0 };//用于储存输入的分数
//	int i = 0;//数组arr的下标
//	int inmax = 0;//输入数中的最大数
//	inmax = score[0];
//	for (i = 0; i < x; i++)
//	{
//		scanf("%d", &score[i]);
//		if (inmax < score[i])
//		{
//			inmax = score[i];
//		}
//	}
//	return inmax;
//}
//int main()
//{
//	int n = 0;//输入数字的个数
//	scanf("%d", &n);
//	int max = 0;//最大值
//	max = sermax(n);
//	printf("%d", max);
//	return 0;
//}



////[与指定数字相同的数的个数]
//#include <stdio.h>
//
//int equal(int x)//寻找相同数个数的函数
//{
//	if (x < 0 || x > 100)//防止对方输入的n不符合范围（防御性编程）
//	{
//		return 0;
//	}
//	int i = 0;//数组下标
//	int given = 0;//指定的数字
//	int arr[100] = { 0 };//储存input的数组
//	int amount = 0;//与given相同的数的个数
//	for (i = 0; i < x; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//		scanf("%d", &given);
//	for (i = 0; i < x; i++)
//	{
//		if (arr[i] == given)
//		{
//			amount++;
//		}
//	}
//	return amount;
//}
//
//int main()
//{
//	int n = 0;//输入数字的个数
//	scanf("%d", &n);
//	int ret = 0;
//	ret = equal(n);
//	printf("%d", ret);
//	return 0;
//}



////[陶陶摘苹果]
//#include <stdio.h>
//
//int catch_count()//陶陶摘苹果函数
//{
//	int original_height = 0;//陶陶的初始能够到的高度
//	int arr[10] = { 0 };//存储苹果高度的数组
//	int i = 0;//数组arr的下标
//	int catch_sum = 0;//一共抓到的苹果数
//	for (i = 0; i < 10; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	scanf("%d", &original_height);
//	for (i = 0; i < 10; i++)
//	{
//		if ((original_height + 30) >= arr[i])
//		{
//			catch_sum++;
//		}
//	}
//	return catch_sum;
//}
//
//int main()
//{
//	printf("%d\n", catch_count());
//	return 0;
//}