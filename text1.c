#define _CRT_SECURE_NO_WARNINGS//避免scanf等函数出现安全警告.这个宏定义应该放在顶上。
#include <stdio.h>

//int main()
//{
//	float a = 7.0;
//	int b = 2;
//	printf("%f",a/b );
//	return 0;
//}



//int main()
//{
//	int a = 7;
//	int b = ++a;
//	int c = 7;
//	int d = c++;
//	printf("%d\n%d\n", b, d);
//	return 0;
//}



//int main()
//{
//	int a = 20;
//	int b = 10;
//	int c = a < b ? a : b;
//	printf("%d", c);
//	return 0;
//}



int main()
{
	int a = 2;
	int b = 4;
	int c = 0;
	int d = (a = a + 1, c = b + a, c + 1  );
	printf("%d", d);
	return 0;
}