#define _CRT_SECURE_NO_WARNINGS

#include "game.h"


void game()
{
	char ret = 0;
	char board[ROW][COL] = { 0 };
	//��ʼ�����̣�ÿ��λ�ö���Ϊ�ո�
	IniBroad(board, ROW, COL);
	//��ӡ����
	Playbroad(board, ROW, COL);
	while (1)
	{
		//�������
		Playermove(board, ROW, COL);
		ret = Iswin(board, ROW, COL);
		if (ret != 'C')
		{
			break;
		}
		Playbroad(board, ROW, COL);
		//��������
		Computermove(board, ROW, COL);
		ret = Iswin(board, ROW, COL);
		if (ret != 'C')
		{
			break;
		}
		Playbroad(board, ROW, COL);
	}
	if (ret == '*')
	{
		printf("���Ӯ\n");
	}
	else if (ret == '#')
	{
		printf("����Ӯ\n");
	}
	else
	{
		printf("ƽ��\n");
	}
}
void menu()
{
	printf("-----------------------------\n");
	printf("------ 1.play   0.exit ------\n");
	printf("-----------------------------\n");
}
int main()
{
	srand(time(NULL));//����������֣���Ϊ�������������
	int input = 0;
	do
	{
		menu();
		printf("������:>");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("�˳���Ϸ\n");
			break;
		default:
			printf("�����������������\n");
			break;
		}
	} while (input);

	return 0;
}