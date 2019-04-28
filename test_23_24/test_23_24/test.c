#define _CRT_SECURE_NO_WARNINGS 1
#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
//int fib(int n)
//{
//	if (n <= 2)
//		return  1;
//	else
//		return  fib(n - 1) + fib(n - 2);
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
//	scanf("%d", &n);
//	ret = fib(n);
//	printf("%d\n", ret);
//	system("pause");
//
//	return 0;
//}
//int fact(int m, int n)
//{
//	if (n == 0)
//		return 1;
//	if (n == 1)
//		return m;
//	else
//		return m*fact(m, n - 1);
//}
//int main()
//{
//	int n = 0;
//	int k = 0;
//	int ret = 0;
//	
//	printf("请输入底数和指数:>");
//	scanf("%d %d", &n, &k);
//	ret = fact(n, k);
//	printf("%d^%d = %d\n", n, k, ret);
//	
//	system("pause");
//	return 0;
//}
//int strlen(char* p)
//{
//	if (*p == '\0')
//		return 0;
//	else
//		return 1 + strlen(p + 1);
//}
//int main()
//{
//	char arr[] = "abcdef";
//	int len = 0;
//	
//	len = strlen(arr);
//	printf("%d\n", len);
//
//	system("pause");
//	return 0;
//}
int factorial(int n)
{
	if (n <= 1)
		return 1;
	else
		return n*factorial(n - 1);
}
int main()
{
	int n = 0;
	int ret = 0;

	printf("请输入一个整数:>");
	scanf("%d", &n);
	ret = factorial(n);
	printf("%d! = %d", n, ret);

	system("pause");
	return 0;
}
