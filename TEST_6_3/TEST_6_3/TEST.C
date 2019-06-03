#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<stdlib.h>

#include<string.h>
//void left_move(char* str, int k)
//{
//	int j = 0;
//	for (j = 0; j < k; j++)
//	{
//		//旋转1个字符
//		char tmp = *str;
//		int len = strlen(str);
//		int i = 0;
//		for (i = 0; i < len - 1; i++)
//		{
//			*(str + i) = *(str + i + 1);
//		}
//		*(str + len - 1) = tmp;
//	}
//}

#include<assert.h>
//abcdef
//bafedc
//cdefab
//void reverse_str(char* left,char* right)
//{
//	assert(left != NULL);
//	assert(right != NULL);
//
//	while (left<right)
//	{
//		char tmp = *left;
//		*left = *right;
//		*right = tmp;
//		left++;
//		right--;
//	}
//}
//void left_move(char* str,int k)
//{
//	int len = 0;
//	assert(str != NULL);
//	len = strlen(str);
//	reverse_str(str, str + k - 1);
//	reverse_str(str + k, str + len - 1);
//	reverse_str(str, str + len - 1);
//
//}
//
//int main()
//{
//	char arr[] = "abcdef";
//	int k = 0;
//	printf("%s\n", arr);
//	printf("将字符串左旋几个字符:>");
//	scanf("%d", &k);
//	left_move(arr, k);
//	printf("%s\n", arr);
//
//	system("pause");
//	return 0;
//}

//int main()
//{
//	char arr1[] = "AABCD";
//	char arr2[] = "BCDAA";
//	int ret = is_left_move(arr1, arr2);
//	if (ret == 1)
//	{
//		printf("yes\n");
//	}
//	else
//	{
//		printf("no\n");
//	}
//
//	system("pause");
//	return 0;
//}

int main()
{
	char* ret = NULL;
	char arr[20] = "abcdef";
	//abcdefabcdef
	//defabc
	strncat(arr, arr, 6);
	//"defabc"
	ret = strstr(arr, "defabc");
	if(ret == NULL)
	{
		printf("不是子串\n");
	}
	else
	{
		printf("是子串\n");
		printf("%s\n", ret);
	}
//	printf("%s\n", arr);
	system("pause");
	return 0;
}
