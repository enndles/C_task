#define _CRT_SECURE_NO_WARNINGS

#include "game.h"

//初始化
void InitBoard(char board[ROWS][COLS], int rows, int cols,char label)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < rows; i++)
	{
		for (j = 0; j < cols; j++)
		{
			board[i][j] = label;
		}
	}

}

//打印视图
void DisplayBoard(char board[ROWS][COLS], int row, int col)
{
	int i = 0;
	int j = 0;
	printf("---------扫雷游戏------------\n");
	for (j = 0; j <= col; j++)
	{
		printf("%d ",j);
	}
	printf("\n");
	for (i = 1; i <= row; i++)
	{
		printf("%d ",i);
		for (j = 1; j <= col; j++)
		{
			printf("%c ", board[i][j]);
		}
		printf("\n");
	}
	printf("---------扫雷游戏------------\n");
}

//设置雷
void Setmine(char board[ROWS][COLS], int row, int col)
{
	int count = Easy_count;
	while (count)
	{
		int x = rand() % row + 1;
		int y = rand() % col + 1;
		if (board[x][y] == '0')
		{
			board[x][y] = '1';
			count--;
		}
	}
}


//排雷

int  sum(char board[ROWS][COLS], int x, int y)
{
	return board[x - 1][y - 1] +
		board[x][y - 1] +
		board[x + 1][y - 1] +
		board[x + 1][y] +
		board[x + 1][y + 1] +
		board[x][y + 1] +
		board[x - 1][y + 1] +
		board[x - 1][y] - 8 * '0';
}
void Findmine(char mine[ROWS][COLS], char show[ROWS][COLS], int row, int col)
{
	int x = 0;
	int y = 0;
	int win = 0;
	while (win < row * col - Easy_count)
	{
		printf("请输入坐标:>");
		scanf("%d %d", &x, &y);
		
		if (x >= 1 && x <= row && y >= 1 && y <= col)
		{
			if (show[x][y] != '*')
			{
				printf("请重新输入坐标:");
			}
			else
			{
				if (mine[x][y] == '1')//是雷
				{
					printf("踩到雷了，失败\n");
					DisplayBoard(mine, ROW, COL);
					break;
				}
				else//不是雷
				{

					win++;
					int count = sum(mine, x, y);//统计x,y坐标周围雷的个数，返回整型
					show[x][y] = count + '0';//将统计雷数放到show表中，注意类型转换，count+'0'即可转换成字符型数字
					DisplayBoard(show, ROW, COL);
				}
			}
			
		}
		else
		{
			printf("输入的坐标违法，重新输入\n");
		}
	}
	if (win == row * col - Easy_count)
	{
		printf("扫雷成功!\n");
		DisplayBoard(mine, ROW, COL);
	}
}