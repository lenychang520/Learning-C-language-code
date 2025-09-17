#define _CRT_SECURE_NO_WARNINGS//避免scanf等函数出现安全警告.这个宏定义应该放在顶上。



////[财务管理]
//#include <stdio.h>
//int main()
//{
//	int i = 0;//循环变量
//	float m = 0.0f;//输入的money
//	float sum = 0;//sum是薪资总和
//	for (i = 0; i < 12; i++)
//	{
//		scanf("%f",&m);
//		sum = sum + m;//使得最终sum等于每次的上一次综合加新的数
//	}
//	printf("$%.2f", sum / 12);
//	return 0;
//}



////[蓝桥杯算法训练VIP-整数平均值]
//#include <stdio.h>
//int avr(int n)
//{
//	int i = 0;//循环变量
//	int sum = 0;//数组数据之和
//	int date[100] = { 0 };//初始化数组，注意多留些空间
//	int* p = date;//将date存放在指针p
//	for (i = 0; i < n; i++)//输入循环
//	{
//		scanf("%d", &date[i]);//必须包括[i]，否则每次输入都只会存到0位里面
//	}
//	for (i = 0; i < n; i++)//指针遍历数组循环
//	{
//		sum += *p++;
//	}
//	return (sum / n);
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int ret = avr(n);
//	printf("%d", ret);
//	return 0;
//}



////[字符移动效果]
//#include <stdio.h>
//#include <string.h>//调用strlen
//#include <Windows.h>//调用sleep
//#include <stdlib.h>//调用system
//int main()
//{
//	char text[16] = "I Love China!!!";//最终字符
//	char fade[16] = "***************";//遮挡字符串.不要误写成15，\0也占一个字符的位置
//	int left = 0;//左边界
//	int right = strlen(text) - 1;//右边界.如果使用sizeof，则是减二，因为会把字符串中\0也当成一位字符
//	for (left = 0, right = strlen(text) - 1; left <= right; left++, right--)
//	{
//		fade[left] = text[left];
//		fade[right] = text[right];
//		printf("%s\n", fade);
//		Sleep(1000);//使每次循环输出延缓1000秒
//		system("cls");//每次循环结果清空；
//	}
//	return 0;
//}



//[模拟登录]
//#include <stdio.h>
//#include <string.h>
//int main()
//{
//	int n = 1;//循环变量
//	printf("请输入密码：");
//	for (n = 1; n <= 3; n++)
//	{
//		char password[50] = { '0' };//我们可以假设密码是abcdef
//		scanf("%s", password);//只有字符串数组是不用写&的
//		if (strcmp(password, "abcdef") == 0)//两字符串完全相等时输出的是0
//		{
//			printf("登录成功\n");
//			break;
//		}
//		else if (password != "abcdef" && n != 3)//防止第三次错误时输出
//		{
//			printf("密码错误，还剩%d机会，请重新输入密码：\n", (3-n));
//		}
//		else if (password != "abcdef" && 3 == n)
//		{
//			printf("你已经输错三次密码，账户被锁定\n");
//		}
//	}
//	return 0;
//
//}
