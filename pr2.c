////[字符串倒序]
//#include <stdio.h>
//#include <string.h>
//
//void reverse(char arr[], int sz)
//{
//	int left = 0;
//	int right = sz - 1;
//	while (right >= left)
//	{
//		char temp = 'a';
//		temp = arr[left];
//		arr[left] = arr[right];
//		arr[right] = temp;
//		left++;
//		right--;
//	}
//}
//int main()
//{
//	char arr[10] = "abcdefghi";
//	int sz = strlen(arr);
//	reverse(arr, sz);
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%c", arr[i]);
//	}
//	return 0;
//}



////[计算a + aa + aaa + aaaa +aaaaa......前n项之和]
//#include <stdio.h>
//
//int main()
//{
//	int a = 0;
//	int n = 0;
//	scanf("%d%d", &a, &n);
//	int i = 0;
//	int k = 0;
//	int sum = 0;
//	for (i = 0; i < n; i++)
//	{
//		k += k * 10 + a;
//		sum += k;
//	}
//	printf("%d", sum);
//	return 0;
//}



//[打印0~10000之间的水仙花数]
#include <stdio.h>

int main()
{
	int i = 0;
	printf("1 2 3 4 5 6 7 8 9 ");
	for (i = 10; i <= 10000; i++)
	{
		if (i / 10 < 10)//两位数
		{
			int a = i / 10;//十位
			int b = i % 10;//个位
			if (a * a + b * b == i)
			{
				printf("%d ", i);
			}
		}
		else if (i / 100 < 10)//三位数
		{
			int a = i / 100;//百位
			int b = (i / 10) % 10;//十位
			int c = (i % 100) % 10;//个位
			if (a * a * a + b * b * b + c * c * c == i)
			{
				printf("%d ", i);
			}
		}
		else if (i / 1000 < 10)//四位数
		{
			int a = i / 1000;//千位
			int b = (i / 100) % 10;//百位
			int c = (i % 100) / 10;//十位
			int d = (i % 100) % 10;//个位
			if (a * a * a * a + b * b * b * b + c * c * c * c == i)
			{
				printf("%d ", i);
			}
		}
	}
	return 0;
}