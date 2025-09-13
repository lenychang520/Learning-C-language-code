#define _CRT_SECURE_NO_WARNINGS//避免scanf等函数出现安全警告.这个宏定义应该放在顶上。


////[参数调换]
//#include <stdio.h>
//
//void exchange(int* px, int* py)
//{
//	int z = *px;//把a的值给z
//	*px = *py;//把b的值给a
//	*py = z;//把z(a)的值给b
//}
//
//int main()
//{
//	int a = 0, b = 0;//两个实参
//	scanf("%d %d", &a, &b);
//	printf("%d %d\n", a, b);//未调换前
//	exchange(&a, &b);
//	printf("%d %d\n", a, b);//调换后
//	return 0;
//}


////[strcpy函数]
//#include <stdio.h>
//#include <string.h>//调用strcpy
//int main()
//{
//	char arr1[20] = { 0 };
//	char arr2[] = { "I Love China" };
//	strcpy(arr1, arr2);//将arr2的内容copy到arr1里面
//	printf("%s\n%s\n", arr1, arr2);
//	return 0;
//}



#include <stdio.h>

void exchange(int x, int y)
{
	int z = 0;//空变量
	z = x;
	x = y;
	y = z;
}

int main()
{
	int a = 0, b = 0;//要交换的变量
	scanf("%d %d", &a, &b);
	printf("%d %d\n", a, b);//记录原始的a、b值
	exchange(a,b);
	printf("%d %d\n", a, b);//检验交换成功与否
	return 0;
}