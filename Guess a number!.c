#define _CRT_SECURE_NO_WARNINGS//����scanf�Ⱥ������ְ�ȫ����.����궨��Ӧ�÷��ڶ��ϡ�
#include <stdio.h>
#include <stdlib.h>//����rand��srand
#include <time.h>//����time

void game()
{

	int ans = rand() % 100 + 1;
	printf("��Ϸ��ʼ��1��100�����һ������\n");
	int guess = 0;//�û��µ�����
	scanf("%d", &guess);
	while (1)
	{
		if (guess > ans)
		{
			printf("�´���\n");
			scanf("%d", &guess);
		}
		if (guess < ans)
		{
			printf("��С��\n");
			scanf("%d", &guess);
		}
		if (guess == ans)
		{
			printf("��ϲ�㣬�¶���\n");
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
	printf("�����Ӧ�����Կ�ʼ����\n");
}
int main()
{
	srand((unsigned int)time(NULL));//srand����������ӣ�����unsigned int��������rand��������������ǹ̶��ģ���ʱ��ı仯����Ϊ���������.������������Ϊ�˷�ֹ��ÿ�ζ������������
	//������������ʹ���ɵ����ָ������
	int choice = 0;
	do
	{
		menu();
		scanf("%d", &choice);
		if (1 == choice)
		{
			game();
		}
	} while (choice);//ѡ��Ϊ0ʱֱ��ʹѭ���޷�ִ��
	return 0;
}




