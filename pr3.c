////[1瓶汽水1元，2空瓶换1瓶汽水，给20元能喝多少汽水？]
//#include <stdio.h>
//
//int main()
//{
//	int money = 20;
//	int count = 0;
//	int count_empty = 0;
//	while (money > 0)
//	{
//		money--;
//		count++;
//		count_empty = count;
//		if (count_empty % 2 == 0)
//		{
//			count++;
//		}
//		if (money == 0 && (count_empty == 0 || count_empty == 1))
//		{
//			break;
//		}
//	}
//	printf("%d", count);
//	return 0;
//}



////[最小公倍数]
//#include <stdio.h>
//
//int main()
//{
//	int n = 0, m = 0;
//	scanf("%d%d", &n, &m);
//	for (int i = 1; i <= n; i++)
//	{
//		if ((m * i) % n == 0)
//		{
//			printf("%d", m * i);
//			break;
//		}
//	}
//	return 0;
//}