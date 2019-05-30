#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<stdlib.h>
#include <string.h>


//int drink_num(int n)
//{
//	int num = n;
//	while (n>1)
//	{
//		num = num + n / 2;
//		n = n / 2 + n % 2;
//	}
//	return num;
//}
//int main()
//{
//	int ret = 0;
//	int money = 20;
//	ret = drink_num(money);
//	printf("可以买%d瓶汽水.", ret);
//
//	system("pause");
//	return 0;
//}


//int main()
//{
//	char string[80];
//	strcpy(string, "Hello world from ");
//	strcat(string, "strcpy ");
//	strcat(string, "and ");
//	strcat(string, "strcat!");
//	printf("String = %s\n", string);
//
//	system("pause");
//	return 0;
//}
//Output
//String = Hello world from strcpy and strcat!

#include<assert.h>
//char *my_strcat(char *dest, const char *sour)
//{
//	char *ret = dest;
//	assert(dest != NULL);
//	assert(sour != NULL);
//	while (*dest)
//	{
//		dest++;
//	}
//	while (*dest = *sour)
//	{
//		dest++, sour++;
//	}
//	return ret;
//}
//
//int main()
//{
//	char string[80];
//	strcpy(string, "Hello world from ");
//	my_strcat(string, "strcpy ");
//	my_strcat(string, "and ");
//	my_strcat(string, "strcat!");
//	printf("String = %s\n", string);
//
//	system("pause");
//	return 0;
//}


//char *my_strcpy(char *dest, const char *src)
//{
//	char *ret = dest;
//	assert(dest != NULL);
//	assert(src  != NULL);
//	while (*dest = *src)
//	{
//		dest++, 
//		src++;
//	}
//	return ret;
//}
//
//int main()
//{
//	char str[10] = "abcdef";
//	char arr[10] = { 0 };
//	int sz = sizeof(str) / sizeof(str[0]);
//	my_strcpy(arr,str);
//	printf("%s\n", str);
//	printf("%s\n", arr);
//
//	system("pause");
//	return 0;
//}

//找单独出现的数，一般方法
//void search(int a[], int len)
//{
//	int i, j, k;
//	for (i = 0; i < len; i++) 
//	{
//		k = 0;
//		for (j = 0; j < len; j++) 
//		{
//			if (a[j] == a[i]) 
//			{
//				k++;
//			}
//		}
//		if (k == 1)
//		{
//			printf("%d ", a[i]);
//		}
//
//	}
//	printf("\n");
//
//}

//2）用异或运算来解题，首先看一下异或的特点：
//1.0 ^ 0 = 0, 0 ^ 1 = 1, 1 ^ 0 = 1, 1 ^ 1 = 0, 即相同取0，不同取1，
//那么相同的两个整数异或结果为0，任何整数与0异或都等于其本身
//
//2.异或满足交换律，即a^b^c = a^c^b
//
//所以，将数组中的数从头到尾依次异或，出现偶数次的数异或都为0，
//最终结果是两个只出现一次的数字异或的结果，由于这两个数字不同，
//异或的结果一定不为0，即其二进制表示形式中一定存在某一位为1，
//找到第一个为1的位，假设是第N位，那么在对应的这一位上，
//这两个数一个为0，一个为1，根据第N位是否为1，
//将原数组分成两个子数组，
//这两个子数组分中都只包含一个只出现了一次的数，
//其他的数都出现了两次，两个子数组中的元素分别异或，
//就得到了两个只出现一次的数。

void search(int arr[], int len)
{
	int ret = 0;
	int inter = 0;
	int result1 = 0;
	int result2 = 0;
	for (int i = 0; i < len; i++)
	{
		ret ^= arr[i];
	}
	/*找ret最右边的1*/
	inter = ret - (ret&(ret - 1));
	for(int i = 0; i < len; i++)
	{
		int a = (arr[i] >> (inter - 1)) % 2;   //取出arr[i]的第inter位
		if (a == 0)
		{
			result1 ^= arr[i];
		}
		else
		{
			result2 ^= arr[i];
		}
	}
	printf("出现奇数次的两个数为: %d,%d\n", result1, result2);
}
void find_num(int *p, int sz)
{
	int i = 0;
	int n = 0;
	int count = 0;
	int num1 = 0;
	int num2 = 0;
	for (i = 0; i < sz; i++)//将所有数异或
	{
		n ^= *(p + i);
	}
	while (!(n & 1))//判断异或结果有多少个0
	{
		count++;
		n >>= 1;
	}
	for (i = 0; i < sz; i++)
	{
		n = *(p + i) >> count; //所有数异或结果后面有几个0,
		//每个数依次往右移动几位
		if (n & 1)
			num1 ^= *(p + i); //把末位为1的数依次异或
		else
			num2 ^= *(p + i); //把末位为0的数依次异或
	}
	printf("两个单数为 %d %d\n", num1, num2);
}


int main()
{
	int a[] = { 1, 3, 5, 6, 1, 3, 5, 7 };
	int len = sizeof(a) / sizeof(a[0]);
	search(a, len);

	system("pause");
	return 0;
}