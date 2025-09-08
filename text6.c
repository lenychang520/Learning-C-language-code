#define _CRT_SECURE_NO_WARNINGS//避免scanf等函数出现安全警告.这个宏定义应该放在顶上。
#include <stdio.h>



////[打印1到10]
//int main()
//{
//	int i = 1;
//	while (i <= 10)
//	{
//		if (i == 5)
//		{
//			continue;
//		}//continue是跳过该种循环的后续步骤，然后继续下一次循环。如果这是break，则是终止整个循环。
//		printf("%d\n", i);
//		i++;
//	}
//	return 0;
//}



////[getchar和putchar的初试]
//int main()
//{
//	int ch = getchar();//把输入的以整数的形式放到ch里,getchar()返回的是一个整型。这是因为当遇到文件末尾或者出错的时候，getchar()返回EOF。而EOF是一个整型常量，它的值是-1。
//	                   //如果用char，则char储存不了-1，因为-1是一个整形。
//	return 0;
//}



////[scanf的返回值]
//int main()
//{
//	int a;
//	int b;
//	printf("请输入两个数字：");
//	int ret = scanf("%d%d", &a, &b);
//	printf("a = %d, b = %d\n", a, b);
//	printf("ret = %d\n", ret);
//	return 0;
//}



////[scanf的返回值]
//int main()
//{
//	int a;
//	int b;
//	printf("请输入两个数字：");
//    scanf("%d%d", &a, &b);
//	int ret = getchar();
//	putchar (ret);//getchar和putchar都是有括号的
//	return 0;
//}



////[getchar和scanf的搭配]
//int main()
//{
//	char pasw[20] = {0};
//	printf("请输入密码：");
//	scanf("%s", pasw);
//	printf("请确认密码（Y/N）：");
//	while ('\n' != getchar())
//	{
//		;
//	}//这个循环是为了将输入缓冲区中scanf未读取的数据去掉，使下面的getchar()不会错读取到scanf未读取的数据。
//	//也有将这个循环弄成getchar（）；的，但这是一个很差劲的代码，因为这个代码不能解决scanf未能读取完全数据的情况。
//	int ensure = getchar();//将输入的确认结果储存到ensure里面
//	if ('Y' == ensure)
//	{
//		printf("密码正确");
//	}
//	if ('N' == ensure)
//	{
//		printf("密码错误");
//	}
//	return 0;
//}



////[只打印数字]
//int main()
//{
//	char ch = '\0';
//	while ((ch = getchar()) != EOF)//这里要记得给ch = getchar()加上括号，！=的优先级比赋值式高，会使得错误拆分。
//	{
//		if (ch < '0' || ch > '9')//将0和9都用字符的类型，这样它就被转化成了ASCII值了，从而实现大小比较，进而实现范围控制。
//		{
//			continue;
//		}
//		putchar(ch);
//	}
//	return 0;
//}



////[转换ASCII值为对应字符]
//int main()
//{
//	char num[] = { 73,32,99,97,110,32,100,111,32,105,116,33,'\0'};//通过以char+数组，来使得ASCII数字转换成字符。
//	printf("%s", num);
//	return 0;
//}



////[转换ASCII值为对应字符(while循环版)]
//int main()
//{
//	int num[] = { 73,32,99,97,110,32,100,111,32,105,116,33 };
//	int i = 0;
//	int n = sizeof(num) / sizeof(num[0]);//总的大小除以单个的大小就等于总数，即数组中的数据的个数n。
//		while (i < n)
//		{ 
//			printf("%c", num[i]);
//			i++;
//		}//用到数组和数组的下标来实现逐个的转换。
//	return 0;
//}



////[出生日期的输入与输出](未完)
//int main()
//{
//	char birthdate[] = { 0 };//用数组来将输入数字一个一个分隔开
//	scanf("%s", birthdate);
//	int i = 0, a = 0, b = 0, c = 0;//i是数组的下标
//	printf("%d", a)
//	while ()
//
//	return 0;
//}