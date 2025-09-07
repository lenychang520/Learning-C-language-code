#define _CRT_SECURE_NO_WARNINGS//避免scanf等函数出现安全警告.这个宏定义应该放在顶上。
#include <stdio.h>



////[求平均年龄]
//float circle(int i, int n)
//{
//	float sum = 0;//sum放在外面，这样是为了后续sum能够返回给circle
//	while (i < n)
//	{
//		int age = 0;
//		scanf("%d", &age);//每次循环，原先的age都会毁灭，所以不会出现age重名
//		sum += age;//让sum最终返回到值是age的和
//		i++;
//	}
//	return sum;
//}
//
//int main()
//{
//	int n = 0;
//	float avr = 0;
//	scanf("%d", &n);
//	int i = 0;
//	float sum = circle(i, n);
//	avr = sum / n;
//	printf("%.2f\n", avr);
//	return 0;
//}



