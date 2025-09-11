#define _CRT_SECURE_NO_WARNINGS//避免scanf等函数出现安全警告.这个宏定义应该放在顶上。



////[打印1到10]
//#include <stdio.h>
//int main()
//{
//	for (int i = 1; i <= 10; i++)//三个表达式分别是初始化、条件、步进，注意用分号隔开，而不是常见的逗号隔开
//		//最好把i的初始化放到前面去，否则不支持C99语法和C++语法的编译器会编译不好
//	{
//		printf("%d\n", i);
//	}
//	return 0;
//}



////[打印9次a]
//#include <stdio.h>
//int main()
//{
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < 3; i++)
//	{
//		for (j = 0; j < 3; j++)//这层嵌套使得每次都i循环都会有3次j循环，但如果把i=0和j=0省略了，那就只能打印出3个a
//		{
//			printf("a");
//		}
//	}
//	return 0;
//}



////[细节代码]  
//#include <stdio.h>
//int main()
//{
//	int i = 0, k = 0;
//	for (i = 0, k = 0; k = 0; i++, k++)//循环零次，因为条件表达式写成了赋值式，而0为假，因此不会循环！因此一定要记住0写k左边
//	{
//		printf("a");
//	}
//	return 0;
//}



////[初试do while语句]
//#include <stdio.h>
//int main()
//{
//	int i = 1;
//	do
//	{
//		printf("%d ", i);
//		i++;//起码执行1次，具体后续循环与否，看while的小括号
//	} while (i <= 10);
//	return 0;
//}



////[计算n的阶乘]
//#include <stdio.h>
//int main()
//{
//	int n = 0, s = 1, ret = 1;//s是阶乘的第一位1，ret是要输出的结果
//	scanf("%d", &n);
//	for (s = 1; s <= n; s++)//这里s会逐步增加，那我们就不断乘这个逐步增加就是阶乘了，那部分这些东西都乘1
//	{
//		ret = ret * s;
//	}
//	printf("%d", ret);
//	return 0;
//}



////[计算1到10的阶乘之和](暴力实现法)
//#include <stdio.h>
//int jiecheng(int n)//阶乘函数
//{
//	int ret = 1, i = 1;
//	for (i = 1; i <= n; i++)
//	{
//		ret = ret * i;
//	}
//	return ret;
//}
//int main()
//{
//	int j1 = jiecheng(1);
//	int j2 = jiecheng(2);
//	int j3 = jiecheng(3);
//	int j4 = jiecheng(4);
//	int j5 = jiecheng(5);
//	int j6 = jiecheng(6);
//	int j7 = jiecheng(7);
//	int j8 = jiecheng(8);
//	int j9 = jiecheng(9);
//	int j10 = jiecheng(10);
//	int sum = j1 + j2 + j3 + j4 + j5 + j6 + j7 + j8 + j9 + j10;
//	printf("%d", sum);
//	return 0;
//}



////[计算1到10的阶乘之和]（嵌套循环法）
//#include <stdio.h>
//int main()
//{
//	int n = 10;//最终循环到n
//	int i = 1;//阶乘最先的数字1
//	int ret = 1;//每次阶乘的结果
//	int sum = 0;//每次阶乘的结果之和
//	for (i = 1; i <= 10; i++)
//	{
//		int ret = 1;//每次进行内循环时都将ret重新配置成1
//		int j = 1;//嵌套循环中的“i”
//		for (j = 1; j <= i; j++)//内循环是计算i！，所以条件应该≤i
//		{
//			ret = ret * j;
//		}
//		sum += ret;
//	}
//	printf("%d", sum);
//	return 0;
//}



////[计算1到10的阶乘之和](递推法)
//#include <stdio.h>
//int main()
//{
//	int i = 0;
//	int ret = 1;
//	int sum = 0;
//	for (i = 1; i <= 10; i++)
//	{
//		ret = ret * i;//不重置ret，使得每次计算阶乘时可以直接利用之前计算的结果再乘个最大的数，即为新的数的一个阶乘
//		sum = sum + ret;//将每次都sum和新阶乘加起来就是总的阶乘
//	}
//	printf("%d", sum);
//	return 0;
//}




////[有序数组中找数字](无序搜寻法)
//#include <stdio.h>
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9 };
//	int k = 7;//要找寻的数字
//	int i = 0;//数组下标
//	int sz = sizeof(arr) / sizeof(arr[0]);//数组元素数量
//	for (i = 0; i < sz; i++)
//	{
//		if (arr[i] == k)
//		{
//			printf("找到了，该数的下标是：%d\n", i);
//			break;//找到后把循环中断，如果不中断，它会一直找下去，直到找完
//		}
//	}
//	if (i == sz)
//	{
//		printf("没有找到\n");
//	}
//	return 0;
//}



//[有序数组中找数字](二分查找法)
#include <stdio.h>
int main()
{
	int arr[] = { 1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20 };
	int k = 13;//需要找的数字
	int sz = sizeof(arr) / sizeof(arr[0]);//数组元素量
	int left = 0;//初始化左边界
	int right = sz - 1;//初始化右边界
	while (left <= right)
	{
		int i = (left + right) / 2;//数组下标取中间数
		if (arr[i] > k)
		{
			right = i - 1;
		}
		else if (arr[i] < k)
		{
			left = i + 1;
		}
		else if (arr[i] == k)
		{
			printf("找到了，该数的下标为：%d", i);
			break;
		}
	}
	if (left > right)
	{
		printf("数组中无有此数");
	}
	return 0;
}