#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<windows.h>

//
//int main()
//{
//	char ch = 0;
//
//	while((ch = getchar()) != EOF)
//	{
//		if(ch>='a' && ch<='z')
//		{
//			putchar(ch-32);
//		}
//		else if(ch>='A' && ch<='Z')
//		{
//			putchar(ch+32);
//		}
//		else if(ch>='0' && ch<='9')
//		{
//			;
//		}
//		else
//		{
//			putchar(ch);
//		}
//	}
//	return 0;
//}
//1*1=1
//2*1=2 2*2=4
//3*1=3 3*2=6 3*3=9
//
// 
// void print_table(int n)
// {
// 	int i = 0;
// 	for(i=1; i<=n; i++)//n
// 	{
// 		//打印一行
// 		int j = 0;
// 		for(j=1; j<=i; j++)
// 		{
// 			//打印一项
// 			printf("%d*%d=%d ", i, j, i*j);
// 		}
// 		printf("\n");
// 	}
// }
// 
// int main()
// {
// 	int line = 0;
// 	scanf("%d", &line);
// 	print_table(line);//9
// 	system("pause");
// 	return 0;
// }
//
//void Init(int arr[], int n)
//{
//	int i = 0;
//	for(i=0; i<n; i++)
//	{
//		arr[i] = i+1;
//	}
//}
//
//void Print(int arr[], int n)
//{
//	int i = 0;
//	for(i=0; i<n; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	printf("\n");
//}
//
//void Reverse(int arr[], int sz)
//{
//	int left = 0;
//	int right = sz-1;
//
//	while(left<right)
//	{
//		int tmp = arr[left];
//		arr[left] = arr[right];
//		arr[right] = tmp;
//		left++;
//		right--;
//	}
//}
//
//
//void Empty(int arr[], int sz)
//{
//	int i = 0;
//	for(i=0; i<sz; i++)
//	{
//		arr[i] = 0;
//	}
//}
//
//int main()
//{
//	int arr[10] = {0};
//	int sz = sizeof(arr)/sizeof(arr[0]);
//	Print(arr, sz);
//	Init(arr, sz);//1 2 3 4 5 6 7 8 9 10
//	Print(arr, sz);
//	Reverse(arr, sz);
//	Print(arr, sz);
//	Empty(arr, sz);
//	Print(arr, sz);
//	system("pause");
//	return 0;
//}

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

int main()
{
	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	int k = 7;
	int left = 0;
	int right = sizeof(arr) / sizeof(arr[0]) - 1;
	int mid = 0;

	while (left <= right)
	{
		mid = left +(right - left)/ 2;
		if (arr[mid] < k)
		{
			left = mid + 1;
		}
		else if (arr[mid] > k)
		{
			right = mid - 1;
		}
		else
		{
			printf("找到了，下标是%d\n", mid);
			break;
		}
	}
	if (left > right)
	{
		printf("找不到了!");
	}

	system("pause");
	return 0;
}
