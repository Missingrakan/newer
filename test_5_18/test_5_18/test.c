#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
//
//int main()
//{
//	int i = 0;
//	int count = 0;
//	//试除法
//	for(i=101; i<=200; i+=2)
//	{
//		//判断i是否为素数
//		int j = 0;
//		for(j=2; j<=sqrt(i); j++)
//		{
//			if(i%j == 0)
//			{
//				break;
//			}
//		}
//		if(j>sqrt(i))
//		{
//			printf("%d ", i);//素数
//			count++;
//		}
//	}
//	//
//	printf("\ncount = %d\n", count);
//	system("pause");
//	return 0;
//}

//
//<素数求解的n种境界>
//

//
// 1*1=1
// 2*1=2 2*2=4
// 3*1=3 3*2=6 3*3=9
// ...
//
//int main()
//{
//	//
//	int i = 0;
//	for(i=1; i<=9; i++)
//	{
//		//打印一行
//		int j = 0;
//		for(j=1; j<=i; j++)
//		{
//			//打印一项
//			printf("%d*%d=%-2d ", i, j, i*j);
//		}
//		printf("\n");
//	}
//	system("pause");
//	return 0;
//}
//
//
//int main()
//{
//	int year=0;
//	int count = 0;
//	for(year=1000; year<=2000; year++)
//	{
//		//判断闰年
//
//		if(((year%4==0)&&(year%100!=0))||(year%400==0))
//		{
//			printf("%d ", year);
//			count++;
//		}
//		/*if(year%4==0)
//		{
//			if(year%100 != 0)
//			{
//				printf("%d ", year);
//				count++;
//			}
//		}
//		if(year%400 == 0)
//		{
//			printf("%d ", year);
//			count++;
//		}*/
//	}
//	printf("\ncount = %d\n", count);
//	system("pause");
//	return 0;
//}

#include <string.h>
//
//int main()
//{
//	//printf("%d\n", strlen("abc"));
//	//printf("%d\n", strlen("c:\test\328\test.c"));
//	//printf("%c\n", '\x32');
//	//
//	//070
//	//
//	//A a # $ %
//	//65 97 ...
//	//
//	//ASCII编码
//	//ASCII码表
//	//ASCII码值
//	//
//	system("pause");
//	return 0;
//}
//
//
//int main()
//{
//	//C++的注释风格
//	//创建一个整型变量
//	//int a = 10;
//
//	/*
//	int i = 0;
//	for(i=0; i<10; i++)
//	{
//
//	}
//	*/
//	return 0;
//}
//
int main()
{
	int input = 0;
	printf("加入比特!\n");
	printf("你要敲代码吗？(1/0)");
	scanf("%d", &input);
	if(input == 1)
	{
		printf("好offer\n");
	}
	else
	{
		printf("卖红薯\n");
	}
	system("pause");
	return 0;
}
//
//int main()
//{
//	int line = 0;
//	printf("加入比特\n");
//
//	while(line<=20000)
//	{
//		printf("敲代码\n");
//		line++;
//	}
//	if(line>20000)
//	{
//		printf("好offer\n");
//	}
//	system("pause");
//	return 0;
//}

