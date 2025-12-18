//#include <stdio.h>
//
//int main() {
//	printf("  *\n");
//	printf(" ***\n");
//	printf("*****\n");
//	printf(" ***\n");
//	printf("  *\n");
//	return 0;
//}



////[数字翻转]
//#include <stdio.h>
//#include <string.h>
//
//void swap(char num[], int sz) {
//	int left = 0, right = sz - 1;
//	while (left <= right) {
//		char temp = num[left];
//		num[left] = num[right];
//		num[right] = temp;
//		left++;
//		right--;
//	}
//}
//
//int main() {
//	char num[6] = { 0 };
//	scanf("%s", num);
//	int sz = strlen(num);
//	swap(num, sz);
//	printf("%s", num);
//	return 0;
//}



////[yyy上学]
//#include <stdio.h>
//#include <math.h>
//
//int main() {
//	int s = 0, v = 0;
//	scanf("%d%d", &s, &v);
//	float time = (s * 1.0) / v + 10;
//	int arrival = 480 - (int)ceil(time);
//	if (arrival >= 0) {
//		printf("%02d:%02d", arrival / 60, arrival % 60);
//	}
//	else {
//		printf("%02d:%02d", (1440 + arrival) / 60, (1440 + arrival) % 60);
//	}
//	return 0;
//}


////[洛谷B2029]
//#include <stdio.h>
//#include <math.h>
//
//int main() {
//	int a = 0, b = 0;
//	scanf("%d%d", &a, &b);
//	float v = a * 3.14 * b * b;
//	int n = (int)ceil(20000 / v);
//	printf("%d", n);
//	return 0;
//}


////[P1425]
//#include <stdio.h>
//
//int main() {
//	int n1 = 0, n2 = 0, m1 = 0, m2 = 0;
//	scanf("%d%d%d%d", &n1, &n2, &m1, &m2);
//	int time = (m1 * 60 + m2) - (n1 * 60 + n2);
//	printf("%d %d", time / 60, time % 60);
//	return 0;
//}


////[计算字符串长度]
//#include <stdio.h>
//#include <string.h>
//
//int main() {
//	char arr[50] = { 0 };
//	fgets(arr, 50, stdin);
//	int sz = strlen(arr);
//	printf("%d", sz);
//	return 0;
//}


//#include <stdio.h>
//
//int main() {
//    char* months[] = {
//        "January",   
//        "February",  
//        "March",     
//        "April",     
//        "May",       
//        "June",      
//        "July",      
//        "August",    
//        "September", 
//        "October",   
//        "November",  
//        "December"   
//    };
//    int n = 0;
//    scanf("%d", &n);
//    if (n >= 1 && n <= 12) {
//        printf("%s\n", months[n - 1]);
//    }
//    else {
//        printf("请输入1到12之间的数字\n");
//    }
//	return 0;
//}


//#include <stdio.h>
//#include <string.h>
//
//int main() {
//	char arr[] = "computer";
//	char* p = arr;
//	int i = 0;
//	for (i = 0; i < 8; i++) {
//		printf("%c ", *p++);
//	}
//	return 0;
//}


//#include <stdio.h>
//#include <string.h> 
//
//void copyFromM(const char* src, char* dest, int m) {
//    int i = 0;
//    int start_idx = m - 1;
//    while (src[start_idx + i] != '\0') {
//        dest[i] = src[start_idx + i];
//        i++;
//    }
//    dest[i] = '\0';
//}
//
//int main() {
//    char original[100];
//    char result[100]; 
//    int m;          
//    printf("请输入一个字符串：");
//    fgets(original, sizeof(original), stdin);
//    original[strcspn(original, "\n")] = '\0';
//    printf("请输入起始位置m（从第m个字符开始复制）：");
//    if (scanf("%d", &m) != 1) {
//        printf("输入错误！m必须是数字。\n");
//        return 1;
//    }
//    int str_len = strlen(original); 
//    if (m < 1 || m > str_len) {
//        printf("错误！m的取值范围是1~%d（当前字符串长度为%d）。\n", str_len, str_len);
//        return 1;
//    }
//    copyFromM(original, result, m);
//    printf("从第%d个字符开始复制的结果：%s\n", m, result);
//    return 0;
//}


//#include <stdio.h>
//
//void Swap(int* arr, int sz, int m) {
//	int* left = arr + m - 1, * right = arr + sz - 1;
//	while (right - left >= 0) {
//		int temp = *left;
//		*left = *right;
//		*right = temp;
//		left++;
//		right--;
//	}
//}
//
//int main() {
//	int arr[10] = { 0,1,2,3,4,5,6,7,8,9 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int m = 0;
//	scanf("%d", &m);
//	Swap(arr, sz, m);
//	int i = 0;
//	for (i = 0; i < sz; i++) {
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}


//#include <stdio.h>
//
//int main() {
//	int a[6] = { 2,4,6,8,10,12 };
//	int* p[3] = { &a[0], &a[2], &a[4] };
//	int i = 0;
//	for (i = 0; i < 3; i++) {//输出行
//		int j = 0;
//		for (j = 0; j < 2; j++) {
//			printf("%d ", *p[i]++);
//		}
//	}
//	p[0] = &a[0];
//	p[1] = &a[2];
//	p[2] = &a[4];//使指针归为原位
//	printf("\n");
//	for (i = 0; i < 2; i++) {
//		int j = 0;
//		for (j = 0; j < 3; j++) {
//			printf("%d ", *p[j]++);
//		}
//	}
//	return 0;
//}


//#include <stdio.h>
//
//float Even(int n) {
//	float sum = 0.0f;
//	int i = 0;
//	for (i = 1; i <= (n / 2); i++) {
//		sum += 1.0f / (2 * i);
//	}
//	return sum;
//}
//
//float Odd(int n) {
//	float sum = 0.0f;
//	int i = 0;
//	for (i = 1; i <= ((n + 1) / 2); i++) {
//		sum += 1.0f / (2 * i - 1);
//	}
//	return sum;
//}
//
//int main() {
//	float (*odd)(int) = &Odd;
//	float (*even)(int) = &Even;
//	int n = 0;
//	scanf("%d", &n);
//	if (n % 2 == 1) {
//		printf("%f", odd(n));
//	}
//	else {
//		printf("%f", even(n));
//	}
//	return 0;
//}


//#include <stdio.h>
//
//int main() {
//	int date[10] = { 0 };
//	int i = 0;
//	for (i = 0; i < 10; i++) {
//		scanf("%d", &date[i]);
//	}
//	int* p = &date[0];
//	for (i = 0; i < 9; i++) {
//		int j = 0;
//		p = date;
//		for (j = 0; j < 9 - i; j++) {
//			if (*p > *(p + 1)) {
//				int temp = *p;
//				*p = *(p + 1);
//				*(p + 1) = temp;
//			}
//			p++;
//		}
//	}
//	for (i = 0; i < 10; i++) {
//		printf("%d ", date[i]);
//	}
//	return 0;
//}



//#include <stdio.h>
//#include <math.h>
//
//void Max(int* p, int sz) {
//	int* arr = p;//存储p
//	int max = *arr;
//	int i = 0;
//	for (i = 0; i < sz; i++) {
//		if (*arr > max) {
//			max = *arr;
//		}
//		arr++;
//	}
//	int count = 1;
//	for (i = 0; i < sz; i++) {
//		if (*p++ == max) {
//			break;
//		}
//		count++;
//	}
//	printf("%d %d", (int)ceil(count / 4.0), count % 4);
//}
//
//int main() {
//	int arr[3][4] = { 6,5,0,9,1,12,2,7,8,4,3,10 };
//	int sz = sizeof(arr) / sizeof(arr[0][0]);
//	Max(arr, sz);
//	return 0;
//}

//#include <stdio.h>
//void main() {
//    int i, j, * pi, * pj;
//    pi = &i;
//    pj = &j;
//    i = 5;
//    j = 7;
//    printf("%d\t%d\t%d\t%d\t", i, j, pi, pj);
//    printf("%d\t%d\t%d\t%d\t", &i, &j, &pi, &pj);
//}


//#include <stdio.h>
//void main() {
//    int i, a[] = { 1,2,3 }, * p;
//    p = a; // 数组名a是首元素地址，p指向a[0]
//    for (i = 0; i < 3; i++) {
//        printf("%d,%d,%d,%d\n", a[i], p[i], *(p + i), *(a + i));
//    }
//}


//#include <stdio.h>
//
//void main()
//{
//    int j, a[12], * p = a;
//    for (j = 0; j < 12; j++)
//        scanf("%d", p++);
//    p = a;
//    for (j = 0; j < 12; j++)
//    {
//        printf("%4d", *p++);
//        if (j % 4 == 0)
//            printf("\n");
//    }
//}


//#include <stdio.h>
//
//void main()
//{
//    int a, b, c, * p = &c;
//
//    void sum(int, int, int*);
//    void swap(int*, int*);
//
//    scanf("%d,%d", &a, &b);
//    sum(a, b, p);
//    swap(&a, &b);
//
//    printf("sum=%d\n", c);
//    printf("a=%d, b=%d\n", a, b);
//}
//
//void sum(int a, int b, int* c)
//{
//    *c = a + b;
//}
//
//void swap(int* a, int* b)
//{
//    int t;
//    t = a;
//    a = b;
//    b = t;
//}


//#include <stdio.h>
//int table[10];
//void lookup(int*t, int* a, int n)
//{
//    int k;
//    *a = t[0];
//    for (k = 1; k < n; k++)
//        if (*(t + k) < *a)
//            *a = t[k];
//}
//void main()
//{
//    int k, min, * p = &min;
//    for (k = 0; k < 10; k++)
//        scanf("%d", table + k);
//    lookup(table, p, 10);
//    printf("min=%d\n", min);
//}


//#include <stdio.h>
//
//void main()
//{
//    int a[5][5] = {0}, * p[5], i, j;
//    for (i = 0; i < 5; i++)
//        p[i] = &a[i][0]; 
//    for (i = 0; i < 5; i++)
//    {
//        *(p[i] + i) = 1; 
//        *(p[i] + 5 - (i + 1)) = 1; 
//    }
//    for (i = 0; i < 5; i++)
//    {
//        for (j = 0; j < 5; j++)
//            printf("%2d", p[i][j]);
//        putchar('\n'); 
//    }
//}

#include <stdio.h>

void main()
{
    int a[5] = { 4, 6, 8, 10, 12 };
    int* p = a;
    int product = 1;

    for (int i = 0; i < 5; i++)
    {
        product *= *(p + i);
    }

    printf("The product of the array elements is: %d\n", product);
}
