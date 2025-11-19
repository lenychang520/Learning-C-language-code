//#include <stdio.h>
//
//int main()
//{
//	char* p1 = "abcdef";
//	char* p2 = "abcdef";
//	if (p1 == p2)
//	{
//		printf("p1 == p2");
//	}
//	else
//	{
//		printf("p1 != p2");
//	}
//	return 0;
//}



//#include <stdio.h>
//
//int main()
//{
//    int n = 0, a = 0, b = 0;
//    scanf("%d%d%d", &n, &a, &b);
//    int i = 0;
//    int j = 0;
//    int money = n;
//    int min = n - (n / a) * a;
//    if (min > n - (n / b) * b)
//    {
//        min = n - (n / b) * b;
//    }
//    for (i = 0; i < n / a; i++)
//    {
//        n = money;
//        n -= i * a;
//        for (j = 0; j < n / b; j++)
//        {
//            if (j != 0)
//                n -= b;
//        }
//        if (i != 0 && n < min)
//        {
//            min = n;
//        }
//    }
//    printf("%d", min);
//    return 0;
//}



////[奇数每位逢偶转0，偶数直接输出0]
//#include <stdio.h>
//
//int main()
//{
//	char arr[11] = { 0 };
//	int count = 0;
//	while (scanf("%c", &arr[count]) == 1)
//	{
//		if (arr[count] == '\n')
//		{
//			if ((arr[count - 1] - '0') % 2 == 0)
//			{
//				printf("0");
//				return 0;
//			}
//			break;
//		}
//		if ((arr[count] - '0') & 1)//是奇数
//			arr[count] = '1';
//		else
//			arr[count] = '0';
//		count++;
//	}
//	int i = 0;
//	for (i = 0; i < count; i++)
//	{
//		printf("%c", arr[i]);
//	}
//	return 0;
//}



////[乐乐购物]
//#include <stdio.h>
//
//int main()
//{
//	float arr[4] = { 0 };
//	int i = 0;
//	for (i = 0; i < 4; i++)
//	{
//		scanf("%f", &arr[i]);
//		if (3 == i && arr[2] == arr[1] && arr[1] == 11)
//		{
//			if (arr[3] == 0)
//			{
//				printf("%.2f", arr[0] * 0.7);
//			}
//			else
//			{
//				if (arr[0] * 0.7 - 50 <= 0)
//				{
//					printf("0.00");
//					return 0;
//				}
//				printf("%.2f", arr[0] * 0.7 - 50);
//			}
//		}
//		else if (3 == i && arr[2] == arr[1] && arr[1] == 12)
//		{
//			if (arr[3] == 0)
//			{
//				printf("%.2f", arr[0] * 0.8);
//			}
//			else
//			{
//				if (arr[0] * 0.8 - 50 <= 0)
//				{
//					printf("0.00");
//					return 0;
//				}
//				printf("%.2f", arr[0] * 0.8 - 50);
//			}
//		}
//		else if (3 == i && ((arr[2] != 11 || arr[2] != 12) || (arr[3] != 11 || arr[3] != 12)))
//		{
//			printf("%.2f", arr[0]);
//		}
//	}
//	return 0;
//}



////[左旋字母]
//#include <stdio.h>
//#include <assert.h>
//
//void revolve(char arr[], int sz, int k)
//{
//	assert(sz > 0);
//	k = k % sz;
//	int i = 0;
//	for (i = 0; i < k; i++)//将左边的k个元素移到右边
//	{
//		int j = 0;
//		char temp = 0;
//		temp = arr[0];
//		for (j = 1; j < sz; j++)//第二位到数组结束，每一个元素往前走一位，进行链条般的移动
//		{
//			arr[j - 1] = arr[j];
//		}
//		arr[sz - 1] = temp;
//	}
//}
//
//int main()
//{
//	char arr[] = "abcdef";
//	int sz = sizeof(arr) / sizeof(arr[0]) - 1;
//	int k = 0;
//	scanf("%d", &k);
//	revolve(arr, sz, k);
//	printf("%s\n", arr);
//	return 0;
//}



////[左旋字母]（三次反转法）
//#include <stdio.h>
//#include <assert.h>
//
//void reverse(char arr[], int left, int right)
//{
//	while (left <= right)
//	{
//		char temp = arr[left];
//		arr[left] = arr[right];
//		arr[right] = temp;
//		left++;
//		right--;
//	}
//}
//
//void revolve(char arr[], int sz, int k)
//{
//	assert(sz > 0);
//	k %= sz;
//	reverse(arr, 0, k - 1);//反转前k个元素
//	reverse(arr, k, sz - 1);//反转后k个元素
//	reverse(arr, 0, sz - 1);//整体再反转一次
//}
//
//int main()
//{
//	char arr[] = "abcdef";
//	int sz = sizeof(arr) / sizeof(arr[0]) - 1;
//	int k = 0;
//	scanf("%d", &k);
//	revolve(arr, sz, k);
//	printf("%s\n", arr);
//	return 0;
//}



////[qsort的使用]
//#include <stdio.h>
//#include <stdlib.h>
//
//int cmp(const void* a, const void* b)
//{
//	int x = *(const int*)a;
//	int y = *(const int*)b;
//	if (x > y)
//		return 1;
//	else if (x == y)
//		return 0;
//	else
//		return -1;
//}
//
//int main()
//{
//	int arr[] = { 5,3,9,7,6,4,1,2 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	qsort((int*)arr, sz, 4, cmp);
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d", arr[i]);
//	}
//	return 0;
//}


