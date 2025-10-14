//求一个整数存储在内存中的二进制中1的个数（仅正数低效版）

#include <stdio.h>

int main()
{
	int arr[32] = { 0 };
	int n = 0;
	scanf("%d", &n);
	int i = 0;
	int j = 31;
	if (n >= 0)
	{
		for (i = 0; i < n; i++)//循环个位加1
		{
			arr[31]++;
			for (j = 31; j > 0; j--)//逢2进1
			{
				if (2 == arr[j])
				{
					arr[j - 1]++;
					arr[j] = 0;
				}
			}
		}
	}
	int count = 0;
	for (i = 0; i < 32; i++)
	{
		if (1 == arr[i])
		{
			count++;
		}
	}
	printf("%d\n", count);
	return 0;
}
