#pragma once
#include<stdio.h>
#define ROW 3
#define COL 3
#include <stdlib.h>
#include <time.h>

//1.��ʼ������
void IniBroad(char board[ROW][COL], int row, int col);
//2.��ӡ����
void Playbroad(char board[ROW][COL],int row,int col);
//3.�������
void Playermove(char board[ROW][COL],int row,int col);

//��������
void Computermove(char board[ROW][COL],int row,int col);

//�ж���Ӯ
char Iswin(char board[ROW][COL], int row, int col);
