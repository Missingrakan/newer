#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//int main()
//{
//	char ch = 'a';
//	char *p = &ch;
//
//	char *p2 = "abcdef";
//	char arr[] = "abcdef";
//
//	return 0;
//}

//int main()
//{
//	int arr[5] = {0};
//	int(*p)[5] = &arr;//����ָ��
//	int *p2[5];//ָ������
//
//	return 0;
//}
//
//int Add(int x, int y)
//{
//	return x+y;
//}
//
//int main()
//{
//	//printf("%p\n", &Add);
//	//printf("%p\n", Add);
//	int arr[10] = {0};
//	int (*parr)[10] = &arr;//int (*)[10]
//	int (*pf)(int, int) = Add;//����ָ��
//	//int (*)(int, int)
//	int ret = (*pf)(3, 7);
//	printf("%d\n", ret);
//
//	system("pause");
//	return 0;
//}


//
//(* (void(*)()) 0)();
//
////����������
//void (*signal(int, void(*)(int)))(int);
//
//typedef void(*pf_t)(int);
////pf_t-����ָ������
//pf_t signal(int, pf_t);
//
//
//int Add(int x, int y)
//{
//	return x+y;
//}
//
//int Sub(int x, int y)
//{
//	return x-y;
//}
//
//int main()
//{
//	int* arr[10];
//	char* arr2[5];
//	//����ָ��
//	int (*p1)(int, int) = &Add;
//	int (*p2)(int, int) = &Sub;
//	//����ָ������
//	int (*parr[4])(int, int) = {Add, Sub};
//	int ret = (*parr[1])(3, 5);
//
//	printf("%d\n", ret);
//	system("pause");
//	return 0;
//}
//
//
void menu()
{
	printf("******************************\n");
	printf("***** 1. add    2. sub    ****\n");
	printf("***** 3. mul    4. div    ****\n");
	printf("*****      0.exit         ****\n");
	printf("******************************\n");
}
int Add(int x, int y)
{
	return x+y;
}
int Sub(int x, int y)
{
	return x-y;
}

int Mul(int x, int y)
{
	return x*y;
}

int Div(int x, int y)
{
	return x/y;
}


void calc(int (*pf)(int, int))
{
	int x = 0;
	int y = 0;
	int ret = 0;

	printf("����������������:>");
	scanf("%d%d", &x, &y);
	ret = pf(x, y);
	printf("ret = %d\n", ret);
}
int main()
{
	int input = 0;
	
	do 
	{
		menu();
		printf("��ѡ��:>");
		scanf("%d", &input);
		switch(input)
		{
		case 1:
			calc(Add);
			break;
		case 2:
			calc(Sub);
			break;
		case 3:
			calc(Mul);
			break;
		case 4:
			calc(Div);
			break;
		case 0:
			printf("����\n");
			break;
		default:
			printf("����������!\n");
			break;
		}
	} while (input);

	system("pause");
	return 0;
}


