#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<stdlib.h> 
#include<string.h>
#include<time.h>

#define  ROW 3
#define  COL 3

void PlayerMove(char board[ROW][COL], int row, int col);
void ComputerMove(char board[ROW][COL], int row, int col);
void InitBoard(char board[ROW][COL], int row, int col);
void DisplayBoard(char board[ROW][COL], int row, int col);
//
/*������Ϸ*/
//���Ӯ-*
//����Ӯ-#
//ƽ��  -Q

//����  -C

char checkwin(char board[ROW][COL], int row,int col);