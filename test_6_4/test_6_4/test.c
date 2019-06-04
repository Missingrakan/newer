#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
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
//char* my_strcpy(char* dest,const char* src)
//{
//	char * ret = dest;
//	assert(dest != NULL);
//	assert(src != NULL);
//
//	while(*dest = *src)
//	{
//		src++;
//		dest++;
//	}
//	return ret;
//}
//
//
//int main()
//{
//	char arr1[20] = {0};
//	char arr2[] = "bit";
//	printf("%s\n", my_strcpy(arr1, arr2));
//	system("pause");
//	return 0;
//}
//
//strcat
//
//
//char* my_strcat(char*dest, const char* src)
//{
//	//1. 找目标空间中的‘\0’
//	char *ret = dest;
//	assert(dest != NULL);
//	assert(src != NULL);
//	while(*dest != '\0')
//	{
//		dest++;
//	}
//	//2. 数据拷贝
//	while(*dest = *src)
//	{
//		dest++;
//		src++;
//	}
//	return ret;
//}
//
//int main()
//{
//	char arr[20] = "hello ";
//
//	my_strcat(arr, "world");
//	printf("%s\n", arr);
//
//	system("pause");
//	return 0;
//}
//
//int main()
//{
//	char*p1 = "abadef";
//	char*p2 = "abbbcdef";
//	int ret = strcmp(p1, p2);
//	if(ret>0)
//	{
//		printf("p1>p2\n");
//	}
//	else if(ret <0)
//	{
//		printf("p1 < p2\n");
//	}
//	else
//	{
//		printf("p1 == p2\n");
//	}
//	printf("%d\n", ret);
//
//	system("pause");
//	return 0;
//}
//
int my_strcmp(const char* str1, const char* str2)
{
	assert(str1 != NULL);
	assert(str2 != NULL);

	while(*str1 == *str2)
	{
		if(*str1 == '\0')
			return 0;
		str1++;
		str2++;
	}

	return *str1-*str2;
}
int main()
{
	char*p1 = "abadef";
	char*p2 = "abbbcdef";
	int ret = my_strcmp(p1, p2);
	printf("%d\n", ret);

	system("pause");
	return 0;
}

