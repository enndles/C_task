#define _CRT_SECURE_NO_WARNINGS
#include "game.h"




void menu()
{
	printf("--------  扫雷游戏  ----------\n");
	printf("-------- 1.   play ----------\n");
	printf("-------- 2.   exit ----------\n");
	printf("-----------------------------\n");
}




void game()
{
	char mine[ROWS][COLS] = {0};//雷表
	char show[ROWS][COLS] = {0};//视图表，显示周围雷数
	InitBoard(mine, ROWS, COLS,'0');//初始化为'0'
	InitBoard(show, ROWS, COLS, '*');//初始化为'*'
	//打印视图
	DisplayBoard(show,ROW,COL);
	//为雷表初始化雷
	Setmine(mine,ROW,COL);
	//DisplayBoard(mine, ROW, COL);
	//排雷
	Findmine(mine,show,ROW,COL);
}
int main()
{
	int input = 0;
	srand(time(NULL));
	do
	{
		menu();
		printf("请输入:>");
		scanf("%d",&input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("游戏结束\n");
			break;
		default:
			printf("输入错误，请重新输入\n");
			break;
		}
	} while (input);

	return 0;
}