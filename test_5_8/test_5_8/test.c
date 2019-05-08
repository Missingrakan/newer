#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
void print(int num)
{
	int i = 1;
	int j = 1;
	for (i = 1; i <= num; i++)
	{
		for (j = 1; j <= i; j++)
		{
			printf("%d*%d=%-2d  ", i, j, i*j);
		}
		printf("\n");
	}
}
int main()
{
	int n = 0;
	printf("请输入乘法口诀行列数：");
	scanf("%d", &n);
	print(n);
	system("pause");
	return 0;
}

//#include<stdio.h>
//#include<stdlib.h>
//int exchange(int *px, int *py)
//{
//	int t = 0;
//	t = *px;
//	*px = *py;
//	*py = t;
//	return 0;
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//	printf("交换前：a=%d,b=%d\n", a, b);
//	exchange(&a, &b);
//	printf("交换后：a=%d,b=%d\n", a, b);
//	system("pause");
//	return 0;
//}
//
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
//		printf("%d是闰年.\n", year);
//	}
//	else
//	{
//		printf("%d不是闰年.\n", year);
//	}
//	system("pause");
//	return 0;
//}
//
//int is_prime(int num)
//{
//	int i = 0;
//	for (i = 2; i <= sqrt(num); i++)
//	{
//		if (num%i == 0)
//			return 0;
//	}
//	return 1;
//
//}
//int main()
//{
//	int number = 0;
//	printf("请输入一个整数:>");
//	scanf("%d", &number);
//	if (is_prime(number))
//	{
//		printf("%d是素数.\n", number);
//	}
//	else
//	{
//		printf("%d不是素数.\n", number);
//	}
//
//	system("pause");
//	return 0;
//}
