#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>

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

//
double Pow(int n, int k)//2 -3
{
	if(k == 0)
		return 1;
	else if(k>0)
		return n*Pow(n, k-1);
	else
		return 1.0/(Pow(n, -k));
}

int main()
{
	int n = 0;
	int k = 0;
	double ret = 0.0;
	scanf("%d%d", &n, &k);//3 5
	ret = Pow(n, k);
	printf("%lf\n", ret);
	system("pause");
	return 0;
}

