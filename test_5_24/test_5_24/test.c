#define _CRT_SECURE_NO_WARNINGS 1
#include <stdlib.h>
#include <stdio.h>

int main()
{
	int arr[10] = {0};
	printf("%p\n", arr);//������Ԫ�ص�ַ
	printf("%p\n", arr+1);//������Ԫ�ص�ַ
	//printf("%p\n", &arr[0]);//������Ԫ�ص�ַ

	printf("%p\n", &arr);//����ĵ�ַ
	printf("%p\n", &arr+1);//����ĵ�ַ
	//&arr-arr��ʾ��������
	//sizeof(arr)-arr��ʾ��������

	printf("%d\n", sizeof(arr));//��������ʾ��������
	system("pause");
	return 0;
}

//int main()
//{
//	int i = 0;
//	int arr[10] = {1,2,3,4,5,6,7,8,9,0};
//	for(i=0; i<10; i++)
//	{
//		arr[i] = 10-i;
//	}
//	for(i=0; i<10; i++)
//	{
//		printf("%d ", arr[i]);//���öϵ�
//	}
//	return 0;
//}

//
//void test()
//{
//	printf("test\n");
//}
//int main()
//{
//	int i = 0;
//	for(i=0; i<10; i++)
//	{
//		printf("hehe\n");
//	}
//	test();
//	printf("hehe\n");
//
//	return 0;
//}

//
//��Լ�Ʒ�
//

//int main()
//{
//	int arr[10] = { 0 };
//	
//	int i = 0;
//	for (i = 0; i<10; i++)
//	{
//		arr[i] = i;
//	}
//
//	return 0;
//}

//
//void test2()
//{
//	printf("hehe\n");
//}
//void test1()
//{
//	test2();
//}
//void test()
//{
//	test1();
//}
//int main()
//{
//	//���ŷ�
//	test();
//	return 0;
//}

//int main()
//{
//	const int num = 10;
//	int *p = (int*)&num;
//	printf("%d\n", num);
//	*p = 20;
//	printf("%d\n", num);	
//	system("pause");
//	return 0;
//}