#define _CRT_SECURE_NO_WARNINGS//避免scanf等函数出现安全警告.这个宏定义应该放在顶上。
#include <stdio.h>



////[调试查地址]
//int main()
//{
//	int a = 10;
//	&a;//按F10，在调试、窗口、监视里可以找到&a的地址
//	//a在此处的地址是0x0000000000000004。为什么有0x呢？这是十六进制的标志。
//	return 0;
//}



////[地址打印]
//int main()
//{
//	int a = 10;
//	printf("%p\n", &a);//打印地址用%p，而且一定是&a而不是a，因为&才告诉地址。
//	return 0;
//}



////[指针变量的大小]
//int main()
//{
//	printf("%zu\n", sizeof(char*));//%zu是专门打印sizeof的结果的。
//	printf("%zu\n", sizeof(short*));
//	printf("%zu\n", sizeof(int*));
//	printf("%zu\n", sizeof(long*));//在64位系统上，指针变量都是8字节；32位系统上，指针变量都是4字节。
//	return 0;
//}



////[指针的初等使用]
//int main()
//{
//	int a = 0;
//	int* p = &a;//*是声明变量是指针，用指针来储存a变量的地址
//	*p = 20;//这里的*相当于侦探，照着地址反向追踪。其表达的是指针p所指的对象是多少，这里也就是将a改为了20。
//	printf("%d\n", a);
//	return 0;
//}



////[整除与余数]
//int main()
//{
//    int a = 0, b = 0;
//    scanf("%d %d", &a, &b);
//    int num1 = ((a) / (b)), num2 = a % b;
//    printf("%d %d", num1, num2);
//    return 0;
//}



////[计算分数的浮点数值]
//int main()
//{
//	double a = 0, b = 0;
//	scanf("%lf %lf", &a, &b);
//	printf("%.9f",((a)/(b)));
//	return 0;
//}



////[分段函数计算]
//// y={  x      x<1
////   | 2x - 1   1 <= x < 10
////   { 3x - 11  x >= 10
//int function(int x)
//{
//	int y = 0;
//	if (x < 1)
//	{
//		y = x;
//	}
//	else if (x < 10)//这里也可以用if (x >= 1 && x < 10)，&&用于条件判断，表示“并且”，只有左右两边的条件都为真时，整个表达式才为真。但不能
//		//写成if (1 <= x < 10)，它在C语言中并不能实现“x在1到10之间”的判断。
//		//在C语言里，1 <= x < 10 实际上会先判断 1 <= x，结果是0或1，然后再用这个结果和10比较，逻辑是错误的。
//	{
//		y = 2 * x - 1;
//	}
//	else
//	{
//		y = 3 * x - 11;
//	}
//	return y;
//}
//int main()
//{
//	int x = 0;
//	scanf("%d", &x);
//	int consequence = function(x);
//	printf("%d", consequence);
//	return 0;
//}



////[输出绝对值]
//int main()
//{
//	float a = 0;
//	scanf("%f", &a);
//	if (a < 0)
//	{
//		a = -a;//这里不能单单写成-a，因为-a只是一个表达式，并没有把结果赋值给a。那为什么可以a++；呢？因为a++是自增运算符，是对变量本身进行操作。
//	}
//	else
//	{
//		a = a;
//	}
//	printf("%.2f", a);
//	return 0;
//}



////[结构体]
//struct Lee
//{
//	float height;
//	char sex[10];
//	float  weight;
//	int tele;
//};//这里的分号绝对不能忘掉！不能省略！
//
//int main()
//{
//	struct Lee s = {178,"male",80.1,14596238451};
//	printf("%f\n %s\n %f\n %d\n",s.height,s.sex,s.weight,s.tele);//调取结构体的时候必须靠名加.加属性
//	return 0;
//}



////[结构体和指针]
//struct Lee
//{
//	float height;
//	char sex[10];
//	float  weight;
//	int tele;
//};
//void print(struct Lee* ps)
//{
//	printf("%f\n %s\n %f\n %d\n", (*ps).height, (*ps).sex, (*ps).weight, (*ps).weight);//这里的(*ps).可以替换成ps->。
//}
//int main()
//{
//	struct Lee s = { 178,"male",80.1,14596238451 };
//	print(&s);
//	return 0;
//}