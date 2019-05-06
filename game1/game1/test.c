#define _CRT_SECURE_NO_WARNINGS 1

#include"game.h"
void menu()
{
	printf("*************************\n");
	printf("*****    1. play    *****\n");
	printf("*****    0. exit    *****\n");
	printf("*************************\n");
}
void game()
{
	char board[ROW][COL] = { 0 };
	InitBoard(board, ROW, COL);
	DisplayBoard(board, ROW, COL);//打印棋盘
	//while (1)
	//{
	//	PlayMove();//玩家走
	//	DisplayBoard(board, ROW, COL);
	//	ComputerMove();//电脑走
	//}
}
void test()
{
	int input = 0;
	do
	{
		menu();
		printf("请选择:>");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("退出游戏\n");
			break;
		default:
			printf("选择错误\n");
			break;

		}
	} while (input);
}
int main()
{
	test();
	system("pause");
	return 0;
}