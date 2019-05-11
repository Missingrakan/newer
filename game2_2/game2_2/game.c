#define _CRT_SECURE_NO_WARNINGS 1

#include "game.h"

void InitBoard(char board[ROWS][COLS], int rows, int cols, char set)
{
	int i = 0;
	for (i = 0; i < rows; i++)
	{
		int j = 0;
		for (j = 0; j < cols; j++)
		{
			board[i][j] = set;
		}
	}
}
void DisPlayBoard(char board[ROWS][COLS], int row, int col)
{
	int i = 0;
	int j = 0;

	for (i = 0; i <= row; i++)
	{
		printf("%d ", i);
	}
	printf("\n");
	for (i = 1; i <= row; i++)
	{
		printf("%d ", i);
		for (j = 1; j <= col; j++)
		{
			printf("%c ", board[i][j]);
		}
		printf("\n");
	}
}

//NULL

void SetMine(char mine[ROWS][COLS], int row, int col)
{
	int count = EASY_COUNT;
	while (count)
	{
		int x = rand() % row + 1;
		int y = rand() % col + 1;
		if (mine[x][y] == '0')
		{
			mine[x][y] = '1';
			count--;
		}
	}
}
//'0'-48
//'1'-49
//1='1'-'0'
int GetMineCount(char mine[ROWS][COLS], int x, int y)
{
	return    mine[x - 1][y] +
		mine[x - 1][y - 1] +
		mine[x][y - 1] +
		mine[x + 1][y + 1] +
		mine[x + 1][y] +
		mine[x + 1][y + 1] +
		mine[x][y + 1] +
		mine[x - 1][y + 1] - 8 * '0';

}

void FindMine(char mine[ROWS][COLS], char show[ROWS][COLS], int row, int col)
{
	int x = 0;
	int y = 0;
	int win = 0;
	while (win<row*col - EASY_COUNT)
	{
		printf("��ѡ��Ҫ�Ų������:>");
		scanf("%d%d", &x, &y);
		if (x >= 1 && x <= row && y >= 1 && y <= col)
		{
			if (mine[x][y] == '1')
			{
				printf("���ź����㱻ը����!\n");
				DisPlayBoard(mine, row, col);
				break;
			}
			else
			{
				//����x��y��Χ�м�����
				int count = GetMineCount(mine, x, y);
				//show[x][y] = count;
				//��ʱcountΪʨ�ӣ�����Ӧ������������ַ�����Ӧת���ַ�

				//չʾ�Ų����Ϣ
				show[x][y] = count + '0';
				DisPlayBoard(show, row, col);
				win++;
			}
		}
		else
		{
			printf("��������Ƿ�������������!\n");
		}
	}
	if (win == row*col - EASY_COUNT)
	{
		printf("��ϲ�㣬ɨ�׳ɹ�!\n");
		DisPlayBoard(mine, row, col);
	}
}