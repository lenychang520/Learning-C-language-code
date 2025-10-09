////[计算一个数的各位之和]（递归版）1
//#include <stdio.h>
//#include <string.h>
//
//int DigitSum(char num[], int n)
//{
//    if (0 == n)//中断递归
//    {
//        return 0;
//    }
//    return DigitSum(num, n - 1) + (num[n - 1] - '0');//减去‘0’是因为num是字符串数组，返回结果会是ASCII码值，减‘0’则可以平衡
//}
//
//int main()
//{
//    //输入一个数字，求其长度。
//    char num[100] = "520";
//    scanf("%s", num);
//    int n = strlen(num);
//    int ret = DigitSum(num, n);
//    printf("%d", ret);
//    return 0;
//}



////[计算一个数的各位之和]（递归版）2
#include <stdio.h>

int DigitSum(int n)
{
	if (0 == n)
	{
		return 0;
	}
	return DigitSum(n / 10) + n % 10;
}

int main()
{
	unsigned int n = 0;
	scanf("%d", &n);
	int ret = DigitSum(n);
	printf("%d", ret);
	return 0;
}