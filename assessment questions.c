////1.[��һ��HelloWorld����]
//#include <stdio.h>
//
//int main()
//{
//	printf("**************************\n");
//	printf("Hello World!\n");
//	printf("**************************\n");
//	return 0;
//}



////2.[��ĳΪͬѧ��ѧ�ɼ�����]
//#include <stdio.h>
//
//char rank(int n)
//{
//	if (n >= 90 && n <= 100)
//	{
//		return 'A';
//	}
//	else if (n >= 80)
//	{
//		return 'B';
//	}
//	else if (n >= 70)
//	{
//		return 'C';
//	}
//	else if (n >= 60)
//	{
//		return 'D';
//	}
//	else
//	{
//		return 'E';
//	}
//}
//
//int main()
//{
//	int score = 0;
//	scanf("%d", &score);//�Ͻ���˵����Ӧ�ü�������ķ����Ƿ���0��100֮�䣬��һ��ϰ���Ĭ������Ϸ���������Դ�Ϊ׼��
//	char ret = rank(score);
//	printf("%c", ret);
//	return 0;
//}



////3.[��ӡ1~100���������ı������ÿո����]
//#include <stdio.h>
//
//int main()
//{
//	int i = 0;//ѭ������
//	for (i = 1; i < 33; i++)
//	{
//		printf("%d ", i * 3);
//	}
//	return 0;
//}



////4.[����žų˷��ھ���]
//#include <stdio.h>
//
//int main()
//{
//	int i = 0;
//	for (i = 1; i < 10; i++)
//	{
//		int j = 0;
//		for (j = 1; j <= i; j++)
//		{
//			printf("%d x %d = %d  ", j, i, i * j);//������ո��ֹ�һ����
//		}
//		printf("\n");//���з�ֹ�һ��
//	}
//	return 0;
//}



////5.[�׳���Ȼ�� n �Ľ׳�д��n!��n != 1��2��3��...��n�����������Ȼ��n��ֵ]
//#include <stdio.h>
//
//int factorial(int n)//ͬ��Ĭ��n��Ϊ�������˴�������ȫ�Դ���
//{
//	if (0 == n)//��д��ֹ��==©д��=��������������
//	{
//		return 1;
//	}
//	return n * factorial(n - 1);
//}
//
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int ret = factorial(n);
//	printf("%d\n", ret);
//	return 0;
//}



////6.[쳲��������У���ָһ�������� 0 �� 1 ��ʼ�������ÿһ�����ֶ���ǰ���������ֵĺ�]
//#include <stdio.h>
//
//int seq(int n)
//{
//	if (0 == n)
//	{
//		return 0;
//	}
//	else if (1 == n)
//	{
//		return 1;
//	}
//	return seq(n - 1) + seq(n - 2);
//}
//
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int ret = seq(n);
//	printf("%d", ret);
//	return 0;
//}



////7.[���ֲ��ҷ�]
//#include <stdio.h>
//
//int binary_search(int nums[], int target, int sz)
//{
//	int left = 0;
//	int right = sz - 1;
//	while (left <= right)
//	{
//		int middle = left + (right - left) / 2;//��Ҫ��������while����
//		if (nums[middle] == target)
//		{
//			return middle;
//		}
//		else if (nums[middle] < target)
//		{
//			left = middle + 1;//�����һ���������ʣ����Ԫ�أ�������һֱ�����ˣ�������ѭ��������middle�Ѿ�������ˣ��ǿ϶���������middle��
//		}
//		else if (nums[middle] > target)
//		{
//			right = middle - 1;//����ͬ��
//		}
//	}
//	return -1;//���while��û�ҵ����ͷ���-1
//}
//
//int main()
//{
//	int target = 0;
//	int nums[10] = { 1,2,3,4,5,6,7,8,9,10 };//��1��100Ϊ����չʾ���ֲ��ҷ�
//	int sz = sizeof(nums) / sizeof(nums[0]);
//	scanf("%d", &target);
//	int ret = binary_search(nums, target, sz);
//	printf("%d", ret);
//	return 0;
//}



////[��ת����]
//#include <stdio.h>
//
//void swap(int nums[], int k, int sz)
//{
//	int i = 0;
//	int temp[100] = { 0 };//������
//	if (k > sz)
//	{
//		swap(nums, k % sz, sz);
//		return;
//	}
//	for (i = 0; i < k; i++)//�Ƚ���k�����浽��������
//	{
//		temp[i] = nums[sz - k + i];
//	}
//	for (i = sz - 1 - k; i >= 0; i--)//ǰ���ʣ������ֵ����Ǩ��
//	{
//		nums[i + k] = nums[i];
//	}
//	for (i = 0; i < k; i++)//���������б���ĺ�K��Ǩ�Ƶ�����ǰ��
//	{
//		nums[i] = temp[i];
//	}
//}
//
//int main()
//{
//	int nums[7] = { 5,2,0,1,3,1,4 };//�㶮�𣨰��ģ�
//	int sz = sizeof(nums) / sizeof(nums[0]);
//	int k = 0;
//	scanf("%d", &k);
//	swap(nums, k, sz);
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d", nums[i]);
//	}
//	return 0;
//}



//��̬�滮��δѧ����������������C���ԣ����Ŀ��䳤��ϸ�����Һú������ɡ�