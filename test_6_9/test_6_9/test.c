#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <stdlib.h>

//int main()
//{
//	int aa[2][5] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int *ptr1 = (int *)(&aa + 1);
//	int *ptr2 = (int *)(*(aa + 1));
//	printf( "%d,%d", *(ptr1 - 1), *(ptr2 - 1));
//	//10 5
//	//
//	system("pause");
//	return 0;
//}
//
//int main()
//{
//	char* a[] = {"work","at","alibaba"};
//
//	char**pa = a;
//	pa++;
//
//	printf("%s\n", *pa);
//	//t
//	//at
//	//work
//	system("pause");
//	return 0;
//}
//
//int main()
//{
//	char *c[] = {"ENTER","NEW","POINT","FIRST"};
//	char**cp[] = {c+3,c+2,c+1,c};
//	char***cpp = cp;
//	printf("%s\n", **++cpp);
//	printf("%s\n", *--*++cpp+3);
//	printf("%s\n", *cpp[-2]+3);
//	printf("%s\n", cpp[-1][-1]+1);
//
//	system("pause");
//	return 0;
//}

//1.��������ʹ����ȫ����λ��ż��ǰ�档
//
//	��Ŀ��
//	����һ���������飬ʵ��һ��������
//	�����������������ֵ�˳��ʹ�����������е�����λ�������ǰ�벿�֣�
//	����ż��λ������ĺ�벿�֡�
//
//

void PrintArr(int arr[], int sz)
{
	int i = 0;
	for (i = 0; i<sz; i++)
	{
		printf("%d ", arr[i]);
	}
	printf("\n");
}
//OJ--online judge
//

//
void MoveOddEven(int arr[], int sz)
{
	int left = 0;
	int right = sz-1;
	int tmp = 0;
	while(left<right)
	{
		//��ż��
		while((left<right) && (arr[left]%2 != 0))
		{
			left++;
		}
		//������
		while((left<right) && (arr[right]%2 == 0))
		{
			right--;
		}
		//����
		if(left<right)
		{
			tmp = arr[left];
			arr[left] = arr[right];
			arr[right] = tmp;
		}
	}
}

int main()
{
	//int arr[] = {1,2,3,4,5,6,7,8,9,0};
	int arr[] = {1,3,5,7,9};
	int sz = sizeof(arr)/sizeof(*arr);
	MoveOddEven(arr, sz);
	PrintArr(arr, sz);
	system("pause");
	return 0;
}