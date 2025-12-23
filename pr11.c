//[P5717]
//#include <stdio.h>
//#include <math.h>
//
//int main() {
//	int n = 0;
//	scanf("%d", &n);
//	int arr[3][2] = { 0 };
//	int i = 0;
//	for (i = 0; i < 3; i++) {
//		int j = 0;
//		for (j = 0; j < 2; j++) {
//			scanf("%d", &arr[i][j]);
//		}
//	}
//	int price[3] = { 0 };
//	int cheap = 1000000000;
//	for (i = 0; i < 3; i++) {
//		price[i] = (int)ceil(((double)n / arr[i][0])) * arr[i][1];
//		if (cheap > price[i]) {
//			cheap = price[i];
//		}
//	}
//	printf("%d\n", cheap);
//	return 0;
//}


//#include <stdio.h>
//
//int main() {
//	int a = 0, b = 0, c = 0;
//	scanf("%d%d%d", &a, &b, &c);
//	if (a + b > c && a + c > b && b + c > a) {
//		if (a * a + b * b == c * c ||
//			b * b + c * c == a * a ||
//			a * a + c * c == b * b) {
//			printf("Right triangle\n");
//		}
//		if (((a * a + b * b - c * c) / (2.0 * a * b)) > 0 &&
//			((c * c + b * b - a * a) / (2.0 * c * b)) > 0 &&
//			((a * a + c * c - b * b) / (2.0 * a * c)) > 0) {
//			printf("Acute triangle\n");
//		}
//		if (((a * a + b * b - c * c) / (2.0 * a * b)) < 0 ||
//			((c * c + b * b - a * a) / (2.0 * c * b)) < 0 ||
//			((a * a + c * c - b * b) / (2.0 * a * c)) < 0) {
//			printf("Obtuse triangle\n");
//		}
//		if (a == b || b == c || a == c) {
//			printf("Isosceles triangle\n");
//		}
//		if (a == b && b == c) {
//			printf("Equilateral triangle\n");
//		}
//	}
//	else {
//		printf("Not triangle\n");
//	}
//	return 0;
//}


////[P1422]
//#include <stdio.h>
//
//int main() {
//	int n = 0;
//	scanf("%d", &n);
//	if (n <= 150) {
//		printf("%.1f", n * 0.4463);
//	}
//	else if (n <= 400) {
//		printf("%.1f", 150 * 0.4463 + (n - 150) * 0.4663);
//	}
//	else {
//		printf("%.1f", 150 * 0.4463 + 250 * 0.4663 + (n - 400) * 0.5663);
//	}
//	return 0;
//}


////[P1424]
//#include <stdio.h>
//
//int main() {
//	int date = 0, day = 0;
//	scanf("%d%d", &date, &day);
//	int i = 0;
//	int mile = 0;
//	for (i = 0; i < day; i++) {
//		if ((date + i) % 7 == 6 || (date + i) % 7 == 0) {
//			continue;
//		}
//		mile += 250;
//	}
//	printf("%d", mile);
//	return 0;
//}

////[P4414]
//#include <stdio.h>
//#include <stdlib.h>
//
//int cmp(const void* e1, const void* e2) {
//	return *(int*)e1 - *(int*)e2;
//}
//
//int main() {
//	int arr[3] = { 0 };
//	char crr[4] = { 0 };
//	int i = 0;
//	for (i = 0; i < 3; i++) {
//		scanf("%d", &arr[i]);
//	}
//	qsort(arr, 3, sizeof(arr[0]), cmp);
//	scanf("%s", crr);
//	for (i = 0; i < 3; i++) {
//		printf("%d ", arr[crr[i] - 'A']);
//	}
//	return 0;
//}

////[P5718]
//#include <stdio.h>
//
//int main() {
//	int n = 0;
//	scanf("%d", &n);
//	int arr[100] = { 0 };
//	int i = 0;
//	int min = 1000;
//	for (i = 0; i < n; i++) {
//		scanf("%d", &arr[i]);
//		if (arr[i] < min) {
//			min = arr[i];
//		}
//	}
//	printf("%d", min);
//	return 0;
//}

//[P5719]
#include <stdio.h>

int main() {
	int kind1[10000] = { 0 };
	int kind2[10000] = { 0 };
	int n = 0, k = 0;
	scanf("%d%d", &n, &k);
	int i = 0;
	int j = 0, m = 0;
	int count1 = 0;
	int count2 = 0;
	//put them into matching array
	for (i = 1; i < n; i++) {
		if (i % k == 0) {
			kind1[j] = i;
			j++;
			count1++;
		}
		else {
			kind2[m] = i;
			m++;
			count2++;
		}
	}
	int sum1 = 0;
	int sum2 = 0;
	double av1 = 0;
	double av2 = 0;
	for (i = 0; i < n; i++) {
		sum1 += kind1[i];
		sum2 += kind2[i];
	}
	av1 = (double)sum1 / count1;
	av2 = (double)sum2 / count2;
	printf("%.1lf %.1lf", av1, av2);
	return 0;
}