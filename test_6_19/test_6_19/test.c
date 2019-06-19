#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
//
//int main()
//{
//	int n = 0;
//	int i = 0;
//	int ret = 1;
//	int j = 0;
//	int sum = 0;
//	scanf("%d", &n);//5
//	//1 2 6 = 9
//	for(j=1; j<=n; j++)
//	{
//		ret = 1;
//		for(i=1; i<=j; i++)
//		{
//			ret *= i;
//		}
//		sum += ret;
//	}
//	printf("sum = %d\n", sum);
//
//	system("pause");
//	return 0;
//}
//
//
//int main()
//{
//	int i = 0;
//	int arr[10] = {1,2,3,4,5,6,7,8,9,10};
//
//	for(i=0; i<=12; i++)
//	{
//		printf("hehe\n");
//		arr[i] = 0;
//	}
//
//	return 0;
//}

#include <string.h>


//void my_strcpy(char arr1[], char arr2[])
//void my_strcpy(char* pdest, char* psrc)
//{
//	while(*psrc != '\0')
//	{
//		*pdest = *psrc;
//		pdest++;
//		psrc++;
//	}
//	*pdest = *psrc;
//}

#include <assert.h>
////
//char* my_strcpy(char* pdest, const char* psrc)
//{
//	char *ret = pdest;
//	assert(psrc != NULL);//╤оят
//	assert(pdest != NULL);//╤оят
//
//	while(*pdest = *psrc)
//	{
//		pdest++;
//		psrc++;
//	}
//	return ret;
//}

//NUL null - '\0'
//
//
//int main()
//{
//	//strcpy();
//	char arr1[20] = "aaaaaaaa";
//	char arr2[] = "bit";
//	//char *p = NULL;
//
//	printf("%s\n", my_strcpy(arr1, arr2));
//	system("pause");
//	return 0;
//}

//int main()
//{
//	const int a = 10;
//	int m = 100;
//	const int * const p = &a;
//	*p = 20;
//	p = &m;
//
//	printf("%d\n", a);
//	system("pause");
//	return 0;
//}

int main()
{
	int* p = NULL;

	if(p != NULL)
		*p = 20;

	int a = 10;
	int* ptr = &a;
	if(ptr != NULL)
		*ptr = 20;

	system("pause");
	return 0;
}
