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
//		printf("������µ�����>:");
//		scanf("%d", &guess);
//		if (guess > random_num)
//		{
//			printf("�´���\n");
//		}
//		else if (guess < random_num)
//		{
//			printf("��С��\n");
//		}
//		else
//		{
//			printf("��ϲ��,�¶���\n");
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
//		printf("��ѡ��>:");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1:
//			game();
//			break;
//		case 2:
//			break;
//		default:
//			printf("ѡ��������������룡\n");
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
//	printf("���������:>");
//	scanf("%d", &year);
//	if (is_leap_year(year))
//	{
//		printf("%d������.\n",year);
//	}
//	else
//	{
//		printf("%d��������.\n", year);
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
	printf("������һ������:>");
	scanf("%d", &number);
	if (is_prime(number))
	{
		printf("%d������.\n", number);
	}
	else
	{
		printf("%d��������.\n", number);
	}

	system("pause");
	return 0;
}
