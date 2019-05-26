#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<stdlib.h>
//
//int count_one_bit(unsigned int n)
//{
//	int count = 0;
//	while (n)
//	{
//		if (n%2 == 1)
//		{
//			count++;
//		}
//		n = n / 2;
//	}
//	return count;
//}
//int count_one_bit(unsigned int n)
//{
//	int count = 0;
//	while (n)
//	{
//		if ((n & 1) == 1)
//		{
//			count++;
//		}
//		n = n >> 1;
//	}
//	return count;
//}
//#include<stdio.h>
//#include<stdlib.h>
//#include<time.h>
//#include<windows.h>
//
//int main()
//{
//	int x = 0;
//	srand((unsigned int)time(NULL));
//
//	while (1)
//	{
//		x = rand();
//		printf("%d", x);
//		Sleep(1);
//	}
//
//	system("pause");
//	return 0;
//}
//int count_one_bit(unsigned int n)
//{
//	int count = 0;
//	int i = 0;
//	for (i = 1; i <= 32; i++)
//	{
//		if (((n >> i) & 1) == 1)
//		{
//			count++;
//		}
//	}
//	return count;
//}
//
//int main()
//{
//	int input = 0;
//	int ret = 0;
//	
//	printf("请输入一个数:>");
//	scanf("%d", &input);
//	ret = count_one_bit(input);
//	printf("%d\n", ret);
//	/*ret = count_one_bit(input);
//	printf("%d\n", ret);*/
//
//	system("pause");
//	return 0;
//}
//
//int main()
//{
//	int n = 0;
//	int i = 0;
//	printf("请输入一个数:>");
//	scanf("%d", &n);
//	printf("偶数位:>");
//	for (i = 32; i >= 2;i-=2)
//	{
//		printf("%d", (n>>i) & 1);
//	}
//	printf("\n");
//
//	printf("奇数位:>");
//	for (i = 31; i >= 1; i-=2)
//	{
//		printf("%d", (n>>i) & 1);
//	}
//	printf("\n");
//
//	system("pause");
//	return 0;
//}
//
//int main()
//{
//	int input = 0;
//	int i = 0;
//	printf("请输入一个整数:>");
//	scanf("%d", &input);
//	for (i = 0; i < 32; i++)
//	{
//		printf("%d", (input >> i) & 1);
//	}
//	printf("\n");
//
//	system("pause");
//	return 0;
//}
//int compare_one_bit(unsigned int m, unsigned int n)
//{
//	int count = 0;
//	int i = 0;
//	for (i = 0; i < 32;i++)
//	{
//		if (((m>>i) & 1) != ((n>>i) & 1))
//		{
//			count++;
//		}
//	}
//	return count;
//}
//
//int main()
//{
//
//	int m = 0;
//	int n = 0;
//	int ret = 0;		
//	printf("请输入一个数:>");
//	scanf("%d%d", &m,&n);
//	ret = compare_one_bit(m,n);
//	printf("%d\n", ret);
//
//	system("pause");
//	return 0;
//}
//
//int compare_one_bit(unsigned int num)
//{
//	int count = 0;
//	while (num)
//	{
//		num = num&(num - 1);
//		count++;
//	}
//	return count;
//}
//
//int main()
//{
//
//	int m = 0;
//	int n = 0;
//	int ret = 0;
//	printf("请输入一个数:>");
//	scanf("%d%d", &m, &n);
//	ret = compare_one_bit(m^n);
//	printf("%d\n", ret);
//
//	system("pause");
//	return 0;
//}
//unsigned int reverse_bit(unsigned int value)
//{
//	int i = 31;
//	int m = 0;
//	unsigned int sum = 0;
//	while (value != 0)
//	{
//		m = value & 1;
//		value = value >> 1;
//		sum = sum + m*pow(2, i);
//		i--;
//	}
//	return sum;
//}
//int main()
//{
//	int input = 0;
//	unsigned int ret = 0;
//	printf("请输入一个数:>");
//	scanf("%d%d",&input);
//	ret = reverse_bit(input);
//	printf("%u", ret);
//	
//	system("pause");
//	return 0;
//}

#include<stdio.h>
#include<math.h>

unsigned int reverse_bit(unsigned int value)
{
	int i = 31;
	int m;
	unsigned  int sum = 0;

	while (value != 0)
	{
		m = value & 1;      //取余  
		value = value >> 1; //除2  
		sum = sum + m * pow(2, i);    //pow(2,1)表示2的i次方  
		i--;
	}
	return sum;
}
int main()
{
	unsigned  int num = 0;
	printf("请输入一个整数：> ");
	scanf("%d", &num);
	num = reverse_bit(num);
	printf("num=%u\n", num);
	system("pause");
	return 0;
}