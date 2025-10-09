//[递归实现n的k次方]
#include <stdio.h>

double Power(int n, int k)
{
	if (k > 0)
	{
		return n * Power(n, k - 1);
	}
	else if (0 == k)
	{
		return 1;
	}
	else
	{
		return n * Power(n, -k);
	}
}

int main()
{
	int n = 0, k = 0;
	scanf("%d %d", &n, &k);
	double ret = Power(n, k);
	printf("%f", ret);
	return 0;
}