#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<stdlib.h> 

#define  ROW 3
#define  COL 3

void PlayMove(char board[ROW][COL], int row, int col);
void InitBoard(char board[ROW][COL], int row, int col);
void DisplayBoard(char board[ROW][COL], int row, int col);