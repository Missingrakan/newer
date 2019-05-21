#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<windows.h>
//int count_one_bit(unsigned int n)
//{
//	// 返回 1的位数 
//	int count = 0;
//	while (n)
//	{
//		if (n%2 == 1)
//		{
//			count++;
//		}
//		n = n/2;
//	}
//	return count;
//}
//int main()
//{
//	int n = 0;
//	int ret = 0;
//	scanf("%d", &n);
//	ret = count_one_bit(n);
//	printf("%d中二进制中1的个数:%d\n",n,ret);
//
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

//int main()
//{
//	int i = 0;
//	int n = 0;
//	scanf("%d", &n);
//	printf("偶数位:");
//	for(i=30; i>=0; i-=2)
//	{
//		printf("%d ", (n>>i)&1);
//	}
//	printf("\n");
//	printf("奇数位:");
//	for(i=31; i>=1; i-=2)
//	{			
//		printf("%d ", (n>>i)&1);
//	}
//	printf("\n");
//	
//	system("pause");
//	return 0;
//}
//
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
//int main()
//{
//	int a = 2;
//	int b = 1;
//	int c = 3;
//
//	if(a<b)
//	{
//		Swap(&a, &b);
//	}
//	if(a<c)
//	{
//		Swap(&a, &c);
//	}
//	if(b<c)
//	{
//		Swap(&b, &c);
//	}
//	printf("%d %d %d\n", a, b, c);
//	system("pause");
//	return 0;
//}
//
//int main()
//{
//	int m = 0;
//	int n = 0;
//	int t = 0;
//	scanf("%d%d", &m, &n);//m=18 n=24
//	while(t=m%n)
//	{
//		m = n;
//		n = t;
//	}
//	printf("%d\n", n);
//	system("pause");
//	return 0;
//}
////
//
//void SwapArr(int arr1[], int arr2[], int sz)
//{
//	int i = 0;
//	for(i=0; i<sz; i++)
//	{
//		int tmp = arr1[i];
//		arr1[i] = arr2[i];
//		arr2[i] = tmp;
//	}
//}
//
//void PrintArr(int arr[], int sz)
//{
//	int i = 0;
//	for(i=0; i<sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	printf("\n");
//}
//
//int main()
//{
//	int arr1[] = {1,2,3,4,5};
//	int arr2[] = {6,7,8,9,0};
//	
//	int sz = sizeof(arr1)/sizeof(arr1[0]);
//	SwapArr(arr1, arr2, sz);
//	PrintArr(arr1, sz);
//	PrintArr(arr2, sz);
//	system("pause");
//	return 0;
//}
//
int main()
{
	int i = 0;
	double sum = 0.0;
	int flag = 1;

	for(i=1; i<=100; i++)
	{
		sum = sum + flag*1.0/i;
		flag = -flag;
	}

	printf("sum = %lf\n", sum);

	system("pause");
	return 0;
}
