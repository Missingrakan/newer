#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

//1.��һ������ը��
//2.չ��һƬ

#define EASY_COUNT 10 //�����׵ĸ���

#define ROW 9
#define COL 9
#define ROWS ROW+2
#define COLS COL+2

void InitBoard(char board[ROWS][COLS], int rows, int cols,char set);
void DisPlayBoard(char board[ROWS][COLS], int row, int col);//����������ţ��ʴ���ȥ����11*11����
void SetMine(char mine[ROWS][COLS], int row, int col);
void FindMine(char mine[ROWS][COLS], char show[ROWS][COLS], int row, int col);