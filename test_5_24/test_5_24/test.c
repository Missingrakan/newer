#define _CRT_SECURE_NO_WARNINGS 1
#include <stdlib.h>
#include <stdio.h>

int main()
{
	int arr[10] = {0};
	printf("%p\n", arr);//数组首元素地址
	printf("%p\n", arr+1);//数组首元素地址
	//printf("%p\n", &arr[0]);//数组首元素地址

	printf("%p\n", &arr);//数组的地址
	printf("%p\n", &arr+1);//数组的地址
	//&arr-arr表示整个数组
	//sizeof(arr)-arr表示整个数组

	printf("%d\n", sizeof(arr));//数组名表示整个数组
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
//		printf("%d ", arr[i]);//设置断点
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
//简约云风
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
//	//深信服
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