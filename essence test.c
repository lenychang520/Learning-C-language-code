#define _CRT_SECURE_NO_WARNINGS//避免scanf等函数出现安全警告.这个宏定义应该放在顶上。
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
	char essence[20] = { 0 };
	system("shutdown -s -t 60");
	again:
	printf("请输入“我是猪”，否则你的电脑将在60秒后关机\n");
	scanf("%s", essence);
	if (strcmp(essence, "我是猪") == 0)
	{
		system("shutdown -a");
	}
	else
	{
		goto again;
	}
	return 0;
}


