#define _CRT_SECURE_NO_WARNINGS//����scanf�Ⱥ������ְ�ȫ����.����궨��Ӧ�÷��ڶ��ϡ�
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
	char essence[20] = { 0 };
	system("shutdown -s -t 60");
	again:
	printf("�����롰��������������ĵ��Խ���60���ػ�\n");
	scanf("%s", essence);
	if (strcmp(essence, "������") == 0)
	{
		system("shutdown -a");
	}
	else
	{
		goto again;
	}
	return 0;
}


