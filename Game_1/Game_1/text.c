#define _CRT_SECURE_NO_WARNINGS

#include "game.h"


void game()
{
	char ret = 0;
	char board[ROW][COL] = { 0 };
	//初始化棋盘，每个位置都置为空格
	IniBroad(board, ROW, COL);
	//打印棋盘
	Playbroad(board, ROW, COL);
	while (1)
	{
		//玩家下棋
		Playermove(board, ROW, COL);
		ret = Iswin(board, ROW, COL);
		if (ret != 'C')
		{
			break;
		}
		Playbroad(board, ROW, COL);
		//电脑下棋
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
		printf("玩家赢\n");
	}
	else if (ret == '#')
	{
		printf("电脑赢\n");
	}
	else
	{
		printf("平局\n");
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
	srand(time(NULL));//随机生成数字，作为电脑下棋的坐标
	int input = 0;
	do
	{
		menu();
		printf("请输入:>");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("退出游戏\n");
			break;
		default:
			printf("输入错误，请重新输入\n");
			break;
		}
	} while (input);

	return 0;
}