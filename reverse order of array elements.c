////创建一个整型数组，完成对数组的操作
//#include <stdio.h>
//
//void init(int arr[], int n)
//{
//
//
//}
//
//int main()
//{
//	int arr[100] = { 0 };
//	
//	return 0;
//}

#include <stdio.h>

void swap(char arr[])
{
	int left = 0;
	int right = 4;
	while (1)
	{
		if (left <= right)
		{
			char temp = arr[left];
			arr[left] = arr[right];
			arr[right] = temp;
			left++;
			right--;
		}
		else
		{
			break;
		}
	}
}

int main()
{
	char arr[6] = "abcde";
	scanf("%s", arr);
	swap(arr);
	printf("%s", arr);
	return 0;
}