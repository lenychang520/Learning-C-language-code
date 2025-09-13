#define _CRT_SECURE_NO_WARNINGS//避免scanf等函数出现安全警告.这个宏定义应该放在顶上。


//[参数调换]
#include <stdio.h>

void exchange(int* px, int* py)
{
	int z = *px;//把a的值给z
	*px = *py;//把b的值给a
	*py = z;//把z(a)的值给b
}

int main()
{
	int a = 0, b = 0;//两个实参
	scanf("%d %d", &a, &b);
	printf("%d %d\n", a, b);//未调换前
	exchange(&a, &b);
	printf("%d %d\n", a, b);//调换后
	return 0;
}