//��һ�������洢���ڴ��еĶ�������1�ĸ�������������Ч�棩

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
		for (i = 0; i < n; i++)//ѭ����λ��1
		{
			arr[31]++;
			for (j = 31; j > 0; j--)//��2��1
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
