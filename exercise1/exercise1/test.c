#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

//int main()
//{
//	printf("hello bit\n");
//	system("pause");
//	return 0;
//}

//int main()
//{
//	printf("%d\n", sizeof(char));
//	printf("%d\n", sizeof(short));
//	printf("%d\n", sizeof(int));
//	printf("%d\n", sizeof(long));
//	printf("%d\n", sizeof(long long));
//	printf("%d\n", sizeof(float));
//	printf("%d\n", sizeof(double));
//
//	system("pause");
//	return 0;
//}

//enum Sex
//{
//	MALE,
//	FEMALE,
//	SECRET
//};
//int main()
//{
//	enum Sex s = MALE;
//	printf("%d\n",MALE);
//	printf("%d\n", FEMALE);
//	printf("%d\n", SECRET);
//
//	system("pause");
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	int count = 0;
//	for (i = 100; i <= 200; i++)
//	{
//		//判断i是否为素数
//		int j = 0;
//		for (j = 2; j < i; j++)
//		{
//			if (i%j == 0)
//			{
//				break;
//			}
//		}
//		if (i == j)
//		{
//			printf("%d ", i);
//			count++;
//		}
//	}
//	printf("\ncount = %d\n", count);
//
//	system("pause");
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	int count = 0;
//	for (i = 100; i <= 200; i++)
//	{
//		判断i是否为素数
//		int j = 0;
//		for (j = 2; j <= sqrt(i); j++)
//		{
//			if (i%j == 0)
//			{
//				break;
//			}
//		}
//		if (j > sqrt(i))
//		{
//			printf("%d ", i);
//			count++;
//		}
//	}
//	printf("\ncount = %d\n", count);
//
//	system("pause");
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	int count = 0;
//	for (i = 101; i <= 200; i += 2)
//	{
//		//判断i是否为素数
//		int j = 0;
//		for (j = 2; j <= sqrt(i); j++)
//		{
//			if (i%j == 0)
//			{
//				break;
//			}
//		}
//		if (j > sqrt(i))
//		{
//			printf("%d ", i);
//			count++;
//		}
//	}
//	printf("\ncount = %d\n", count);
//
//	system("pause");
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	for (i = 1; i <= 9; i++)
//	{
//		int j = 0;
//		for (j = 1; j <= i; j++)
//		{
//			printf("%d*%d=%-2d ", i, j, i*j);
//		}
//		printf("\n");
//	}
//
//	system("pause");
//	return 0;
//}

//int main()
//{
//	int year = 0;
//	int count = 0;
//
//	for (year = 1000; year <= 2000; year++)
//	{
//		if (((year % 4 == 0) && (year % 100 != 0))  || year % 400 == 0)
//		{
//			printf("%d ", year);
//			count++;
//		}
//		//判断闰年
//	//	if (year % 4 == 0)
//	//	{
//	//		if (year % 100 != 0)
//	//		{
//	//			printf("%d ", year);
//	//			count++;
//	//		}
//	//	}
//	//	if (year % 400 == 0)
//	//	{
//	//		printf("%d ", year);
//	//		count++;
//	//	}
//	}
//	printf("\ncount = %d\n", count);
//
//	system("pause");
//	return 0;
//}

//
//int main()
//{
//	printf("加入比特!");
//	int line = 0;
//	while (line <= 20000)
//	{
//		printf("我要继续努力敲代码!\n");
//		line++;
//	}
//	if (line > 20000)
//	{
//		printf("get a good offer\n");
//	}
//
//	system("pause");
//	return 0;
//}
//
//enum
//{
//	EXIT,
//	ADD,
//	SUB,
//	MUL,
//	DIV
//};
//
//int add()
//{
//	int num1 = 0;
//	int num2 = 0;
//	printf("请输入两个操作数:>");
//	scanf("%d%d", &num1, &num2);
//	return (num1 + num2);
//}
//
//int sub()
//{
//	int num1 = 0;
//	int num2 = 0;
//	printf("请输入两个操作数:>");
//	scanf("%d%d", &num1, &num2);
//	return (num1 - num2);
//}
//
//int mul()
//{
//	int num1 = 0;
//	int num2 = 0;
//	printf("请输入两个操作数:>");
//	scanf("%d%d", &num1, &num2);
//	return (num1*num2);
//}
//
//int div()
//{
//	int num1 = 0;
//	int num2 = 0;
//	printf("请输入两个操作数:>");
//	scanf("%d%d", &num1, &num2);
//	return (num1/num2);
//}
//
//int main()
//{
//	int input = 0;
//	int ret = 0;
//	do 
//	{
//		printf("*********************************\n");
//		printf("******    1.add   2.sub    ******\n");
//		printf("******    3.mul   4.div    ******\n");
//		printf("******         0.exit      ******\n");
//		printf("*********************************\n");
//		printf("请选择:>");
//		scanf("%d", &input);
//		switch (input)
//		{
//		    case ADD:
//				ret = add();
//   			printf("ret = %d\n", ret);
//				break;
//			case SUB:
//				ret = sub();
//				printf("ret = %d\n", ret);
//				break;
//		    case MUL:
//				ret = mul();
//				printf("ret = %d\n", ret);
//				break;
//			case DIV:
//				ret = div();
//				printf("ret = %d\n", ret);
//				break;
//			case EXIT:
//				printf("退出程序!\n");
//				break;
//			default:
//				printf("选择错误,请重新输入!\n");
//				break;
//		}
//	} while (input);
//
//	system("pause");
//	return 0;
//}
//
//int main()
//{
//	int a = -1;
//	int b = a << 1;
//	printf("%d\n", a);
//	printf("%d\n", b);
//
//	system("pause");
//	return 0;
//}
//
//struct stu
//{
//	char name[20];
//	int age;
//};
//
//void test()
//{
//	static int a = 1;
//	a++;
//	printf("%d ", a);
//}
//int main()
//{
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		test();
//	}
//	system("pause");
//	return 0;
//}
//enum
//{
//	MONDAY = 1,
//	TUESDAY,
//	WEDNESDAY,
//	THURSDAY,
//	FRIDAY,
//	SATURDAY,
//	SUNDAY
//};
//int main()
//{
//	int day = 0;
//	printf("请输入:>");
//	scanf("%d", &day);
//
//	switch (day)
//	{
//		case MONDAY:
//			printf("星期一\n");
//			break;
//		case TUESDAY:
//			printf("星期二\n");
//			break;
//		case WEDNESDAY:
//			printf("星期三\n");
//			break;
//		case THURSDAY:
//			printf("星期四\n");
//			break;
//		case FRIDAY:
//			printf("星期五\n");
//			break;
//		case SATURDAY:
//			printf("星期六\n");
//			break;
//		case SUNDAY:
//			printf("星期日\n");
//			break;
//		default:
//			printf("输入错误\n");
//			break;
//	}
//
//	system("pause");
//	return 0;
//}

//
//int main()
//{
//	int ch = 0;
//	while ((ch = getchar()) != EOF)
//	{
//		putchar(ch);
//	}
//
//	system("pasue");
//	return 0;
//}

//#include <string.h>
//int main()
//{
//	//int *p = (int*)malloc(INT_MAX);
//	int *p = (int*)malloc(40);
//	int i = 0;
//	if (NULL == p)
//	{
//		printf("%s\n", strerror(errno));
//	}
//	for (i = 0; i < 10; i++)
//	{
//		*(p + i) = i + 1;
//	}
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", *(p + i));
//	}
//
//	free(p);
//	p = NULL;
//	system("pause");
//	return 0;
//}
//
//struct S
//{
//	int n;
//	int arr[];
//};
//
//int main()
//{
//	int i = 0;
//	struct S* ptr = NULL;
//	struct S* p = (struct S*)malloc(sizeof(struct S) + 40);
//	if (p == NULL)
//	{
//		return 0;
//	}
//	//使用
//	p->n = 4;
//	for (i = 0; i < 10; i++)
//	{
//		p->arr[i] = i;
//	}
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", p->arr[i]);
//	}
//	//change size
//	ptr = (struct S*)realloc(p, 84);
//	if (ptr != NULL)
//	{
//		p = ptr;
//	}
//	free(p);
//	p = NULL;
//	system("pause");
//	return 0;
//
#include <string.h>
//int main()
//{
//	FILE* pf = fopen("test.txt", "w");
//	char *p = "hello bit";
//	if (pf == NULL)
//	{
//		printf("%s\n",strerror(errno));
//		return 0;
//	}
//	//写文件
//	while (*p)
//	{
//		fputc(*p, pf);
//		p++;
//	}  
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}
//
//int main()
//{
//	FILE* pf = fopen("test.txt", "r");
//	int ch = 0;
//	if (pf == NULL)
//	{
//		printf("%s\n", strerror(errno));
//		return 0;
//	}
//	//读取文件
//	while ((ch = fgetc(pf)) != EOF)
//	{
//		printf("%c\n", ch);
//	}
//
//	system("pause");
//	return 0;
//}
struct S
{
	char name[20];
	short age;
	float sc;
};

//int main()
//{
//	struct S s = { "zhangsan", 20, 55.5 };
//	FILE* pf = fopen("test.txt", "wb");
//	if (pf == NULL)
//	{
//		printf("%s\n", strerror(errno));
//		return 0;
//	}
//	//写文件
//	fwrite(&s,sizeof(struct S),1,pf);
//	fclose(pf);
//	pf = NULL;
//	return 0;
//
//}

//int main()
//{
//	struct S s = { 0 };
//	FILE* pf = fopen("test.txt", "rb");
//	if (pf == NULL)
//	{
//		printf("%s\n", strerror(errno));
//		return 0;
//	}
//	//读文件
//	fread(&s, sizeof(struct S), 1, pf);
//	printf("%d %s %f\n", s.age, s.name, s.sc);
//	fclose(pf);
//	pf = NULL;
//
//	system("pause");
//	return 0;
//}