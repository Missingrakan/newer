#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>

//void Printf(int arr[], int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d", arr[i]);
//	}
//	printf("\n");
//}
//void MoveOddEven(int arr[], int sz)
//{
//	int tmp = 0;
//	int left = 0;
//	int right = sz - 1;
//	while (left < right)
//	{
//
//		//找偶数
//		while ((left<right) && (arr[left] % 2 != 0))
//		{
//			left++;
//		}
//		//找奇数
//		while ((left<right) && (arr[right] % 2 == 0))
//		{
//			right--;
//		}
//		//交换
//		if (left < right)
//		{
//			tmp = arr[left];
//			arr[left] = arr[right];
//			arr[right] = tmp;
//		}
//	}
//}
//
//int main()
//{
//	int arr[] = {  1, 2, 3, 4, 5, 6, 7, 8, 9, 0 };
//	int sz = sizeof(arr) / sizeof(*arr);
//	MoveOddEven(arr, sz);
//	Printf(arr, sz);
//
//	system("pause");
//	return 0;
//}

//struct point
//{
//	int x;
//	int y;
//};
//struct point FindNum(int arr[3][3], int k, int row, int col)
//{
//	struct point ret = { -1, -1 };
//	int x = 0;
//	int y = col - 1;
//
//	while (x < row && y >= 0)
//	{
//		if (arr[x][y] > k)
//		{
//			y--;
//		}
//		else if (arr[x][y] < k)
//		{
//			x++;
//		}
//		else
//		{
//			ret.x = x;
//			ret.y = y;
//			return ret;
//		}
//	}
//	return ret;
//}
//int main()
//{
//	int arr[3][3] = { 1, 2, 3, 4, 5, 6, 7, 8, 9 };
//	int k = 7;
//	struct point ret = { 0 };
//	ret = FindNum(arr, k, 3, 3);
//	if (ret.x == -1)
//	{
//		printf("找不到\n");
//	}
//	else
//	{
//		printf("%d %d\n", ret.x, ret.y);
//	}
//
//	system("pause");
//	return 0;
//}

//void FindNum(int arr[3][3], int k, int* prow, int* pcol)
//{
//	int x = 0;
//	int y = *pcol-1;
//	while(x<*prow && y>=0)
//	{
//		if(arr[x][y] > k)
//		{
//			y--;
//		}
//		else if(arr[x][y] < k)
//		{
//			x++;
//		}
//		else
//		{
//			*prow = x;
//			*pcol = y;
//			return;
//		}
//	}
//	*prow = -1;
//	*pcol = -1;
//}
//
//int main()
//{
//	//int arr[3][3] = {1,2,3,2,3,4,4,5,6};
//	int arr[3][3] = {1,2,3,4,5,6,7,8,9};
//	int x = 3;
//	int y = 3;
//	//返回型参数
//	FindNum(arr, 7, &x, &y);
//	if(x == -1)
//	{
//		printf("找不到\n");
//	}
//	else
//	{
//		printf("%d %d\n", x, y);
//	}
//	system("pause");
//	//1 2 3
//	//4 5 6
//	//7 8 9
//	return 0;
//}

#include<string.h>
void left_move(char* str, int k)
{
	int j = 0;
	for (j = 0; j < k; j++)
	{
		//旋转1个字符
		char tmp = *str;
		int len = strlen(str);
		int i = 0;
		for (i = 0; i < len - 1; i++)
		{
			*(str + i) = *(str + i + 1);
		}
		*(str + len - 1) = tmp;
	}
}

#include<assert.h>

int main()
{
	char arr[] = "abcdef";
	int k = 0;
	printf("%s\n", arr);
	printf("将字符串左旋几个字符:>");
	scanf("%d", &k);
	left_move(arr, k);
	printf("%s", arr);

	system("pause");
	return 0;
}