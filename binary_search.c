#define _CRT_SECURE_NO_WARNINGS//避免scanf等函数出现安全警告.这个宏定义应该放在顶上。

////[判断是不是闰年]
//#include <stdio.h>
//
//void check_leap_year(int x)//判断输入年份是不是闰年的函数
//{
//	if (0 == x % 4 && x % 100 != 0 && 0 == x % 400)
//	{
//		printf("该年是闰年");
//	}
//	else
//	{
//		printf("该年不是闰年");
//	}
//}
//
//int main()
//{
//	int year = 0;
//	scanf("%d", &year);
//	check_leap_year(year);
//	return 0;
//}



////[打印2000到2100年间的闰年]
//#include <stdio.h>
//
//void leap_year()//输出闰年的函数
//{
//	int i = 2000;//循环变量
//	for (i = 2000; i < 2100; i++)
//	{
//		if ((0 == i % 4 && i % 100 != 0) || (0 == i % 400))
//		{
//			printf("%d ", i);
//			i += 4;//最后还加个4是为了避开非世纪年带来的首年重复打印。如果去掉这行代码，而且首年不是2000而是2004时，则2004会被打印两次
//			break;//找到后直接跳出循环，以免进一步遍历，导致不必要的性能浪费
//		}
//	}
//
//	for (i = i; i < 2100; i += 4)//跳出循环后，每年+4（闰年+4一般都是闰年），如果遇到能被100整除的则也跳过
//	{
//		if (0 == i % 100)
//		{
//			continue;//如果遇到了能被100整除的，则不是闰年，该年就被跳过打印这个步骤了
//		}
//		printf("%d ", i);
//	}
//}
//
//int main()
//{
//	leap_year();
//	return 0;
//}



////[实现一个整形有序数组的二分查找]
//#include <stdio.h>
//
//int binary_search(int x[], int y, int n)
//{
//	int left = 0;
//	int right = n - 1;
//	int middle = 0;//每次循环检验的下标
//	while (left <= right)
//	{
//		middle = left + (right - left) / 2;
//		if (y == x[middle])
//		{
//			return middle;
//		}
//		if (y > x[middle])
//		{
//			left = middle + 1;//边界更新，如果不加1可能会死循环
//		}
//		if (y < x[middle])
//		{
//			right = middle - 1;//边界更新，如果不减1可能会死循环
//		}
//	}
//	return -1;
//}
//
//int main()
//{
//	int i = 0;//数组下标
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };	
//	int n = 0;//数组的元素个数
//	n = sizeof(arr) / sizeof(arr[0]);
//	int target = 0;
//	scanf("%d", &target);
//	i = binary_search(arr, target, n);
//	if (-1 == i)
//	{
//		printf("未能在该数组中找到该数");
//	}
//	else
//	{
//		printf("%d", i);
//	}
//	return 0;
//}