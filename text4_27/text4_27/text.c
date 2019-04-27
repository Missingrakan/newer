#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
//int fib(int n)
//{
//	
//	if (n == 3)
//		count++;
//	if (n <= 2)
//		return  1;
//	else 
//		return  fib(n - 1) + fib(n - 2);
//
//}
//int fib(int n)
//{
//	int a = 1;
//	int b = 1;
//	int c = 0;
//	while (n > 2)
//	{
//		c = a + b;
//		a = b;
//		b = c;
//		n--;
//	}
//	return c;
//}
//int main()
//{
//	int n = 0;
//	int ret = 0;
//
//	scanf("%d",&n);
//	ret = fib(n);
//	printf("%d\n", ret);
//	system("pause");
//
//	return 0;
//}
//int main()
//{
//	int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int k = 7;
//
//	int left = 0;
//	int right = sizeof(arr)/sizeof(arr[0])- 1;
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
//			printf("找到了，下标是：%d\n",mid);
//			break;
//		}
//	}
//	if (left > right)
//		printf("找不到了\n");
//	system("pause");
//	return 0;
//}
int binary_search(int arr[], int k, int left,int right)
{
	int mid = 0;
	
	while (left <= right)
	{
		mid = left + (right - left) / 2;
		if (arr[mid] < k)
		{
			left = mid + 1;
		}
		else if (arr[mid]>k)
		{
			right = mid - 1;
		}
		else
		{
			return mid;
		}
	}
	return -1;
}
int main()
{
	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	int k = 7;
	int sz = sizeof(arr) / arr[0]-1;
	int left = 0;
	int right = sz - 1;
	int ret = binary_search(arr, k, left, right);
	if (ret == -1)
	{
		printf("找不到呀！\n");
	}
	else
	{
		printf("找到了，下标是：%d\n", ret);
	}
	system("pause");
	return 0;
}