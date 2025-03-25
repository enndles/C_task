#define _CRT_SECURE_NO_WARNINGS

#include "game.h"

//��ʼ��
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

//��ӡ��ͼ
void DisplayBoard(char board[ROWS][COLS], int row, int col)
{
	int i = 0;
	int j = 0;
	printf("---------ɨ����Ϸ------------\n");
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
	printf("---------ɨ����Ϸ------------\n");
}

//������
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


//����

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
		printf("����������:>");
		scanf("%d %d", &x, &y);
		
		if (x >= 1 && x <= row && y >= 1 && y <= col)
		{
			if (show[x][y] != '*')
			{
				printf("��������������:");
			}
			else
			{
				if (mine[x][y] == '1')//����
				{
					printf("�ȵ����ˣ�ʧ��\n");
					DisplayBoard(mine, ROW, COL);
					break;
				}
				else//������
				{

					win++;
					int count = sum(mine, x, y);//ͳ��x,y������Χ�׵ĸ�������������
					show[x][y] = count + '0';//��ͳ�������ŵ�show���У�ע������ת����count+'0'����ת�����ַ�������
					DisplayBoard(show, ROW, COL);
				}
			}
			
		}
		else
		{
			printf("���������Υ������������\n");
		}
	}
	if (win == row * col - Easy_count)
	{
		printf("ɨ�׳ɹ�!\n");
		DisplayBoard(mine, ROW, COL);
	}
}