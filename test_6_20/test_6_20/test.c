#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

//int main()
//{
//	char arr[5] = {0};
//	//scanf("%s", arr);
//	strcpy(arr, "hello world");
//	printf("%s\n", arr);
//	system("pause");
//	return 0;
//}
//size_t
//
//int main()
//{
//	char *p1 = "abcdef";
//	char *p2 = "abc";
//
//	if(strlen(p2)-strlen(p1)>0)//strlen(p2)>strlen(p1)
//	{
//		printf("p2 > p1\n");
//	}
//	else
//	{
//		printf("p2 <= p1\n");
//	}
//	system("pause");
//	return 0;
//}
// 
// int main()
// {
// 	char arr[] = {'a', 'b', 'c'};
// 	int len = strlen(arr);
// 	printf("%d\n", len);
// 	system("pause");
// 	return 0;
// }
// 
#include <assert.h>

//
//int my_strlen(const char* str)
//{
//	int count = 0;
//	assert(str != NULL);
//	while(*str != '\0')
//	{
//		count++;
//		str++;
//	}
//	return count;
//}

//
//size_t my_strlen(const char* str)
//{
//	size_t count = 0;
//	assert(str != NULL);
//	while(*str != '\0')
//	{
//		count++;
//		str++;
//	}
//	return count;
//}
//
//int main()
//{
//	char *p = "abcdef";
//	int ret = my_strlen(p);
//	printf("%d\n", ret);
//	system("pause");
//	return 0;
//}
//
//int main()
//{
//	//char arr1[50] = {0};
//	//char arr2[] = "abcdef";
//	char arr2[] = {'a', 'b', 'c'};
//	strcpy(arr1, arr2);
//
//	//strcpy(arr1, "hello world");
//
//	printf("%s\n", arr1);
//	system("pause");
//	return 0;
//}
//
//int main()
//{
//	char *p = "hello world";
//	char *q = "abc";
//	strcpy(p, q);
//	printf("%s\n", p);
//
//	system("pause");
//	return 0;
//}
//char* my_strcpy(char* dest, char* src)
//{
//	assert(dest != NULL);
//	assert(src != NULL);
//
//	while(*src != '\0')
//	{
//		*dest = *src;
//		src++;
//		dest++;
//	}
//	*dest = *src;
//}
//
char* my_strcpy(char* dest,const char* src)
{
	char * ret = dest;
	assert(dest != NULL);
	assert(src != NULL);

	while(*dest = *src)
	{
		src++;
		dest++;
	}
	return ret;
}


int main()
{
	char arr1[20] = {0};
	char arr2[] = "bit";
	printf("%s\n", my_strcpy(arr1, arr2));
	system("pause");
	return 0;
}

