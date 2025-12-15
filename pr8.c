//#include <stdio.h>
//#include <stdlib.h>
//
////[哈希表的试实现]
//typedef struct Node {
//	int key;//输入的值
//	int value;//找到的值
//	struct Node* next;//下一个节点
//}Node;
//
//#define SIZE 10//分组
//
//int hash(int key) {//要返回哈希值，让计算机知道该去哪组找
//	return key % SIZE;
//}
//
//Node* hashTable[SIZE] = { NULL };//定义一个哈希表
//
//void hash_insert(int key, int value) {//给哈希表嵌入节点，以实现链表
//	int index = hash(key);//index用来告诉后续应该接收什么
//	Node* newnode = (Node*)malloc(sizeof(Node));//创建新节点,先不管内存释放和申请的问题
//	newnode->key = key;
//	newnode->value = value;
//	newnode->next = hashTable[index];//让新节点指向原链表头:newnode → 节点A → 节点B → NULL
//	hashTable[index] = newnode;//让表头指向新节点:hashTable[5] → newnode → 节点A → 节点B → NULL
//}
//
//void hash_find(int key) {
//	int index = hash(key);//确定查找的组
//	Node* current = hashTable[index];//创建一个current节点，通过它来指向对应的hashTable
//	while (current != NULL) {
//		if (current->key == key) {
//			printf("value = %d\n", current->value);
//			return;
//		}
//		current = current->next;//更新current使得可以找下一个节点
//	}
//	printf("没有找到\n");
//	return;
//}


//#include <stdio.h>
//
//int Fibonacci(int n)
//{
//	int i = 0;
//	int a = 1, b = 1, c = 0;
//	for (i = 0; i < n; i++)
//	{
//		c = a + b;
//		a = b;
//		b = c;
//	}
//	return c;
//}
//
//int main() {
//	int i = 0;
//	for (i = 2; i < 10; i++) {
//		int ret = Fibonacci(i - 1) * Fibonacci(i + 1) - Fibonacci(i) * Fibonacci(i);
//		printf("%d ", ret);
//	}
//	return 0;
//}


////[memmove]
//#include <stdio.h>
//#include <string.h>
//
//int main() {
//	char arr[] = "I very love you......";
//	memmove(arr + 6, arr + 1, 14);
//	printf("%s", arr);
//	return 0;
//}


////[参数宏求两整数的余数]
//#include <stdio.h>
//#define remainder(X,Y) ((X) % (Y))
//
//int main() {
//	int ret = remainder(5,2);
//	printf("%d\n", ret);
//	return 0;
//}

//////[函数或带参数宏求取三数中最大的数]
////#include <stdio.h>
////
////int Max(int a, int b, int c) {
////	int max = a > b ? a : b;
////	max = max > c ? max : c;
////	return max;
////}
////
////int main() {
////	int a = 3, b = 9, c = 7;
////	int max = Max(a, b, c);
////	printf("%d\n", max);
////	return 0;
////}
//
//#include <stdio.h>
//#define Max(b, c) ((b)>(c)) ? (b) : (c) 
//
//int main() {
//	int a = 3, b = 9, c = 7;
//	int more = Max(a, b);
//	int max = Max(more, c);
//	printf("%d\n", max);
//	return 0;
//}


////[参数宏判断能否被3整除]
//#include <stdio.h>
//#define DEVIDE(X) ((X) % 3)
//
//int main() {
//	int n = 0;
//	scanf("%d", &n);
//	int ret = DEVIDE(n);
//	if (ret == 0) {
//		printf("该数能被3整除\n");
//	}
//	else {
//		printf("该数不能被3整除\n");
//	}
//	return 0;
//}


////[求球的体积]
//#include <stdio.h>
//#define PAI 3.1415926535
//
//int main() {
//	float r = 0.0f;
//	scanf("%f", &r);
//	float v = 4 / 3.0 * PAI * r * r * r;
//	printf("%f", v);
//	return 0;
//}

////[参数宏交换]
//#include <stdio.h>
//#define swap(x,y) int temp = x; x = y; y = temp
//
//int main() {
//	int x = 6, y = 9;
//	swap(x, y);
//	printf("x = %d, y = %d", x, y);
//	printf("\n");
//	int a[3] = { 1,2,3 };
//	int b[3] = { 4,5,6 };
//	int i = 0;
//	for (i = 0; i < 3; i++) {
//		swap(a[i], b[i]);
//	}
//	for (i = 0; i < 3; i++) {
//		printf("%d ", a[i]);
//	}
//	printf("\n");
//	for (i = 0; i < 3; i++) {
//		printf("%d ", b[i]);
//	}
//	return 0;
//}