#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>

//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	int d = 0;
//	int e = 0;
//	for (a = 1; a <= 5; a++)
//	{
//		for (b = 1; b <= 5; b++)
//		{
//			for (c = 1; c <= 5; c++)
//			{
//				for (d = 1; d <= 5; d++)
//				{
//					for (e = 1; e <= 5; e++)
//					{
//						if ((b == 2) + (a == 3) == 1 &&
//							(b == 2) + (e == 4) == 1 &&
//							(c == 1) + (d == 2) == 1 &&
//							(c == 5) + (d == 3) == 1 &&
//							(e == 4) + (a == 1) == 1)
//						{
//							if (a*b*c*d*e==120)
//							  printf("a=%d b=%d c=%d d=%d e=%d\n", a, b, c, d, e);
//						}
//					}
//				}
//			}
//		}
//	}
//
//	system("pause");
//	return 0;
//}


//int main()
//{
//	char killer = 0;
//	for (killer = 'a'; killer <= 'd'; killer++)
//	{
//		if ((killer != 'a') + (killer == 'c') + (killer == 'd') + (killer != 'd') == 3)
//			printf("%c是凶手!\n", killer);
//	}
//	
//	system("pause");
//	return 0;
//}

//int main()
//{
//	int arr[10][10] = { 0 };
//	int i = 0;
//	int j = 0;
//
//	for (i = 0; i < 10; i++)
//	{
//		for (j = 0; j <= i; j++)
//		{
//			if (i == j)
//				arr[i][j] = 1;
//			if (j == 0)
//				arr[i][j] = 1;
//			if (i>=2 && j>=1)
//				arr[i][j] = arr[i - 1][j - 1] + arr[i - 1][j];
//		}
//	}
//
//	for (i = 0; i < 10; i++)
//	{
//		for (j = 0; j <= i; j++)
//		{
//			printf("%d ", arr[i][j]);
//		}
//		printf("\n");
//	}
//
//	system("pause");
//	return 0;
//}

//#include<arrset.h>
//#include <assert.h>
//int my_strlen(const char* str)
//{
//	assert(str != NULL);
//	int count = 0;
//	while (*str != '\0')
//	{
//		count++;
//		str++;
//	}
//	return count;
//}
//void reverse_str(char* left, char* right)
//{
//	assert(left != NULL);
//	assert(right != NULL);
//
//	while (left<right)
//	{
//		char tmp = *left;
//		*left = *right;
//		*right = tmp;
//		left++;
//		right--;
//	}
//}
//void reverse( char* str)
//{
//	assert( str != NULL);
//	int sz = my_strlen(str);
//	reverse_str(str,str+sz-1);
//
//	while (*str != '\0')
//	{
//		//逆序一个单词
//		char* start = str;
//		while (*str != ' ' && *str != '\0')
//		{
//			str++;
//		}
//		reverse_str(start, str - 1);
//		if (*str == ' ')
//		{
//			str++;
//		}
//	}
//
//}
//int main()
//{
//	char str[] = "student a am i";
//	reverse(str);
//	printf("%s\n", str);
//
//	system("pause");
//	return 0;
//}

unsigned int reverse_bit(unsigned int n)
{
	int i = 0;
	unsigned int sum = 0;
	for(i=0; i<32; i++)
	{
		sum += ((n>>i)&1)*(1<<(31-i));
	}
	return sum;
}

//unsigned int reverse_bit(unsigned int n)
//{
//	int i = 0;
//	unsigned int sum = 0;
//	for(i=0; i<32; i++)
//	{
//		sum <<= 1;//sum = sum<<1;
//		sum |= ((n>>i)&1);
//	}
//
//	return sum;
//}
//
int main()
{
	int num = 0;
	unsigned int ret = 0;
	scanf("%d", &num);//25
	ret = reverse_bit(num);
	printf("%u\n", ret);//%d---有符号的整数 %u----无符号的整数

	system("pause");
	return 0;
}