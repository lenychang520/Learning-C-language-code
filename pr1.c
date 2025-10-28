////[统计二进制中1的个数]
//#include <stdio.h>
//
//int main()
//{
//	int n = 0;
//	int i = 0, j = 0;
//	scanf("%d", &n);
//	int arr[32] = { 0 };
//	for (i = 0; i < n; i++)//这段循环是用来生成二进制序列的
//	{
//		if (0 == arr[31])
//		{
//			arr[31]++;
//		}
//		else if (1 == arr[31])
//		{
//			arr[31] = 0;
//			arr[30]++;
//		}
//		for (j = 30; j > 0; j--)
//		{
//			if (2 == arr[j])
//			{
//				arr[j] = 0;
//				arr[j - 1]++;
//			}
//		}
//	}
//	for (i = 0; i < 32; i++)
//	{
//		printf("%d", arr[i]);
//	}
//	return 0;
//}



////[模拟strlen函数]
//#include <stdio.h>
//#include <assert.h>
//
//int my_strlen(const char* arr)
//{
//	assert(arr);//使arr不能是空数组，因为空数组不能解引用。
//	int lens = 0;
//	while (*arr != '\0')
//	{
//		lens++;
//		arr++;
//	}
//	return lens;
//}
//
//int main()
//{
//	char arr[20] = "abcdef";
//	int ret = my_strlen(arr);
//	printf("%d", ret);
//	return 0;
//}



