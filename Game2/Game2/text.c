#define _CRT_SECURE_NO_WARNINGS
#include "game.h"




void menu()
{
	printf("--------  ɨ����Ϸ  ----------\n");
	printf("-------- 1.   play ----------\n");
	printf("-------- 2.   exit ----------\n");
	printf("-----------------------------\n");
}




void game()
{
	char mine[ROWS][COLS] = {0};//�ױ�
	char show[ROWS][COLS] = {0};//��ͼ����ʾ��Χ����
	InitBoard(mine, ROWS, COLS,'0');//��ʼ��Ϊ'0'
	InitBoard(show, ROWS, COLS, '*');//��ʼ��Ϊ'*'
	//��ӡ��ͼ
	DisplayBoard(show,ROW,COL);
	//Ϊ�ױ��ʼ����
	Setmine(mine,ROW,COL);
	//DisplayBoard(mine, ROW, COL);
	//����
	Findmine(mine,show,ROW,COL);
}
int main()
{
	int input = 0;
	srand(time(NULL));
	do
	{
		menu();
		printf("������:>");
		scanf("%d",&input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("��Ϸ����\n");
			break;
		default:
			printf("�����������������\n");
			break;
		}
	} while (input);

	return 0;
}