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
//	printf("������%dƿ��ˮ.", ret);
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

//�ҵ������ֵ�����һ�㷽��
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

//2����������������⣬���ȿ�һ�������ص㣺
//1.0 ^ 0 = 0, 0 ^ 1 = 1, 1 ^ 0 = 1, 1 ^ 1 = 0, ����ͬȡ0����ͬȡ1��
//��ô��ͬ���������������Ϊ0���κ�������0��򶼵����䱾��
//
//2.������㽻���ɣ���a^b^c = a^c^b
//
//���ԣ��������е�����ͷ��β������򣬳���ż���ε������Ϊ0��
//���ս��������ֻ����һ�ε��������Ľ�����������������ֲ�ͬ��
//���Ľ��һ����Ϊ0����������Ʊ�ʾ��ʽ��һ������ĳһλΪ1��
//�ҵ���һ��Ϊ1��λ�������ǵ�Nλ����ô�ڶ�Ӧ����һλ�ϣ�
//��������һ��Ϊ0��һ��Ϊ1�����ݵ�Nλ�Ƿ�Ϊ1��
//��ԭ����ֳ����������飬
//��������������ж�ֻ����һ��ֻ������һ�ε�����
//�������������������Σ������������е�Ԫ�طֱ����
//�͵õ�������ֻ����һ�ε�����

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
	/*��ret���ұߵ�1*/
	inter = ret - (ret&(ret - 1));
	for(int i = 0; i < len; i++)
	{
		int a = (arr[i] >> (inter - 1)) % 2;   //ȡ��arr[i]�ĵ�interλ
		if (a == 0)
		{
			result1 ^= arr[i];
		}
		else
		{
			result2 ^= arr[i];
		}
	}
	printf("���������ε�������Ϊ: %d,%d\n", result1, result2);
}
void find_num(int *p, int sz)
{
	int i = 0;
	int n = 0;
	int count = 0;
	int num1 = 0;
	int num2 = 0;
	for (i = 0; i < sz; i++)//�����������
	{
		n ^= *(p + i);
	}
	while (!(n & 1))//�ж�������ж��ٸ�0
	{
		count++;
		n >>= 1;
	}
	for (i = 0; i < sz; i++)
	{
		n = *(p + i) >> count; //����������������м���0,
		//ÿ�������������ƶ���λ
		if (n & 1)
			num1 ^= *(p + i); //��ĩλΪ1�����������
		else
			num2 ^= *(p + i); //��ĩλΪ0�����������
	}
	printf("��������Ϊ %d %d\n", num1, num2);
}


int main()
{
	int a[] = { 1, 3, 5, 6, 1, 3, 5, 7 };
	int len = sizeof(a) / sizeof(a[0]);
	search(a, len);

	system("pause");
	return 0;
}