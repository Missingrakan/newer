#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
//
//int main()
//{
//	int i = 0;
//	int count = 0;
//	//�Գ���
//	for(i=101; i<=200; i+=2)
//	{
//		//�ж�i�Ƿ�Ϊ����
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
//			printf("%d ", i);//����
//			count++;
//		}
//	}
//	//
//	printf("\ncount = %d\n", count);
//	system("pause");
//	return 0;
//}

//
//<��������n�־���>
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
//		//��ӡһ��
//		int j = 0;
//		for(j=1; j<=i; j++)
//		{
//			//��ӡһ��
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
//		//�ж�����
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
//	//ASCII����
//	//ASCII���
//	//ASCII��ֵ
//	//
//	system("pause");
//	return 0;
//}
//
//
//int main()
//{
//	//C++��ע�ͷ��
//	//����һ�����ͱ���
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
	printf("�������!\n");
	printf("��Ҫ�ô�����(1/0)");
	scanf("%d", &input);
	if(input == 1)
	{
		printf("��offer\n");
	}
	else
	{
		printf("������\n");
	}
	system("pause");
	return 0;
}
//
//int main()
//{
//	int line = 0;
//	printf("�������\n");
//
//	while(line<=20000)
//	{
//		printf("�ô���\n");
//		line++;
//	}
//	if(line>20000)
//	{
//		printf("��offer\n");
//	}
//	system("pause");
//	return 0;
//}

