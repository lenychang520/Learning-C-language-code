////[模拟strcpy]
//#include <stdio.h>
//#include <string.h>
//
//void my_strcpy(char arr1[], char arr2[])
//{
//	int len = strlen(arr1);
//	int i = 0;
//	arr1[len] = '\0';
//	for (i = 0; i < len; i++)
//	{
//		arr1[i] = arr2[i];
//	}
//}
//
//int main()
//{
//	char arr1[] = "abcdef";
//	char arr2[] = "ghijklmn";
//	my_strcpy(arr2, arr1);
//	printf("%s", arr2);
//	return 0;
//}



////[将整形数组中的奇数全调到偶数前]
//#include <stdio.h>
//
//void sort(int arr[], int len)
//{
//	int i = 0, j = 0;
//	for (i = 0; i < len; i++)//往后位移
//	{
//		for (j = i; j < len; j++)//找奇数，调到前面
//		{
//			if (arr[j] % 2 != 0)
//			{
//				int temp = arr[i];
//				arr[i] = arr[j];
//				arr[j] = temp;
//				break;
//			}
//			if (j == len - 1)//如果已经排好了就没必要多余的循环了
//			{
//				return;
//			}
//		}
//	}
//}
//
//int main()
//{
//	int arr[20] = { 1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20 };
//	int len = sizeof(arr) / sizeof(arr[0]);
//	sort(arr, len);
//	int i = 0;
//	for (i = 0; i < len; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}



////[将整形数组中的奇数全调到偶数前](双指针版)
//#include <stdio.h>
//
//void sort(int arr[], int len)
//{
//	int left = 0, right = len - 1;
//	while (left < right)
//	{
//		while ((left < right) && (arr[left] % 2 != 0))//左找偶数
//		{
//			left++;
//		}
//		while ((left < right) && (arr[right] % 2 == 0))//右找奇数
//		{
//			right--;
//		}
//		if (left < right)
//		{
//			int temp = arr[left];
//			arr[left] = arr[right];
//			arr[right] = temp;
//			//步进，防止浪费循环次数
//			left++;
//			right--;
//		}
//	}
//}
//
//int main()
//{
//	int arr[20] = { 1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20 };
//	int len = sizeof(arr) / sizeof(arr[0]);
//	sort(arr, len);
//	int i = 0;
//	for (i = 0; i < len; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}



////[升序数组合并成新的升序数组输出]
//#include <stdio.h>
//
//int main()
//{
//	int arr1[5] = { 3,4,7,8,9 };
//	int arr2[8] = { 2,5,7,8,10,69,78,91 };
//	int i = 0;
//	int i1 = 0, i2 = 0;
//	int len1 = sizeof(arr1) / sizeof(arr1[0]);
//	int len2 = sizeof(arr2) / sizeof(arr2[0]);
//	int sum_len = len1 + len2;
//	for (i = 0; i < sum_len; i++)//打印出每一个合并后的升序情况
//	{
//		if (arr1[i1] <= arr2[i2])
//		{
//			printf("%d ", arr1[i1]);
//			if (i1 < len1 - 1)
//			{
//				i1++;
//			}
//			else//如果数组1已经打印完了，那不妨命其尾数恒大于数组二，确保复杂度为o（n）
//			{
//				arr1[len1 - 1] = arr2[len2 - 1] + 1;
//			}
//		}
//		else
//		{
//			printf("%d ", arr2[i2]);
//			if (i2 < len2 - 1)
//			{
//				i2++;
//			}
//			else//如果数组2已经打印完了，那不妨命其尾数恒大于数组一，确保复杂度为o（n）
//			{
//				arr2[len2 - 1] = arr1[len1 - 1] + 1;
//			}
//		}
//	}
//	return 0;
//}
