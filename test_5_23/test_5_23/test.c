#define _CRT_SECURE_NO_WARNINGS 1
#include <stdlib.h>
#include <stdio.h>
//
//int main()
//{
//	int arr[10] = {0};
//	printf("%p\n", arr);//������Ԫ�ص�ַ
//	printf("%p\n", arr+1);//������Ԫ�ص�ַ
//	//printf("%p\n", &arr[0]);//������Ԫ�ص�ַ
//
//	printf("%p\n", &arr);//����ĵ�ַ
//	printf("%p\n", &arr+1);//����ĵ�ַ
//	//&arr-arr��ʾ��������
//	//sizeof(arr)-arr��ʾ��������
//
//	printf("%d\n", sizeof(arr));//��������ʾ��������
//	system("pause");
//	return 0;
//}
//
//int  main()
//{
//	int arr[10] ={1,2,3,4,5};
//	int* p = arr;
//	int i = 0;
//	for(i=0; i<10; i++)
//	{
//		printf("%d ", *(p+i));
//	}
//	system("pause");
//	return 0;
//}
//
//int main()
//{
//	int a = 10;
//	int* pa = &a;
//	int** ppa = &pa;
//	int*** pppa = &ppa;
//	**ppa  =20;
//	printf("%d\n", a);
//	***pppa = 30;
//	printf("%d\n", a);
//
//	system("pause");
//	return 0;
//}
//
//int main()
//{
//	//int arr[10];
//	//char arr2[5];
//	//ָ������
//	int a = 10;
//	int b = 20;
//	int c = 30;
//	int* arr[5] = {&a, &b, &c};
//	printf("%d\n", *(arr[1]));
//	system("pause");
//	return 0;
//}
//
//int main()
//{
//
//	int arr[10] = {0};
//	int* p = arr;
//	*(p+i) == *(arr+i) == arr[i]
//
//	int arr1[] = {1,2,3,4,5};
//	int arr2[] = {2,3,4,5,6};
//	int arr3[] = {3,4,5,6,7};
//	int* arr4[] = {arr1, arr2, arr3};
//	int i = 0;
//
//	for(i=0; i<3; i++)
//	{
//		int j = 0;
//		for(j=0; j<5; j++)
//		{
//			//printf("%d ", *(arr4[i]+j));
//			printf("%d ", arr4[i][j]);
//		}
//		printf("\n");
//	}
//	system("pause");
//	return 0;
//}
//
//struct Stu
//{
//	char name[20];
//	short age;
//	char sex[5];
//	float score;
//}s1, s2, s3;
//
//int main()
//{
//	//ʹ�ýṹ�����ʹ���һ������
//	struct Stu s;
//	return 0;
//}


//�ṹ������
//typedef struct Stu
//{
//	char name[20];
//	short age;
//	char sex[5];
//	float score;
//}Stu;
//
//int main()
//{
//	//ʹ�ýṹ�����ʹ���һ������
//	struct Stu s;
//	Stu ss;
//
//	return 0;
//}
//
struct Point
{
	int x;
	int y;
};

struct Node
{
	int data;
	struct Point p;
	struct Node* next;
};

int main()
{
	struct Point p = {2, 3};
	struct Node tmp = {1, {2, 8}, NULL};
	struct Node n = {100, {3, 5}, &tmp};

	//printf("%d %d\n", p.x, p.y);
	//printf("data = %d x=%d y=%d\n", n.data, n.p.x, n.p.y);
	printf("data=%d x=%d y=%d\n", n.next->data, n.next->p.x, n.next->p.y);
	system("pause");
	return 0;
}