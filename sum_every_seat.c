////[����һ�����ĸ�λ֮��]���ݹ�棩1
//#include <stdio.h>
//#include <string.h>
//
//int DigitSum(char num[], int n)
//{
//    if (0 == n)//�жϵݹ�
//    {
//        return 0;
//    }
//    return DigitSum(num, n - 1) + (num[n - 1] - '0');//��ȥ��0������Ϊnum���ַ������飬���ؽ������ASCII��ֵ������0�������ƽ��
//}
//
//int main()
//{
//    //����һ�����֣����䳤�ȡ�
//    char num[100] = "520";
//    scanf("%s", num);
//    int n = strlen(num);
//    int ret = DigitSum(num, n);
//    printf("%d", ret);
//    return 0;
//}



////[����һ�����ĸ�λ֮��]���ݹ�棩2
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