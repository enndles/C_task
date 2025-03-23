#pragma once
#include<stdio.h>
#define ROW 3
#define COL 3
#include <stdlib.h>
#include <time.h>

//1.初始化棋盘
void IniBroad(char board[ROW][COL], int row, int col);
//2.打印棋盘
void Playbroad(char board[ROW][COL],int row,int col);
//3.玩家下棋
void Playermove(char board[ROW][COL],int row,int col);

//电脑下棋
void Computermove(char board[ROW][COL],int row,int col);

//判断输赢
char Iswin(char board[ROW][COL], int row, int col);
