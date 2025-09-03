#define _CRT_SECURE_NO_WARNINGS//避免scanf等函数出现安全警告.这个宏定义应该放在顶上。
#include <stdio.h>


////[typedef的运用]
//typedef int z;//typedef其实就是type define，也就是给类型来一个简化的名字，以免后续使用它时输入麻烦，代码冗余。
//int main()
//{
//	z a = 110;
//	printf("%d", a);
//	return 0;
//}



////[函数的重复练习]
//int Add(int x , int y)
//{
//	return (x + y);
//}
//int main()
//{
//	int a = 0;
//	int b = 0;
//	printf("请输入两个需要相加的整数，并用空格隔开\n");
//	scanf("%d %d", &a , &b);
//	int sum = Add(a , b);
//	printf("%d\n", sum);
//	return 0;
//}



////[static对局部变量的修饰]
//void test()//void代表此函数无须返回值。
//{
//	static int a = 1;//C语言储存时分栈区、堆区、静态区。局部变量一般是储存在栈区的，但如果局部变量所在的函数运行结束，栈区内的局部变量一般会清除。而static可以将
//	                 //局部变量的数据变成静态变量存到静态区，这时候静态变量不会随着所在的函数运行结束而结束，它的生命周期得到了延长。否则这段代码输出结果应该是十个2。
//	//【而当static修饰全局变量的时候，则全局变量不能被外部引用】
//	a++;
//	printf("%d", a);
//}

//int main()
//{
//	int i = 0;
//	while (i < 10)//这里一定不要加上分号，否则循环会终止。
//	{
//		test();
//		i++;
//	}

//	return 0;
//}



////[变量的作用域]
//int main()
//{
//	int i = 0;
//	while (i < 1)
//	{
//		i++;
//	}
//	printf("%d",i);//为什么打印出来的是1而不是0？因为i并不是while里面的一个变量，它的生命周期是main函数的生命，故而它的值会随着“i++”；而发生变化。i在while里面的时候才会使用后销毁。
//	return 0;
//}