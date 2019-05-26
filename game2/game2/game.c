#define _CRT_SECURE_NO_WARNINGS 1

#include "game.h"

void InitBoard(char board[ROWS][COLS], int rows, int cols,char set)
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
			printf("%c ",board[i][j]);
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
		int x = rand()%row + 1;
		int y = rand()%col + 1;
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
int GetMineCount(char mine[ROWS][COLS],int x,int y)
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

void RemoveMine(char mine[ROWS][COLS], int x, int y)//��һ�β��� ����
{
	mine[x][y] = '0';
	GetMineCount(mine, x, y);
	while (1)
	{
		int	x1 = rand() % ROW+1;
		int	y1 = rand() % COL+1;
		if (mine[x1][y1] != '1' && ((x1 != x) && (y1 != y)))
		{
			mine[x1][y1] = '1';
			break;
		}
	}
}

void Expand(char mine[ROWS][COLS], char show[ROWS][COLS], int x, int y)//չ������
{
	if ((x >= 1) && (y >= 1) && (x <= ROW) && (y <= COL))
	{
		if (GetMineCount(mine, x, y) == 0)  //��Χû����
		{
			show[x][y] = ' ';    //��Ϊ�հ�
			if (show[x - 1][y - 1] == '*')
			{
				Expand(mine, show, x - 1, y - 1);
			}
			if (show[x - 1][y] == '*')
			{
				Expand(mine, show, x - 1, y);
			}
			if (show[x - 1][y + 1] == '*')
			{
				Expand(mine, show, x - 1, y + 1);
			}
			if (show[x][y + 1] == '*')
			{
				Expand(mine, show, x, y + 1);
			}
			if (show[x + 1][y + 1] == '*')
			{
				Expand(mine, show, x + 1, y + 1);
			}
			if (show[x + 1][y] == '*')
			{
				Expand(mine, show, x + 1, y);
			}
			if (show[x + 1][y - 1] == '*')
			{
				Expand(mine, show, x + 1, y - 1);
			}
			if (show[x][y - 1] == '*')
			{
				Expand(mine, show, x, y - 1);
			}
		}
	}
}

void FindMine(char mine[ROWS][COLS], char show[ROWS][COLS], int row, int col)
{
	int x = 0;
	int y = 0;
	int clear = 0;
	int minecount = 0;
	while (clear<row*col-EASY_COUNT)
	{
		printf("��ѡ��Ҫ�Ų������:>");
		scanf("%d%d", &x, &y);
		if (x >= 1 && x <= row && y >= 1 && y <= col)
		{
			
			if (mine[x][y] == '1')
			{
				////����x��y��Χ�м�����
				//int count = GetMineCount(mine, x, y);
				////show[x][y] = count;
				////��ʱcountΪʨ�ӣ�����Ӧ������������ַ�����Ӧת���ַ�
			
				////չʾ�Ų����Ϣ
				//show[x][y] = count + '0';
				//DisPlayBoard(show, row, col);
				//clear++;
				if (clear == 0)
				{
					RemoveMine(mine, x, y);
					DisPlayBoard(mine,row,col);
					printf("\n");
					minecount = GetMineCount(mine, x, y);
					if (minecount == 0)
					{
						show[x][y] = ' ';
						clear++;
						Expand(mine, show, x, y);
						DisPlayBoard(show, row,col);
					}
					else
					{
						show[x][y] = minecount + '0';
						DisPlayBoard(show, ROW, COL);
					}
				}
				else
				{
					printf("���ź����㱻ը����!\n");
					DisPlayBoard(mine, row, col);
					break;
				}
			}
			else
			{
				minecount = GetMineCount(mine, x, y);
				if (minecount == 0)
				{
					show[x][y] = ' ';
				}
				else
				{
					show[x][y] = minecount + '0';
				}
				clear++;
				Expand(mine, show, x, y);
				DisPlayBoard(show, row,col);
			}
		}
		else
		{
			printf("��������Ƿ�������������!\n");
		}
	}
	if (clear == row*col - EASY_COUNT)
	{
		printf("��ϲ�㣬ɨ�׳ɹ�!\n");
		DisPlayBoard(mine, row, col);
	}
}