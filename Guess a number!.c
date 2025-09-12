#define _CRT_SECURE_NO_WARNINGS//避免scanf等函数出现安全警告.这个宏定义应该放在顶上。
#include <stdio.h>
#include <stdlib.h>//调用rand和srand
#include <time.h>//调用time

void game()
{

	int ans = rand() % 100 + 1;
	printf("游戏开始，1到100里面猜一个数字\n");
	int guess = 0;//用户猜的数字
	scanf("%d", &guess);
	while (1)
	{
		if (guess > ans)
		{
			printf("猜大了\n");
			scanf("%d", &guess);
		}
		if (guess < ans)
		{
			printf("猜小了\n");
			scanf("%d", &guess);
		}
		if (guess == ans)
		{
			printf("恭喜你，猜对了\n");
			break;
		}
	}
}
void menu()
{
	printf("**********************\n");
	printf("*******1.Start *******\n");
	printf("*******0. Exit *******\n");
	printf("**********************\n");
	printf("输入对应数字以开始操作\n");
}
int main()
{
	srand((unsigned int)time(NULL));//srand是随机数种子，接受unsigned int。单单的rand其随机数的序列是固定的，用时间的变化来作为随机数种子.防主函数里是为了防止它每次都重新设立起点
	//我们这样做能使生成的数字更加随机
	int choice = 0;
	do
	{
		menu();
		scanf("%d", &choice);
		if (1 == choice)
		{
			game();
		}
	} while (choice);//选择为0时直接使循环无法执行
	return 0;
}




