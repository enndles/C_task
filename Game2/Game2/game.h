#pragma once

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define ROW 9
#define COL 9
#define ROWS ROW+2
#define COLS COL+2
#define Easy_count 10

//初始化两表
void InitBoard(char board[ROWS][COLS],int rows,int cols,char label);

//打印视图
void DisplayBoard(char board[ROWS][COLS],int row,int col);

//设置雷
void Setmine(char board[ROWS][COLS],int row,int col);

//排雷
void Findmine(char board[ROWS][COLS],char arr[ROWS][COLS],int row,int col);