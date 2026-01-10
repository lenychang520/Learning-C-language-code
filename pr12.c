////[ÉýÐò°æ]
//#include <stdio.h>
//
//int remove(int arr[], int count) {
//	int last = arr[0];
//	int i = 0;
//	int new = 1;
//	int new_count = 1;
//	for (i = 1; i < count; i++) {
//		//if it is not duplicates
//		if (arr[i] > last) {
//			arr[new] = arr[i];
//			new++;
//			last = arr[i];
//			new_count++;
//		}
//		else {
//			continue;
//		}
//	}
//	return new_count;
//}
//
//int main() {
//	int arr[20] = { 0 };
//	int i = 0;
//	int count = 0;
//	while (scanf("%d", &arr[i]) == 1) {
//		i++;
//		count++;
//		if (getchar() == '\n') {
//			break;
//		}
//	}
//	int newlenth = remove(arr, count);
//	for (i = 0; i < newlenth; i++) {
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}


////[ÂÒÐò°æ]
//#include <stdio.h>
//#include <stdlib.h>
//
//void cmp(void* e1, void* e2) {
//	return *(int*)e1 - *(int*)e2;
//}
//
//int remove(int arr[], int count) {
//	int last = arr[0];//as last number that is not duplicates
//	int i = 0;
//	int new = 1;//the new place where the number should be
//	int newcount = 1;
//	for (i = 1; i < count; i++) {
//		if (arr[i] > last) {
//			arr[new] = arr[i];
//			last = arr[i];
//			new++;
//			newcount++;
//		}
//		else {
//			continue;
//		}
//	}
//	return newcount;
//}
//
//int main() {
//	int arr[20] = { 0 };
//	int i = 0;
//	int count = 0;
//	//input in n times
//	while (scanf("%d", &arr[i]) == 1) {
//		i++;
//		count++;
//		if (getchar() == '\n') {
//			break;
//		}
//	}
//	qsort(arr, count, sizeof(int), cmp);
//	int new_lenth = remove(arr, count);
//	for (i = 0; i < new_lenth; i++) {
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}


//#include <stdio.h>
//
//int main() {
//	int i, b, a;
//	i = b = a = 1;
//	printf("%d", i);
//	return 0;
//}


//#include <stdio.h>
//
//int main() {
//	int a1 = 0, a2 = 0, b1 = 0, b2 = 0;
//	scanf("%d/%d %d/%d", &a1, &a2, &b1, &b2);
//	int m = a2 * b2;
//	int z = a1 * b2 + b1 * a2;
//	printf("%d/%d", z, m);
//	return 0;
//}


//#include <stdio.h>
//
//int main() {
//	int n = 0;
//	int i = 0;
//	int arr[32] = { 0 };
//	int j = 0;
//	scanf("%d", &n);
//	while (n) {
//		arr[i] = n % 2;
//		n /= 2;
//		i++;
//	}
//	for (j = i - 1; j >= 0; j--) {
//		printf("%d", arr[j]);
//	}
//	return 0;
//}

//#include <stdio.h>
//
//int main() {
//	int arr[5] = { 0 };
//	int i = 0;
//	for (i = 0; i < 5; i++) {
//		scanf("%d", &arr[i]);
//	}
//	for (i = 4; i > 0; i--) {
//		int j = 0;
//		for (j = 0; j < i; j++) {
//			printf("%d ", arr[j] + arr[j + 1]);
//			arr[j] = arr[j] + arr[j + 1];
//		}
//		printf("\n");
//	}
//	return 0;
//}


//#include <stdio.h>
//
//typedef struct Student {
//	char id[10];
//	char name[8];
//	int chn;
//	int math;
//	int en;
//}stu;
//
//int main() {
//	stu arr[10] = { 0 };
//	int i = 0;
//	int total[10] = { 0 };
//	int max = total[0];
//	for (i = 0; i < 10; i++) {
//		scanf("%s", arr[i].id);
//		scanf("%s", arr[i].name);
//		scanf("%d", &arr[i].chn);
//		scanf("%d", &arr[i].math);
//		scanf("%d", &arr[i].en);
//		total[i] = arr[i].chn + arr[i].math + arr[i].en;
//	}
//	for (i = 0; i < 10; i++) {
//		if (total[i] > max) {
//			max = total[i];
//		}
//	}
//	for (i = 0; i < 10; i++) {
//		if (max == total[i]) {
//			printf("%s\n", arr[i].id);
//			printf("%s\n", arr[i].name);
//		}
//	}
//	return 0;
//}


//#include <stdio.h>
//#include <stdlib.h>
//
//int main() {
//	int* p = (int*)malloc(40);
//	if (p == NULL) {
//		perror("file");
//	}
//	int* ptr = p;
//	int i = 0;
//	for (i = 0; i < 10; i++) {
//		*(ptr + i) = i;
//	}
//	for (i = 0; i < 10; i++) {
//		printf("%d ", *(p + i));
//	}
//	return 0;
//}

#include <stdio.h>

int main() {
	int arr[10];

}