#define _CRT_SECURE_NO_WARNINGS//避免scanf等函数出现安全警告.这个宏定义应该放在顶上。
#include <stdio.h>

////这是一个输入两个整数并输出它们和的例子。
//int main ()
//{
//	int num1 = 0;
//	int num2 = 0;//这里等于0是为了返回一个初始值，相当于初始化num1和num2为一个确定的值，后续的scanf会覆盖这个值。
//	scanf("%d %d", &num1, &num2);
//	int sum = num1 + num2;//这行代码不能放在scanf之前，放在前面会因为num1和num2的值为0，导致sum的值也会永远是0。
//	printf("The sum is: %d\n", sum);
//	return 0;
//}



////这是用数组来储存字符串的例子，输出结果是Hello World!。
//int main ()
//{ 
// char sayhi[] = "Hello World!";//C语言中没有字符串类型，字符串是用字符数组来表示的。[]中没有数字表示数组的大小，编译器会根据字符串的长度自动分配空间。
//	printf("%s", sayhi);
//	return 0;
//}



////这是一个用“字符串比较函数strcmp”来比较两个字符串的例子。(用了if和else语句)
//int main()
//{
//	char choice[] = "错误";
//	printf("选择努力还是摆烂？\n");
//	scanf("%s", choice);
//	if (strcmp(choice, "努力") == 0)/*为什么没引用头文件string.h也能用strcmp函数呢？
//		因为stdio.h中corecrt.h包含了string.h。但仍建议引用string.h头文件，以防止有些编译器不包含corecrt.h。
//		strcmp是string compare的缩写,用于字符串的比较。如果两个字符串相等，返回0；如果第一个字符串大于第二个字符串，返回正数；如果第一个字符串小于第二个字符串，返回负数。
//		其格式为strcmp(字符串1, 字符串2)。
//		*/
//	
//	{
//		printf("你的未来一定可以很好\n");
//	}
//	else
//	{
//		printf("不认真的话可是取不到好成绩的\n");
//	}
//	return 0;
//}



////【这里插一段自己的感悟】
// C语言里面，自己开大括号的函数，如
// while ()
// {
// 
// }
// 它们的小括号内填的东西，有很多相当于是条件（规则），只有符合条件时，才会执行大括号内的代码，但main函数可以不填。
//要么呢里面就是参数



////这是一段while循环的示例
//int main()
//{
//	int grade = 0;
//	printf("你的大学生活开始了\n");
//	while (grade < 90)
//	{
//		printf("你的分数为：%d\n", grade);
//		grade++;//++表示增加1，其他的还有--表示减少1，+=表示增加指定的数，-=表示减少指定的数。
//	}
//	if (grade >= 90)
//	{
//		printf("你的分数为：%d\n",grade,"获得保研名额\n");
//	}
//	else//else部分代码其实是冗余，没有执行机会。如若去除，不影响其执行。
//	{
//		printf("请继续努力\n");
//	}
//	return 0;
//}



////函数概念示例
//int add(int x, int y)//括号内的是函数的两个参数，参数需要指明类型。
//{
//	int z = 0;//这里不需要初始化x和y，因为x和y从main函数里输出后其实相当于一个定值。
//	z = x + y;//z不能写成intz=x+y;否则会重定义z。C语言中变量只能定义一次。
//	return z;
//}//这段定义了一个add函数，其实这就是函数的形式，实际上int main也是一个函数。函数相当于一个法则，你予以定义，它就会加工得来的数据，输出法则转换后的数据。
////其实add函数可以优化：
////int add (int x,int y)
////{
////	 return (x + y);
////}
//
//int main()
//{
//	int num1 = 0;
//	int num2 = 0;
//	scanf("%d %d", &num1, &num2);
//	int sum = add(num1, num2);//小括号指明函数参数的来源。
//	printf("%d", sum);
//	return 0;
//}



////谨记这些占的大小char1,int4,float4,double8,long4,short2,long long8,long double8(windows),12(某些嵌入式系统或特殊架构上),16(Linux),short2.
//#include <stdbool.h>
//int main()
//{
//	printf("%d\n", sizeof(int));
//	printf("%d\n", sizeof(char));
//	printf("%d\n", sizeof(float));
//	printf("%d\n", sizeof(double));
//	printf("%d\n", sizeof(long));
//	printf("%d\n", sizeof(short));
//	printf("%d\n", sizeof(long long));
//  printf("%d\n", sizeof(long double));
//  printf("%d\n", sizeof(short));
//  printf("%d\n", sizeof(void));//void类型没有大小，sizeof(void)会报错。
//  printf("%d\n", sizeof(bool));//bool类型不是C语言的内置类型，而是C++的内置类型。在C语言中使用bool需要包含头文件<stdbool.h>，否则会报错。
//	return 0;
//}



//[格式控制]左对齐和输出占用字符示例
//int main()
//{
//    int num1 = 0;
//    int num2 = 0;
//    int num3 = 0;//其实这一部分可以这样写int num1 = 0,num2 = 0,num3 = 0;
//    scanf("%d %d %d", &num1, &num2, &num3);
//    printf("%-8d%-8d%-8d", num1, num2, num3);//在d前加-表明左对齐（默认右对齐），8是表明输出占用8个字符
//    return 0;
//}



////[精度控制]浮点数保留几位
//int main()
//{
//	float num = 0;
//	scanf("%f", &num);
//	printf("%.3f", num);//.3表示保留三位小数
//	return 0;
//}



////[精度控制]double类型保留12位小数
//int main()
//{
//	double num = 0;
//	scanf("%lf", &num);//注意：在scanf中，double需要用%lf，long double则用%Lf。但在printf中，double和float都可以用%f，long double用%Lf
//	printf("%.12f", num);
//	return 0;
//}



////[作业]int和short的大小
//int main()
//{
//	int x = 0;
//	short y = 0;
//	printf("%d %d", sizeof(x), sizeof(y));
//	return 0;
//}


////[作业2]float和double的大小
//int main()
//{
//	float num1 = 0;
//	double num2 = 0;
//	printf("%d %d", sizeof(float), sizeof(double));
//	return 0;
//}



////[作业3]简单计算
//int main()
//{
//	int a = 40, c = 212;
//	int sum = (-8 + 22) * a - 10 + c / 2;
//	printf("%d", sum);
//	return 0;
//}







////[数组]数组下标的循环应用
//int main()
//{
//	int arr[10] = { 0,1,2,3,4,5,6,7,8,9 };//数组从左到右从0开始
//	int i = 0;
//	while (i < 8)
//	{
//		printf("%d不够大\n", arr[i]);
//		i++;
//	}
//	if (i >= 8)
//	{
//		printf("%d够大了\n", arr[i]);
//	}
//	return 0;
//}