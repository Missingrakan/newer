#define _CRT_SECURE_NO_WARNINGS 1
#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<math.h>
//void menu()
//{
//	printf("**********************************\n");
//	printf("***********  1.play     **********\n");
//	printf("***********  2.exit     **********\n");
//	printf("**********************************\n");
//}
//
//void game()
//{
//	int random_num = 0;
//  random_num=rand() % 100 + 1;
//	int guess = 0;
//	while (1)
//	{
//		printf("请输入猜的数字>:");
//		scanf("%d", &guess);
//		if (guess > random_num)
//		{
//			printf("猜大了\n");
//		}
//		else if (guess < random_num)
//		{
//			printf("猜小了\n");
//		}
//		else
//		{
//			printf("恭喜你,猜对了\n");
//			break;
//		}
//	}
//}
//int main()
//{
//	int input = 0;
//	srand((unsigned)time(NULL));
//
//	do
//	{
//		menu();
//		printf("请选择>:");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1:
//			game();
//			break;
//		case 2:
//			break;
//		default:
//			printf("选择错误，请重新输入！\n");
//			break;
//		}
//	} while (input);
//
//	system("pause");
//	return 0;
//}
//int is_leap_year(int year)
//{
//	if (((year % 4 == 0) && (year % 100 != 0)) || (year % 400 == 0))
//		return 1;
//	else
//		return 0;
//}
//int main()
//{
//	int year = 0;
//	printf("请输入年份:>");
//	scanf("%d", &year);
//	if (is_leap_year(year))
//	{
//		printf("%d是闰年.\n",year);
//	}
//	else
//	{
//		printf("%d不是闰年.\n", year);
//	}
//	system("pause");
//	return 0;
//}
int is_prime(int num)
{
	int i = 0;
	for (i = 2; i <= sqrt(num); i++)
	{
		if (num%i == 0)
			return 0;
	}
	return 1;

}
int main()
{
	int number = 0;
	printf("请输入一个整数:>");
	scanf("%d", &number);
	if (is_prime(number))
	{
		printf("%d是素数.\n", number);
	}
	else
	{
		printf("%d不是素数.\n", number);
	}

	system("pause");
	return 0;
}
