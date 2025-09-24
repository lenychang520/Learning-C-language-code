////[计算1/1 - 1/2 + 1/3 - 1/4一直到1/100的和]
//
////【思】只有分母变化，而分母是渐加1的，那么我们可以通过1.循环来实现。
////但是符号也是变化的，怎么办呢？我们可以看到分母其实也是奇偶变换的，那可以把两者2.关联在一起，奇减偶加来实现同步循环
////最后将它们的值都汇总到sum里，实现3.打印的功能。
//#include <stdio.h>
//
//int main()
//{
//	//1.解决循环的问题
//	int i = 0;//循环变量
//	double sum = 0.0;
//	for (i = 1; i <= 100; i++)
//	{
//		//2.关联起来
//		if (i % 2 != 0)
//		{
//			sum += 1.0 / i;
//		}
//		else
//		{
//			sum -= 1.0 / i;
//		}
//	}
//	//输出
//	printf("%.10f\n", sum);
//	return 0;
//}



////[求10个整数中的最大值]
//
////总：把数字存到数组里面，然后用数组下标逐个循环比较，有更大的，max值就发生变动
//#include <stdio.h>
//
//int find_max(int* x)
//{
//	//2.进行循环比较
//	int max = x[0];//先假设max是数组中第一个数
//	int count = 0;//统计循环次数
//	x++;//使进入循环的元素从arr[1]开始比较
//	for (count = 1; count <= 9; x++)
//	{
//		if (*x > max)
//		{
//			max = *x;
//		}
//		count++;
//	}
//	return max;
//}
//
//int main()
//{
//	//1.将10个数字存到数组里面
//	int arr[10] = { 0 };
//	int i = 0;//数组下标
//	for (i = 0; i < 10; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	int ret = 0;
//	ret = find_max(arr);
//	printf("%d\n", ret);
//	return 0;
//}



////[打印九九乘法表]
//
////总；有输出，无输入。我们要从1开始，循环乘一个会不断增加的数，直到与原数相同，而原数也要不断增加，所以可能需要两个循环，并且可能是嵌套循环
//#include <stdio.h>
//
//int main()
//{
//	//1.原数的循环
//	int i = 1;//原数
//	int j = 1;//乘数
//	for (i = 1; i <= 9; i++)
//	{
//		//乘数的循环
//		for (j = 1; j <= i; j++)
//		{
//			int ret = 0;
//			printf("%d*%d=%d ", j, i, i * j);
//		}
//		printf("\n");
//	}
//	return 0;
//}



//[n的k次方实现（要用递归）]
//总：我们要输入n和k，用递归来不断乘数个n的相乘.n的k次方=n*n*n*...(k次)
#include <stdio.h>

int power(int x, int y)
{
	//2.递归
	while (y >= 1)//3.边界
	{
		return x * power(x, y - 1);
	}
}

int main()
{
	int n = 0;
	int k = 0;//次方
	//1.输入n，k
	scanf("%d %d", &n, &k);
	printf("%d", power(n, k));
	return 0;
}