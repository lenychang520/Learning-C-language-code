////1.[第一个HelloWorld程序]
//#include <stdio.h>
//
//int main()
//{
//	printf("**************************\n");
//	printf("Hello World!\n");
//	printf("**************************\n");
//	return 0;
//}



////2.[给某为同学数学成绩评级]
//#include <stdio.h>
//
//char rank(int n)
//{
//	if (n >= 90 && n <= 100)
//	{
//		return 'A';
//	}
//	else if (n >= 80)
//	{
//		return 'B';
//	}
//	else if (n >= 70)
//	{
//		return 'C';
//	}
//	else if (n >= 60)
//	{
//		return 'D';
//	}
//	else
//	{
//		return 'E';
//	}
//}
//
//int main()
//{
//	int score = 0;
//	scanf("%d", &score);//严谨来说这里应该检验输入的分数是否在0到100之间，但一般习题会默认输入合法，这里就以此为准。
//	char ret = rank(score);
//	printf("%c", ret);
//	return 0;
//}



////3.[打印1~100间所有三的倍数，用空格隔开]
//#include <stdio.h>
//
//int main()
//{
//	int i = 0;//循环变量
//	for (i = 1; i < 33; i++)
//	{
//		printf("%d ", i * 3);
//	}
//	return 0;
//}



////4.[输出九九乘法口诀表]
//#include <stdio.h>
//
//int main()
//{
//	int i = 0;
//	for (i = 1; i < 10; i++)
//	{
//		int j = 0;
//		for (j = 1; j <= i; j++)
//		{
//			printf("%d x %d = %d  ", j, i, i * j);//最后留空格防止黏一块了
//		}
//		printf("\n");//换行防止黏一块
//	}
//	return 0;
//}



////5.[阶乘自然数 n 的阶乘写作n!，n != 1×2×3×...×n。请你计算自然数n的值]
//#include <stdio.h>
//
//int factorial(int n)//同样默认n不为负数，此处不做安全性处理
//{
//	if (0 == n)//反写防止讲==漏写成=而编译器不报错
//	{
//		return 1;
//	}
//	return n * factorial(n - 1);
//}
//
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int ret = factorial(n);
//	printf("%d\n", ret);
//	return 0;
//}



////6.[斐波那契数列，是指一个数列由 0 和 1 开始，后面的每一项数字都是前面两项数字的和]
//#include <stdio.h>
//
//int seq(int n)
//{
//	if (0 == n)
//	{
//		return 0;
//	}
//	else if (1 == n)
//	{
//		return 1;
//	}
//	return seq(n - 1) + seq(n - 2);
//}
//
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int ret = seq(n);
//	printf("%d", ret);
//	return 0;
//}



////7.[二分查找法]
//#include <stdio.h>
//
//int binary_search(int nums[], int target, int sz)
//{
//	int left = 0;
//	int right = sz - 1;
//	while (left <= right)
//	{
//		int middle = left + (right - left) / 2;//不要把它放在while外面
//		if (nums[middle] == target)
//		{
//			return middle;
//		}
//		else if (nums[middle] < target)
//		{
//			left = middle + 1;//必须加一，否则如果剩两个元素，那它就一直不变了，陷入死循环。再者middle已经检验过了，那肯定不可能是middle。
//		}
//		else if (nums[middle] > target)
//		{
//			right = middle - 1;//此是同理
//		}
//	}
//	return -1;//如果while里没找到，就返回-1
//}
//
//int main()
//{
//	int target = 0;
//	int nums[10] = { 1,2,3,4,5,6,7,8,9,10 };//以1到100为例，展示二分查找法
//	int sz = sizeof(nums) / sizeof(nums[0]);
//	scanf("%d", &target);
//	int ret = binary_search(nums, target, sz);
//	printf("%d", ret);
//	return 0;
//}



////[轮转数组]
//#include <stdio.h>
//
//void swap(int nums[], int k, int sz)
//{
//	int i = 0;
//	int temp[100] = { 0 };//空数组
//	if (k > sz)
//	{
//		swap(nums, k % sz, sz);
//		return;
//	}
//	for (i = 0; i < k; i++)//先将后k个数存到空数组中
//	{
//		temp[i] = nums[sz - k + i];
//	}
//	for (i = sz - 1 - k; i >= 0; i--)//前面的剩余数的值进行迁移
//	{
//		nums[i + k] = nums[i];
//	}
//	for (i = 0; i < k; i++)//将空数组中保存的后K项迁移到数组前面
//	{
//		nums[i] = temp[i];
//	}
//}
//
//int main()
//{
//	int nums[7] = { 5,2,0,1,3,1,4 };//你懂吗（爱心）
//	int sz = sizeof(nums) / sizeof(nums[0]);
//	int k = 0;
//	scanf("%d", &k);
//	swap(nums, k, sz);
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d", nums[i]);
//	}
//	return 0;
//}



//动态规划尚未学到，正加速上鹏哥C语言，他的课虽长但细，等我好好提升吧。