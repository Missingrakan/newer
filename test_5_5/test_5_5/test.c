#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
//int main()
//{
//	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int k = 7;
//	int left = 0;
//	int right = sizeof(arr) / sizeof(arr[0]) - 1;
//	int mid = 0;
//
//	while (left <= right)
//	{
//		mid = left + (right - left) / 2;
//		if (arr[mid] < k)
//		{
//			left = mid + 1;
//		}
//		else if (arr[mid]>k)
//		{
//			right = mid - 1;
//		}
//		else
//		{
//			printf("找到了，下标是:%d\n", mid);
//			break;
//		}
//	}
//
//	if (left > right)
//	{
//		printf("找不到了。");
//	}
//
//	system("pause");
//	return 0;
//}
//int main()
//{
//	while (1)
//	{
//		printf("英雄联盟  sup丶qiang 黑色玫瑰\n");
//	}
//	system("pause");
//	return 0;
//}
//#include<stdio.h>
//#include<stdlib.h>

//void print(int num) 
//{
//	int i = 1;
//	int j = 1;
//	for (i = 1; i <= num; i++)
//	{
//		for (j = 1; j <= i; j++)
//		{
//			printf("%d*%d=%-2d  ", i, j, i*j);
//		}
//		printf("\n");
//	}
//}
//int main()
//{
//	int n = 0;
//	printf("请输入乘法口诀行列数：");
//	scanf("%d", &n);
//	print(n);
//	system("pause");
//	return 0;
//}

#include<time.h>
void menu()
{
	printf("**********************************\n");
	printf("***********   1.play    **********\n");
	printf("***********   0.exit    **********\n");
	printf("**********************************\n");
}

void game()
{
	int random_num = 0;
	random_num = rand() % 100 + 1;
	int guess = 0;
	while (1)
	{
		printf("请输入猜的数字>:");
		scanf("%d", &guess);
		if (guess > random_num)
		{
			printf("猜大了\n");
		}
		else if (guess < random_num)
		{
			printf("猜小了\n");
		}
		else
		{
			printf("恭喜你,猜对了\n");
			break;
		}
	}
}
int main()
{
	int input = 0;
	srand((unsigned)time(NULL));

	do
	{
		menu();
		printf("请选择>:");
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
			printf("选择错误，请重新输入！\n");
			break;
		}
	} while (input);

	system("pause");
	return 0;
}