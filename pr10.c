////[P5709]
// #include <stdio.h>
//#include <math.h>
//
//int main() {
//	int m = 0, t = 0, s = 0;
//	scanf("%d%d%d", &m, &t, &s);
//	if (0 == t) {
//		printf("0\n");
//		return 0;
//	}
//	int left = m - (int)ceil((double)s / t);
//	if (left < 0) {
//		printf("0\n");
//		return 0;
//	}
//	printf("%d\n", left);
//	return 0;
//}

////[P5710]
////性质 1：是偶数；
////性质 2：大于 4 且不大于 12。
////小 A 喜欢这两个性质同时成立的整数；Uim 喜欢这至少符合其中一种性质的整数；
////小 B 喜欢刚好有符合其中一个性质的整数；正妹喜欢不符合这两个性质的整数。
////现在给出一个整数 x，请问他们是否喜欢这个整数？
//
//#include <stdio.h>
//#define CONDITION ((n % 2 == 0) + ((n > 4) && (n <= 12)))
//int main() {
//	int n = 0;
//	int arr[4] = { 0 };
//	scanf("%d", &n);
//	if (CONDITION == 2) {
//		arr[0] = 1;
//	}
//	if (CONDITION >= 1) {
//		arr[1] = 1;
//	}
//	if (CONDITION == 1) {
//		arr[2] = 1;
//	}
//	if (CONDITION == 0) {
//		arr[3] = 1;
//	}
//	int i = 0;
//	for (i = 0; i < 4; i++) {
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}


////[P5711]
////普通闰年：公历年份是 4 的倍数，且不是 100 的倍数的，为闰年（如 2004 年、2020 年等就是闰年）。
////世纪闰年：公历年份是整百数的，必须是 400 的倍数才是闰年（如 1900 年不是闰年，2000 年是闰年）。
////输入一个正整数 n，表示年份。
////输出一行。如果输入的年份是闰年则输出 1，否则输出 0。
//#include <stdio.h>
//
//int main() {
//	int n = 0;
//	scanf("%d", &n);
//	if (n % 4 == 0 && (n % 100 != 0 || n % 400 == 0)) {
//		printf("1\n");
//	}
//	else {
//		printf("0\n");
//	}
//	return 0;
//}


////BMI 指数是国际上常用的衡量人体胖瘦程度的一个标准，其算法是
////不同体型范围与判定结果如下：
////小于 18.5：体重过轻，输出 Underweight；
////大于等于 18.5 且小于 24：正常体重，输出 Normal；
////大于等于 24：肥胖，不仅要输出 BMI 值（使用 cout 的默认精度），然后换行，还要输出 Overweight；
////对于非 C++ 语言，在输出时，请四舍五入保留六位有效数字输出，如果小数部分存在后缀 0，不要输出后缀 0。
//#include <stdio.h>
//#include <math.h>
//
//float BMI(float m, float h) {
//	return m / h / h;
//}
//
//int main() {
//	float m = 0.0f, h = 0.0f;
//	scanf("%f%f", &m, &h);
//	float ret =BMI(m, h);
//	if (ret < 18.5) {
//		printf("Underweight\n");
//	}
//	else if (ret < 24) {
//		printf("Normal\n");
//	}
//	else {
//		printf("%.6g\n", ret);
//		printf("Overweight\n");
//	}
//	return 0;
//}


////[三数交换]
//#include <stdio.h>
//#include <stdlib.h>
//
//int cmp(const void* e1, const void* e2) {
//	return *(int*)e1 - *(int*)e2;
//}
//
//int main() {
//	int arr[3] = { 0 };
//	scanf("%d%d%d", &arr[0], &arr[1], &arr[2]);
//	qsort(arr, 3, sizeof(int), cmp);
//	printf("%d %d %d", arr[0], arr[1], arr[2]);
//	return 0;
//}


////[月份天数]
//#include <stdio.h>
//
//int Is_big_month(int m) {
//	int m31[7] = { 1,3,5,7,8,10,12 };
//	int m30[4] = { 4,6,9,11 };
//	int i = 0;
//	for (i = 0; i < 4; i++) {
//		if (m == m30[i]) {
//			return 0;
//		}
//	}
//	for (i = 0; i < 7; i++) {
//		if (m == m31[i]) {
//			return 1;
//		}
//	}
//	return -1;
//}
//
//int Is_leap_year(int y) {
//	if (y % 4 == 0 && (y % 100 != 0 || y % 400 == 0)) {
//		return 1;
//	}
//	else {
//		return 0;
//	}
//}
//
//int main() {
//	int y = 0, m = 0;
//	scanf("%d%d", &y, &m);
//	int ret = Is_big_month(m);
//	int ry = Is_leap_year(y);
//	if (1 == ret) {
//		printf("31\n");
//		return 0;
//	}
//	else if (0 == ret) {
//		printf("30\n");
//		return 0;
//	}
//	else {
//		if (1 == ry) {
//			printf("29\n");
//			return 0;
//		}
//		else {
//			printf("28\n");
//			return 0;
//		}
//	}
//	return 0;
//}

//#include <stdio.h>
//int main() {
//    char ch, * pc = "C language program.", * p;
//    printf("Enter a character:");
//    scanf("%c", &ch);
//    p = pc;
//    while (*p != '\0' && *p != ch) p++;
//    if (*p == ch)
//        printf("The character %c is %dth.\n", ch, p - pc + 1);
//    else
//        printf("The character %c not found.\n", ch);
//    return 0;
//}

//#include <stdio.h>
//
//void f(char** n) {
//    printf("%s", *++n);
//}
//
//int main() {
//    char* a[] = { "BASIC", "FORTRAN", "COBOL" };
//    char** m;
//    m = a;
//    f(m);
//    return 0;
//}

//#include <stdio.h>
//
//int my_strcmp(const char* str1, const char* str2) {
//    while (*str1 != '\0' && *str2 != '\0') {
//        if (*str1 != *str2) {
//            return *str1 - *str2;
//        }
//        str1++;
//        str2++;
//    }
//    return *str1 - *str2;
//}
//
//int main() {
//    char str1[10] = {0}, str2[10] = {0};
//    printf("请输入第一个字符串: ");
//    scanf("%s", str1);
//    printf("请输入第二个字符串: ");
//    scanf("%s", str2);
//    int result = my_strcmp(str1, str2);
//    if (result == 0) {
//        printf("两个字符串相等。\n");
//    }
//    else if (result > 0) {
//        printf("第一个字符串大于第二个字符串。\n");
//    }
//    else {
//        printf("第一个字符串小于第二个字符串。\n");
//    }
//    return 0;
//}

//#include <stdio.h>
//
//int main() {
//    char text[10];
//    int uppercase = 0, lowercase = 0, digits = 0, spaces = 0, others = 0;
//
//    printf("请输入一行文字: ");
//    gets(text); // 注意：gets 不安全，建议用 fgets，但题目未限制可暂用
//
//    for (int i = 0; text[i] != '\0'; i++) {
//        if (text[i] >= 'A' && text[i] <= 'Z') {
//            uppercase++;
//        }
//        else if (text[i] >= 'a' && text[i] <= 'z') {
//            lowercase++;
//        }
//        else if (text[i] >= '0' && text[i] <= '9') {
//            digits++;
//        }
//        else if (text[i] == ' ' || text[i] == '\t') {
//            spaces++;
//        }
//        else {
//            others++;
//        }
//    }
//
//    printf("大写字母数: %d\n", uppercase);
//    printf("小写字母数: %d\n", lowercase);
//    printf("数字字符数: %d\n", digits);
//    printf("空格或换行符数: %d\n", spaces);
//    printf("其他字符数: %d\n", others);
//
//    return 0;
//}

//#include <stdio.h>
//#include <string.h>
//
//#define N 5 
//#define LEN 20 
//
//void sort_str(char str[][LEN], int n) {
//    char temp[LEN];  
//    for (int i = 0; i < n - 1; i++) {
//        for (int j = 0; j < n - 1 - i; j++) {
//            if (strcmp(str[j], str[j + 1]) < 0) {
//                strcpy(temp, str[j]);
//                strcpy(str[j], str[j + 1]);
//                strcpy(str[j + 1], temp);
//            }
//        }
//    }
//}
//
//int main() {
//    char str[N][LEN]; 
//    printf("请输入5个字符串：\n");
//    for (int i = 0; i < N; i++) {
//        scanf("%s", str[i]); 
//    }
//    sort_str(str, N); 
//    printf("按从大到小排序后的字符串：\n");
//    for (int i = 0; i < N; i++) {
//        printf("%s\n", str[i]);
//    }
//    return 0;
//}

