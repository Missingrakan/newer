#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

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
//			printf("�ҵ��ˣ��±��ǣ�%d\n",mid);
//			break;
//		}
//	}
//	if (left > right)
//		printf("�Ҳ�����\n");
//	system("pause");
//	return 0;
//}
//int binary_search(int arr[], int k, int left,int right)
//{
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
//			return mid;
//		}
//	}
//	return -1;
//}
//int main()
//{
//	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int k = 7;
//	int sz = sizeof(arr) / sizeof(arr[0]) - 1;
//	int left = 0;
//	int right = sz - 1;
//	int ret = binary_search(arr,k ,left,right);
//	if (ret == -1)
//	{
//		printf("�Ҳ���ѽ!\n");
//	}
//	else
//	{
//		printf("�±��ǣ�%d", ret);
//	}
//
//	system("pause");
//	return 0;
//	
//}
//void Swap1(int x, int y)
//{
//	int tmp = 0;
//	tmp = x;
//	x = y;
//	y = tmp;
//}
//void Swap2(int *px, int *py)
//{
//	int tmp = 0;
//	tmp = *px;
//	*px = *py;
//	*py = tmp;
//}
//int main()
//{
//	int num1 = 1;
//	int num2 = 2;
//	Swap1(num1, num2);
//	printf("Swap1::num1 = %d num2 = %d\n", num1, num2);
//	Swap2(&num1, &num2);
//	printf("Swap2::num1 = %d num2 = %d\n", num1, num2);
//	system("pause");
//	return 0;
//}
//#define _CRT_SECURE_NO_WARNINGS 1
//
//#include<stdio.h>
//#include<stdlib.h>
//#include<string.h>
//int binary_search(int arr[], int k, int sz)
//{
//	int left = 0;
//	int right = sz - 1;
//	int mid = 0;
//	while (left <= right)
//	{
//		mid = left + (right - left) / 2;
//		if (arr[mid] < k)
//		{
//			left = mid + 1;
//		}
//		else if (arr[mid] > k)
//		{
//			right = mid - 1;
//		}
//		else
//		{
//			return mid;
//		}
//	}
//	if (left > right)
//	{
//		return -1;
//	}
//}
//int main()
//{
//	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int k = 7;
//	int sz = sizeof(arr) / sizeof(arr[0]) - 1;
//	int ret = binary_search(arr, 7, sz);
//	if (ret == -1)
//	{
//		printf("�Ҳ���ѽ!\n");
//	}
//	else
//	{
//		printf("�ҵ��ˣ��±���:%d\n", ret);
//	}
//	/*while (left <= right)
//	{
//		mid = left + (right - left) / 2;
//		if (arr[mid] < k)
//		{
//			left = mid + 1;
//		}
//		else if (arr[mid] > k)
//		{
//			right = mid - 1;
//		}
//		else
//		{
//			printf("�ҵ��ˣ��±���:%d\n", mid);
//			break;
//		}
//	}
//	if (left > right)
//	{
//		printf("�Ҳ���ѽ��");
//	}*/
//	system("pause");
//	return 0;
//}
//void menu()
//{
//	printf("******************************");
//}
//int main()
//{
//
//	system("pause");
//	return 0;
//}
//int main()
//{
//	char psw[20] = { 0 };
//	int i = 0;
//
//	for (i = 0; i < 3; i++)
//	{
//		printf("����������:->");
//		scanf("%s", psw);
//		if (strcmp(psw, "123456") == 0)
//		{
//			printf("����ɹ�\n");
//			break;
//		}
//		else
//		{
//			printf("����������������룡\n");
//		}
//	}
//
//	if (i == 3)
//	{
//		printf("����������������˳�����\n");
//	}
//
//	system("pause");
//	return 0;
//}
//int main()
//{
//	while (1)              //��ѭ�����ܹ����������ַ�
//	{
//		char a = 0;;
//		scanf("%c", &a);
//		if (a >= 'A' && a <= 'Z')
//		{
//			a = a + 32;      //��дתСд
//			printf("%c", a);
//		}
//		else if (a >= 'a' && a <= 'z')
//		{
//			a = a - 32;      //Сдת��д
//			printf("%c", a);
//		}
//		else if (a == '@')//��������ǡ�@��ʱ��������ѭ��
//			break;
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
//	printf("������˷��ھ���������");
//	scanf("%d", &n);
//	print(n);
//	system("pause");
//	return 0;
//}
int exchange(int *px, int *py)
{
	int t = 0;
	t = *px;
	*px = *py;
	*py = t;
	return 0;
}
int main()
{
	int a = 10;
	int b = 20;
	printf("����ǰ��a=%d,b=%d\n", a, b);
	exchange(&a, &b);
	printf("������a=%d,b=%d\n", a, b);
	system("pause");
	return 0;
}