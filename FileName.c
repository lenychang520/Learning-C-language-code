//#include <stdio.h>
//void main()
//{
//    int x, y;
//    x = 2; y = 7;
//    printf("%d %d\n", x, y);          // 2 7
//    printf("%d %d\n", x++, y++);      // 2 7
//    printf("%d %d\n", ++x, ++y);      // 4 9
//    printf("%d %d\n", y-- - x, --y - x);  // 5 3
//    printf("%d %d\n", x++ + y, ++x + y);  // 11 13
//}


//#include <stdio.h>
//void main()
//{
//    int x, y, z;
//    x = 2; y = 7; z = 8;
//    printf("%d\t%d\t%d\t%d\n", y / x, y % x, z / x, z % x);  // 3 1 4 0
//    printf("%d\n", x + y - z);                       // 1
//    printf("%d\n", ++x * ++x);                       // 12
//}



//#include <stdio.h>
//void main()
//{
//    int x, y;
//    char ch1 = 'd', ch2 = 'D';
//    x = ch1 - 3;
//    y = ch1 - '3';
//    printf("%d\t%c\t%d\t%c\n", ch1, ch1, ch2, ch2);  // 100 d 68 D
//    printf("%d\t%c\t%d\t%c\n", x, x, y, y);          // 97 a 97 a
//}



//#include <stdio.h>
//void main()
//{
//    int a, b, c;
//    a = 2; b = 5; c = 8;
//    printf("%d\t", a > b);
//    printf("%d\t", c - a >= b);
//    printf("%d\t", a != c - b - 1);
//    printf("%d\t", '0' > 0);
//}

//#include <stdio.h>
//void main()
//{
//    double x = 2.58, y = 4.66;
//    int a = 2, b = 9;
//    printf("%d\t%d\t%d\t%d\n", (int)x, (int)y, (int)x + (int)y, (int)(x + y));
//    printf("%f\t%f\n", a - x, (float)(b - a));
//    printf("%d\n", a + b * (int)x % 4);
//    printf("%f\n", y - x + (float)b / 2);
//    printf("%f\n", (float)(b + a) / 2 + (int)y / (int)x);
//}



//#include <stdio.h>
//void main()
//{
//    int x = 3, y = 11;
//    int a = 4, b = 9;
//    printf("%d\t", y /= x);  // y = 11 / 3 = 3 (y becomes 3)
//    printf("%d\t%d\n", x += y %= x--, y /= x);  // x=2, y=1, --x+=y%=x-- -> x=2, y=1, x=2+1=3, y=1/1=1
//    printf("%d\t%d\n", x, y);  // x=3, y=1
//    printf("%d\t%d\t%d\n", a ^ b, a | b, a & b);  // a^b=13, a|b=13, a&b=0
//    printf("%d\n", a *= b /= a);  // b=9/4=2, a=4*2=8
//    printf("%d\t%d\n", b, b << 4);  // b=2, b<<4=32
//}



//#include <stdio.h>
//void main()
//{
//    int x, y, z;
//    x = (2 * 4, 9 - 4, 2 * 3);  // x = 6
//    printf("%d\n", x);  // 6
//    y = ((x = 3 * 6, x + 12, x - 20), x * 2 - 6);  // x=18, y=30
//    printf("%d\t%d\n", x, y);  // 18 30
//    z = (x > y) ? x / y : x % y;  // z = 18 % 30 = 18
//    printf("%d\n", z);  // 18
//    printf("%d\n", (1, 3, 5) == (2, 4, 5));  // 5 == 5 -> 1
//}



//#include <stdio.h>
//void main()
//{
//    int x = 1, y = 5, z = 8;
//    printf("%d\t", x && y && z);  // 1 && 5 && 8 -> 1
//    printf("%d\t", !x == !y);  // !1 == !5 -> 0 == 0 -> 1
//    printf("%d\t", !x || y && !z);  // !1 || 5 && !8 -> 0 || 5 && 0 -> 0 || 0 -> 0
//    printf("%d\n", --x && --y || z == '8');  // x=0, y=4, z=='8' -> 0 && 0 || 0 -> 0
//}





















//#include <stdio.h>
//int main()
//{
//    double a, b, c, s, v;
//    printf("input a, b, c:\n");
//    scanf_s("%lf %lf %lf", &a, &b, &c);
//    s = a * b;
//    v = a * b * c;
//    printf("a=%.6lf  b=%.6lf  c=%.6lf\n", a, b, c);
//    printf("s=%.6lf\n", s);
//    printf("v=%.6lf\n", v);
//    return 0;
//}



//#include <stdio.h>
//void main()
//{
//    char c1, c2;
//    int n1, n2;
//    c1 = getchar();
//    c2 = getchar();
//    n1 = c1 - '0';
//    n2 = n1 * 10 + (c2 - '0');
//    printf("%d\n", n2);
//}


//#include <stdio.h>
//void main()
//{
//    int i, j;
//    int x, y;
//    scanf_s("i=%d, j=%d", &i, &j);
//    scanf_s("%d%d", &x, &y);
//    printf("i=%d, j=%d\n", i, j);
//    printf("%4d%4d\n", x, y);
//}


//#include "stdio.h"
//void main()
//{
//    int a, b, c;
//    int t;
//    scanf_s("%d%d%d", &a, &b, &c);
//    t = a; a = b; b = c; c = t;
//    printf("%d %d %d", a, b, c);
//}




////[综合题1]
//#include <stdio.h>
//
//int main()
//{
//	int i = 0;
//	for (i = 0; i <= 100; i++)
//	{
//		if (i % 3 == 0 && i % 7 != 0)
//		{
//			printf("%d ", i);
//		}
//	}
//	return 0;
//}


////[综合题2]
//#include <stdio.h>
//
//int main()
//{
//	int i = 0, n = 0, max = 0;
//	for (i = 0; i < 10; i++)
//	{
//		scanf("%d", &n);
//		if (n > max)
//		{
//			max = n;
//		}
//	}
//	printf("%d", max);
//	return 0;
//}


////[综合题3]
//#include <stdio.h>
//
//int main()
//{
//	int n = 0;
//	int count_mi = 0, count_po = 0, count_ze = 0;
//	while (scanf("%d", &n) == 1)
//	{
//		if (n > 0)
//		{
//			count_po++;
//		}
//		else if (n == 0)
//		{
//			count_ze++;
//		}
//		else
//		{
//			count_mi++;
//		}
//		if (getchar() == '\n')
//		{
//			break;
//		}
//	}
//	printf("正数有%d个，负数有%d个，0有%d个\n", count_po, count_mi, count_ze);
//	return 0;
//}


////[综合题4]
//#include <stdio.h>
//
//int main()
//{
//	int i = 0;
//	for (i = 100; i < 1000; i++)
//	{
//		int a = i / 100;
//		int b = i / 10 % 10;
//		int c = i % 10;
//		if (a * a * a + b * b * b + c * c * c == 216)
//		{
//			printf("%d ", i);
//		}
//	}
//	return 0;
//}


////[综合题5]
//#include <stdio.h>
//#include <string.h>
//
//int main()
//{
//	char input[1000] = { 0 };
//	int c_w = 0, c = 0;
//	int i = 0;
//	fgets(input, 1000, stdin);
//	int sz = strlen(input) - 1;
//	for (i = 0; i < sz; i++)
//	{
//		if (input[i] >= 48 && input[i] <= 57)
//		{
//			c++;
//		}
//		else if ((input[i] >= 'a' && input[i] <= 'z') || (input[i]) >= 'A' && input[i] <= 'Z')
//		{
//			c_w++;
//		}
//		
//	}
//	printf("%d %d", c_w, c);
//	return 0;
//}


////[综合题6]
//#include <stdio.h>
//
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int i = 0;
//	for (i = 1; i <= n; i++)
//	{
//		if (n % i == 0)
//		{
//			printf("%d ", i);
//		}
//	}
//	return 0;
//}


////[综合题7]
//#include <stdio.h>
//
//double inverse_factorial(int n)
//{
//	if (0 == n)
//	{
//		return 1.0;
//	}
//	return (1.0 / n) * inverse_factorial(n - 1);
//}
//
//double price_e(int n)
//{
//	double sum = 0;
//	int i = 0;
//	for (i = 0; i < n; i++)
//	{
//		sum += inverse_factorial(i);
//	}
//	return sum;
//}
//
//int main()
//{
//	double ret = price_e(8);
//	printf("%.5lf", ret);
//	return 0;
//}



////[综合题8]
//#include <stdio.h>
//
//double pai(int n)
//{
//	double sum_quarter = 0;
//	int i = 0, j = 0;
//	for (i = 1, j = 1; i <= n; i++, j += 2)
//	{
//		if (i & 1)//若为奇数
//		{
//			sum_quarter += 1.0 / j;
//		}
//		else
//		{
//			sum_quarter -= 1.0 / j;
//		}
//	}
//	return sum_quarter * 4;
//}
//
//int main()
//{
//	double ret = pai(100);
//	printf("%.6lf", ret);
//	return 0;
//}



////[综合题9]
//#include <stdio.h>
//
//int main()
//{
//	int a = 0, n = 0;
//	int sum = 0;
//	scanf("%d%d", &a, &n);
//	int i = 0;
//	int temp = 0;
//	for (i = 0; i < n; i++)
//	{
//		temp = temp * 10 + 1;
//		sum += a * temp;
//	}
//	printf("%d", sum);
//	return 0;
//}


////[综合题10]
//#include <stdio.h>
//
//int main()
//{
//	int male = 0, female = 0, child = 0;
//	for (male = 0; male < 13; male++)
//	{
//		for (female = 0; female < 17; female++)
//		{
//			for (child = 0; child <= 100; child++)
//			{
//				if (male + female + child == 50 && male * 4 + female * 2 + 1 / 2 * child == 50)
//				{
//					printf("male = %d, female = %d, child = %d\n", male, female, child);
//				}
//			}
//		}
//	}
//
//	return 0;
//}







////[sy501.c]
//#include <stdio.h>
//
//void main()
//{
//    int s, i;
//    s = 0; /* 第 5 行 */
//    for (i = 1; i <= 100; i++) // 填空处：初始化i为1，循环条件为i小于等于100，每次循环后i自增1
//        s = s + i;
//    printf("1+...+100=%d\n", s);
//}


//#include <stdio.h>
//
//void main()
//{
//    int i, n, sum = 0;
//    scanf("%d", &i);
//    n = i;
//    while (i <= 10)
//    {
//        sum += i;
//        i++;
//    }
//    printf("%d+...+10=%d", n, sum);
//}


//#include <stdio.h>
//
//void main()
//{
//    int i, n, sum = 0;
//    scanf("%d", &i);
//    n = i;
//    do
//    {
//        sum += i;
//        i++;
//    } while (i <= 10);
//    printf("%d+...+10=%d", n, sum);
//}



//#include <stdio.h>
//
//void main()
//{
//    int data;
//    scanf("%d", &data); // 输入 12345，data = 12345
//    while (data) // 循环条件：data 不为 0
//    {
//        printf("%d, ", data % 10); // 输出 data 对 10 取余的结果（即个位数）
//        data = data / 10; // 将 data 除以 10，去掉个位数
//    }
//}


//#include <stdio.h>
//
//void main()
//{
//    long int f1, f2;
//    int i, n;
//    printf("Input n:");
//    scanf("%d", &n);
//    f1 = f2 = 1; // 初始化前两个斐波那契数
//    for (i = 1; i < n; i++) // 循环 n-1 次
//    {
//        printf("%ld\t%ld\n", f1, f2); // 输出当前的 f1 和 f2
//        f1 = f1 + f2; // 计算下一个数
//        f2 = f2 + f1; // 计算再下一个数
//    }
//}


//#include <stdio.h>
//
//void main()
//{
//    int i, j, x;
//    for (i = 0, x = 0; i < 2; i++) // 外层循环，i 从 0 到 1
//    {
//        x++; // 每次外层循环开始时，x 自增1
//        for (j = 0; j < 3; j++) // 内层循环，j 从 0 到 2
//        {
//            if (j % 2) continue; // 如果 j 是奇数，则跳过本次循环剩余部分
//            x++; // 只有当 j 是偶数时才执行此语句
//        }
//        x++; // 每次外层循环结束时，x 自增1
//    }
//    printf("x=%d\n", x);
//}



//#include <stdio.h>
//
//void main()
//{
//    double sum = 0.0; // 使用 double 类型以获得更高精度
//    int i;
//
//    for (i = 1; i <= 100; i++)
//    {
//        if (i % 2 == 0) // 如果 i 是偶数
//        {
//            sum = sum - 1.0 / i; // 减去 1/i
//        }
//        else // 如果 i 是奇数
//        {
//            sum = sum + 1.0 / i; // 加上 1/i
//        }
//    }
//
//    printf("The result is: %lf\n", sum);
//}



