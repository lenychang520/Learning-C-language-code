#define _CRT_SECURE_NO_WARNINGS//避免scanf等函数出现安全警告.这个宏定义应该放在顶上。




////[出生日期的输入与输出]
//int main()
//{
//	int year = 0, month = 0, date = 0;
//	scanf("%4d%2d%2d", &year, &month, &date);//类似于分数保留几位，scanf也是靠这种形式来保留读取的几位
//	printf("year=%d\n", year);
//	printf("month=%02d\n", month);//加02是告知两位中若不及两位，用0在前面填一位
//	printf("date=%02d\n", date);
//	return 0;
//}



////[学生基本信息输入输出]
//int main()
//{
//	float sub1 = 0.0f, sub2 = 0.0f, sub3 = 0.0f;//初始化都要注意这种加后缀，点明初始化的值为哪种类型，避免额外的类型转换。
//	//不需要加后缀的记住int，short是0，double是0.0，否则unsigned，则要加U，long则要加L，longlong则要加LL
//	int id = 0;
//	scanf("%d;%f,%f,%f", &id, &sub1, &sub2, &sub3);//输入的;一定得是英文格式的;因为命令符可能会默认使用中文字符，得注意切换
//	printf("The each subject score of No. %d, id is %.2f, %.2f, %.2f.", id, sub1, sub2, sub3);
//	return 0;
//}



////[printf的返回值]
//#include <stdio.h>
//int main()
//{
//	int pr = 0;
//	pr = printf("Hello world!");
//	printf("\n%d", pr);//在前面加一个\n来换行，这样避免在pr里加\n,因为加了\n会将pr的返回值由12变成13
//	return 0;
//}



////[转义字符]
//#include <stdio.h>
//int main()
//{
//	printf("printf(\"Hello World!\\n\")");//转义“”防止歧义，转义\n防换行
//	return 0;
//}



////[找最大数]
//#include <stdio.h>
//int main()
//{
//	int n1 = 0, n2 = 0, n3 = 0, n4 = 0;
//	int i = 1;//数组ch下标
//	scanf("%d %d %d %d", &n1, &n2, &n3, &n4);
//	int ch[] = { n1, n2, n3, n4 };
//	int max = ch[0];//先假设ch[0]是最大的数
//	while (i < 4)//while中数列的比较是常用的逐个数据参与循环的方式
//	{
//		if (ch[i] > max)
//		{
//			max = ch[i];//后有更大者，则替换，否则就保留原max
//		}
//		i++;//使比较逐个进行下去
//	}
//	printf("%d\n", max);
//	return 0;
//}



////[计算球的体积]
//#include <stdio.h>
//float V(float r)
//{
//	float pai = 3.1415926f;
//	float v = (4.0f / 3.0f) * pai * r * r * r;//除号两边不能都是整数，另外C语言中并没有内置幂运算符，不能将r * r * r写成r^3.
//	return v;
//}
//int main()
//{
//	float r = 0.0f;
//	scanf("%f", &r);
//	float result = V(r);
//	printf("%f", result);
//	return 0;
//}



//[BMI指数]
#include <stdio.h>
float bmi(float height, float weight)
{
	float point = weight / (height * height * 0.0001f);//bmi计算公式
	return point;
}
int main()
{
	float height = 0.0f, weight = 0.0f;
	scanf("%f %f", &weight, &height);
	float bmir = bmi(height, weight);
	printf("%f", bmir);
	return 0;
}