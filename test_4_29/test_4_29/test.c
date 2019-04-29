#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
//int main()
//{
//	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int k = 7;
//	int left = 0;
//	int right = sizeof(arr) / sizeof(arr[0])-1;
//	int mid = 0;
//
//	while (left<=right)
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
//	if (left > right)
//	{
//		printf("找不到了！\n");
//	}
//	system("pause");
//	return 0;
//}
//int main()
//{
//	int line = 0;
//	int i = 0;
//	printf("请输入一个整数:>");
//	scanf("%d", &line);
//	//上部分
//	for (i = 0 ; i < line; i++)
//	{
//		//打印一行
//		//打印空格
//		int j = 0;
//		for (j = 0; j < line - i - 1 ; j++)
//		{
//			printf(" ");
//		}
//		for (j = 0; j < 2 * i + 1; j++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//	//下部分
//	for (i = 0; i < line - 1;i++)
//	{
//		int j = 0;
//		for (j = 0; j <= i; j++)
//		{
//			printf(" ");
//		}
//		for (j = 0; j < 2 * (line-1-i) - 1; j++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//
//	system("pause");
//	return 0;
//}
#include <math.h>
int main()
{
	int n = 0;
	//123
	//
	for(n=1; n<=1000000; n++)
	{
		//判断n是否为水仙花数
		int count = 1;
		int sum = 0;
		int tmp = n;
		//统计n的位数
		while(tmp/10)
		{
			count++;
			tmp = tmp/10;
		}
		//
		tmp = n;
		while(tmp)
		{
			sum += pow(tmp%10, count);
			tmp /= 10;
		}
		if(n == sum)
		{
			printf("%d \n", n);
		}
	}
	system("pause");
	return 0;
}