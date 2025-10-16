////[乐乐走台阶]
//#include <stdio.h>
//
//int step(int n)
//{
//	//边界
//	if (1 == n)
//	{
//		return 1;
//	}
//	else if (2 == n)
//	{
//		return 2;
//	}
//	return step(n - 1) + step(n - 2);
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int ret = step(n);
//	printf("%d", ret);
//	return 0;
//}



////[删除一组数中的某个数后输出]
//#include <stdio.h>
//
//void find(int count, int input[], int n)
//{
//	int i = 0;
//	for (i = 0; i < count; i++)
//	{
//		if (n == input[i])
//		{
//			input[i] = -1;
//		}
//	}
//}
//
//int main()
//{
//	int count = 0;
//	int input[50] = { 0 };
//	int n = 0;
//	int i = 0;
//	scanf("%d", &count);
//	for (i = 0; i < count; i++)
//	{
//		scanf("%d", &input[i]);
//	}
//	scanf("%d", &n);
//	find(count, input, n);
//	for (i = 0; i < count; i++)
//	{
//		if (-1 == input[i])
//		{
//			continue;
//		}
//		printf("%d ", input[i]);
//	}
//	return 0;
//}




