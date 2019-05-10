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
/*结束游戏*/
//玩家赢-*
//电脑赢-#
//平局  -Q

//继续  -C

char checkwin(char board[ROW][COL], int row,int col);