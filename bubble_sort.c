////[判断是否为素数]
////总：输入一个数，这个数得满足无法被1和本身外任何数整除，可以用循环，但只需要循环到根号x即可。从安全性角度还要检测输入数字不能小于1.边界也要考虑输入1和2的情况.最后输出。函数还应该
////做到高内聚低耦合，使函数只承担判断
//#include <stdio.h>
////2.判断素数的函数
//int is_prime_number(int x)
//{
//	//4.安全性检查
//	if (x <= 1)
//	{
//		return -1;//返回-1时main中可进行报错
//	}
//	//3.循环
//	int i = 0;//循环变量
//	for (i = 2; i * i <= x; i++)
//	{
//		if (0 == x % i)
//		{
//			return 0;
//		}
//	}
//	return 1;
//}
//
//int main()
//{
//	//1.输入
//	int num = 0;
//	scanf("%d", &num);
//	int ret = 0;
//	ret = is_prime_number(num);
//	if (-1 == ret)
//	{ 
//		printf("请输入大于1的整数\n");
//	}
//	//5.输出
//	if (1 == ret)
//	{
//		printf("该数是素数\n");
//	}
//	if (0 == ret)
//	{
//		printf("该数不是素数\n");
//	}
//	return 0;
//}



////[冒泡排序]
////总：进行升序排列，那可以9一直和右值比较，移到最右。8也类似，但少移一位，如此往复，可用两层循环。递归太复杂，选择效率更好的循环
//#include <stdio.h>
//
//void bubble_sort(int arr[], int x)
//{
//	//安全
//	if (x <= 1)
//	{
//		return;
//	}
//	//循环
//	int i = 0;//循环变量
//	for (i = 0; i < x - 1; i++)
//	{
//		int j = 0;//循环变量
//		for (j = 0; j < x - 1 - i; j++)
//		{
//			//交换
//			if (arr[j] > arr[j + 1])
//			{
//				int temp = 0;
//				temp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = temp;
//			}
//		}
//	}
//}
//
//int main()
//{
//	int arr[10] = { 9,8,7,6,5,4,3,2,1,0 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	bubble_sort(arr, sz);
//	int i = 0;//数组下标
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}
