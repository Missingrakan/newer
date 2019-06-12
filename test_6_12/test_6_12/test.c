#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<stdlib.h>

//int drink_count(int price,int empty_bottle,int money)
//{
//	int have_drink = money / price;//买的汽水
//	int count = have_drink;//计数
//	int exchange_drink = 0;
//	while (have_drink > 1)
//	{
//		exchange_drink = have_drink / 2;//空瓶子换来的汽水
//		count = count + exchange_drink;
//		have_drink = exchange_drink;
//	}
//	if ()
//	return count;
//}
//int main()
//{
//	int price = 0;
//	int empty_bottle = 0;
//	int money = 0;
//	int ret = 0;
//
//	printf("请输入汽水单价:> ");
//	scanf("%d", &price);
//	printf("请输入换一瓶汽水的空瓶数:>");
//	scanf("%d", &empty_bottle);
//	printf("请输入钱数:>");
//	scanf("%d", &money);
//	ret = drink_count(price, empty_bottle, money);
//	printf("可换%d瓶汽水。\n", ret);
//
//	system("pause");
//	return 0;
//}

//int count_one_bit(int n)
//{
//	int count = 0;
//	while(n)	
//	{
//		n=n&(n-1);
//		count++;
//	}
//	return count;
//}
//int main()
//{
//	int m = 0;
//	int n = 0;
//	int i = 0;
//	int count = 0;
//	scanf("%d%d", &m, &n);
//	count = count_one_bit(m^n);
//	/*for(i=0; i<32; i++)
//	{
//	if(((m>>i)&1) != ((n>>i)&1))
//	{
//	count++;
//	}
//	}*/
//	printf("count = %d\n", count);
//
//	system("pause");
//	return 0;
//}
//


//牛客网-刷题
//leetcode
//
//int main()
//{
//// 	char ch = 'w';
//// 	char *p = &ch;
//// 	*p = 'b';
//	//char arr[] = "abcdef";
//	//char *p1 = arr;
//
//	//常量字符串
//	//const char* p2 = "abcdef";
//	//printf("%c\n", *p2);
//	//*p2 = 'c';
//
//// 	const char *p1 = "abcdef";
//// 	const char *p2 = "abcdef";
//// 
//// 	if(p1 == p2)
//// 	{
//// 		printf("hehe\n");
//// 	}
//// 	else
//// 	{
//// 		printf("haha\n");
//// 	}
//	char arr1[] = "abcdef";
//	char arr2[] = "abcdef";
//
//	if(arr1 == arr2)
//	{
//		printf("hehe\n");
//	}
//	else
//	{
//		printf("haha\n");
//	}
//	system("pause");
//	return 0;
//}
//
//int main()
//{
//	int a = 10;
//	int*p = &a;
//	int* arr[3] = {&a};
//	return 0;
//}
//
//int main()
//{
//	//int* p;
//	//char *pc;
//	//数组指针
//	//int arr[10] = {0};
//	//int* p = arr;
//	//int (*parr)[10] = &arr;//数组指针
//	//int* arr2[10];
//
//	char* arr[5];
//	char* (*p)[5] = &arr;
//
//	return 0;
//}
//
int main()
{
	int arr[10] = {0};
	printf("%d\n", sizeof(arr));//40
	printf("%d\n", sizeof(&arr));//4

	printf("%p\n", arr);//int* p = arr;
	printf("%p\n", &arr);//int(*p2)[10] = &arr;

	printf("%p\n", arr+1);//int* 
	printf("%p\n", &arr+1);//
	system("pause");
	return 0;
}