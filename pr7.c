//#include <stdio.h>
//#include <stdlib.h>
//
//int Fibonacci(int n)
//{
//	int a = 1, b = 1;
//	int i = 0;
//	int temp = 0;
//	for (i = 0; i < n - 1; i++)
//	{
//		temp = a + b;
//		a = b;
//		b = temp;
//	}
//	return b;
//}
//
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int m = n;
//	int* p = calloc(n, sizeof(int));
//	int* save = p;
//	if (p == NULL)
//	{
//		return -1;
//	}
//	while (n--)
//	{
//		scanf("%d", p++);
//	}
//	int i = 0;
//	for (i = 0; i < m; i++)
//	{
//		int ret = Fibonacci(*save++);
//		printf("%d\n", ret);
//	}
//	return 0;
//}


//#include <stdio.h>
//
//int main()
//{
//	int n = 0, m = 0;
//	scanf("%d%d", &n, &m);
//	int ret = n * m - n - m;
//	printf("%d", ret);
//	return 0;
//}


//#include <stdio.h>
//#include <string.h>
//
//int main()
//{
//	char arr[100001] = { 0 };
//	scanf("%s", arr);
//	int i = 0;
//	int sz = strlen(arr);
//	int count = 0;
//	for (i = 0; i < sz; i++)
//	{
//		if (arr[i] == '1')
//		{
//			count++;
//		}
//	}
//	printf("%d", count - 1);
//	return 0;
//}



////[回文字符]
//#include <stdio.h>
//#include <string.h>
//
//int main()
//{
//	char arr[1001] = { 0 };
//	scanf("%s", arr);
//	int sz = strlen(arr);
//	int left = 0, right = sz - 1;
//	int count = 0;
//	while (left <= right)
//	{
//		if (arr[left] - arr[right] >= 13)
//		{
//			count += 26 - (arr[left] - arr[right]);
//		}
//		else if (arr[left] - arr[right] >= 0)
//		{
//			count += arr[left] - arr[right];
//		}
//		else if (arr[left] - arr[right] >= -13)
//		{
//			count += 0 - (arr[left] - arr[right]);
//		}
//		else
//		{
//			count += arr[left] - arr[right] + 26;
//		}
//		left++;
//		right--;
//	}
//	printf("%d", count);
//	return 0;
//}



//#include <stdio.h>
//#include <stdlib.h>
//
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int i = 0;
//	int ret[50][50000] = { 0 };
//	for (i = 0; i < n; i++)
//	{
//		int k = 0;
//		scanf("%d", &k);
//		int* original = (int*)calloc(k, sizeof(int));
//		int* p = original;
//		if (p == NULL)
//		{
//			return -1;
//		}
//		int j = 0;
//		for (j = 0; j < k; j++)
//		{
//			scanf("%d", p);
//			ret[i][j] = *p;
//			p++;
//		}
//		free(original);
//	}
//	for (i = 0; i < n; i++)
//	{
//		int arr[50000] = { 0 };
//		int j = 0;
//		for (j = 0; j < 50000; j++)
//		{
//			if (ret[i][j] == 0)
//			{
//				continue;
//			}
//			if (ret[i][j] != 0 && arr[ret[i][j] - 1] == 0)
//			{
//				printf("%d ", ret[i][j]);
//			}
//			arr[ret[i][j] - 1] = ret[i][j];
//		}
//		printf("\n");
//	}
//	return 0;
//}



//#include <stdio.h>
//
//int Fibonaci(int n)
//{
//    int i = 0;
//    int a = 1, b = 1, c = 0;
//    for (i = 0; i < n; i++)
//    {
//        c = a + b;
//        a = b;
//        b = c;
//    }
//    return c;
//}
//
//int main()
//{
//    int i = 0;
//    for (i = 1; i <= 40; i++)
//    {
//        int ret = Fibonaci(i);
//        printf("%d ", ret);
//    }
//    return 0;
//}


//#include <stdio.h>
//#include <math.h>
//
//int is_prime_number(int n)
//{
//	if (1 == n)
//	{
//		return 1;
//	}
//	int i = 0;
//	for (i = 2; i <= sqrt(n); i++)
//	{
//		if (n % i == 0)
//		{
//			return 1;
//		}
//	}
//	return 2;
//}
//
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int ret = is_prime_number(n);
//	if (1 == ret)
//	{
//		printf("该数不是素数\n");
//	}
//	else if (2 == ret)
//	{
//		printf("该数是素数\n");
//	}
//	return 0;
//}


////[数组行列互换]
//#include <stdio.h>
//
//int main() {
//	int arr[3][3] = { {1,2,3},{4,5,6},{7,8,9} };
//	int i = 0;
//	int temp[3][3] = { 0 };
//	for (i = 0; i < 3; i++) {//翻转拷贝数据
//		int j = 0;
//		for (j = 0; j < 3; j++) {
//			temp[j][i] = arr[i][j];
//		}
//	}
//	for (i = 0; i < 3; i++) {
//		int j = 0;
//		for (j = 0; j < 3; j++) {
//			arr[i][j] = temp[i][j];
//			printf("%d ", arr[i][j]);
//		}
//		printf("\n");
//	}
//	
//	return 0;
//}


////[反序存放字符串]
//#include <stdio.h>
//#include <string.h>
//
//void reverse(char arr[], int sz) {
//	int left = 0, right = sz - 1;
//	while (left <= right) {
//		char temp = arr[left];
//		arr[left] = arr[right];
//		arr[right] = temp;
//		left++;
//		right--;
//	}
//}
//
//int main() {
//	char arr[100] = { 0 };
//	fgets(arr, 100, stdin);
//	int sz = strlen(arr);
//	reverse(arr, sz);
//	printf("%s", arr);
//	return 0;
//}

//#include <stdio.h>
//
//int Findmax(int x[], int n);
//
//void main()
//{
//    int i;
//    int s[10], max;
//
//    /* Findmax()函数的声明 */
//    printf("Input 10 number:\n");
//
//    /* 输入 10 个数据到 s 数组中 */
//    for (i = 0; i < 10; i++)
//        scanf("%d", &s[i]);
//
//    /* 调用 Findmax()函数 */
//    max = Findmax(s, 10);
//
//    for (i = 0; i < 10; i++)
//        printf("%4d", s[i]);
//    printf("\nthe max is %d", max);
//}
//
//int Findmax(int x[], int n)
//{
//    int max, i;
//    max = x;
//    for (i = 1; i < n; i++)
//        if (max < x[i])
//            max = x[i];
//    return max;
//}


