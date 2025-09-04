#define _CRT_SECURE_NO_WARNINGS//避免scanf等函数出现安全警告.这个宏定义应该放在顶上。
#include <stdio.h>



////[if else if语句]
//int main()
//{
//	int age = 0;
//	scanf("%d", &age);
//	if (age < 18)
//	{
//		printf("未成年\n");//当if下面只有一行代码，那么if的{}就是可写可不写。
//	}
//	else if (age < 30)//else if可以不用靠&&连接多个条件，而直接实现一个区间内的判断
//	{
//		printf("年轻人\n");
//	}
//	else if (age < 50)
//	{
//		printf("中年人\n");
//	}
//	else if (age < 100)
//	{
//		printf("老年人\n");
//	}
//	else
//	{
//		printf("寿比南山\n");
//	}
//	return 0;
//}



////[奇数偶数判断]
//int main()
//{
//	int num = 0;
//	scanf("%d", &num);
//	if (num % 2 == 1)//这里不用反过来写，因为num % 2是个表达式，如果写成赋值语句就会出错。而如果是num == 2，那还是建议写成2 == num，防止==写成=时不报错。
//	{
//		printf("它是个奇数\n");
//	}
//	else
//	{
//		printf("它是个偶数\n");
//	}
//	return 0;
//}



////[输出1到100之间的奇数]
//int main()
//{
//	int a = 0;
//	while (a <= 100)
//	{
//		if (a % 2 == 1)
//		{
//			printf("%d\n", a);
//		}
//		a++;
//	}
//	return 0;
//}
//////这有一个比较简化的代码，算是精妙了，它避开了if
////int main()
////{
////	int a = 1;
////	while (a <= 100)
////	{
////		printf("%d\n", a);
////		a += 2;//这里的+=表示每次循化都+2
////	}
////	return 0;
////}



////[else的就近原则1]
//int main()
//{
//	int a = 1;
//	int b = 2;
//	if (0 == a)
//		if (2 == b)
//			printf("hehe\n");
//	else
//		printf("haha\n");//这段代码最后的输出结果是什么也没有，为什么？因为这种格式是我故意调出来的，实际上else的就近原则使得它是对应上一个离它最近的if，
//	//也就是说它和if（2 == b）才是对应的。
//	return 0;
//}



////[else的就近原则2]
//int main()
//{
//	int a = 1;
//	int b = 2;
//	if (0 == a)
//	{
//		if (2 == b)
//			printf("hehe\n");
//	}
//	else
//		printf("haha\n");//这段代码最后的输出结果是haha,因为这时if（2 == b）和else已经被大括号隔开，就近原则就指向if（0 == a）了。
//	return 0;
//}



////[switch和default]
//int main()
//{
//	int day = 0;
//	scanf("%d", &day);
//	switch (day)//day就是参数，而且是整形参数，所以数组类型也行。不过字符也可以，为什么呢？因为字符会对应ASCII表转换成整形。
//	{
//	case 1:
//		printf("星期一，要工作\n");
//		break;//case只是点明入口，如果没有break，就会一路执行下去，相当于break是出口
//	case 2:
//		printf("星期二，要工作\n");
//		break;
//	case 3:
//		printf("星期三，要工作\n");
//		break;
//	case 4:
//		printf("星期四，要工作\n");
//		break;
//	case 5:
//		printf("星期五，要工作\n");
//		break;
//	case 6:
//		printf("星期六，休息吧\n");
//		break;
//	case 7:
//		printf("星期天，休息吧\n");
//		break;
//	default://default相当于if语句中的else，当参数没有可执行的case时，就可以执行。
//		printf("请确认自己输入的是数字1到7\n");
//	}
//	return 0;
//}



////[作业,奇偶判断]
//int main()
//{
//	int num = 0;
//	scanf("%d", &num);
//	if (num % 2 == 1)
//	{
//		printf("odd");
//	}
//	else
//	{
//		printf("even");
//	}
//	return 0;
//}



////[奇偶ASCII值判断]
//int main()
//{
//	char num = 0;
//	(int)scanf("%c", &num);//将字符类型强转化成整形类型
//	if (num % 2 == 1)
//	{
//		printf("YES\n");
//	}
//	else 
//	{
//		printf("NO\n");
//	}
//	return 0;
//}



////[整数大小比较]
//int main()
//{
//	int n1 = 0, n2 = 0;
//	scanf("%d %d", &n1, &n2);
//	if (n1 < n2)
//		printf("<");
//	else if (n1 == n2)
//		printf("=");
//	else
//		printf(">");
//	return 0;

//}


