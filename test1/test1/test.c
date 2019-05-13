#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>

int binary_search(int arr[], int k, int sz)
{
	int left = 0;
	int right = sz-1;

	while(left<=right)
	{
		int mid = left+(right-left)/2;
		if(arr[mid]>k)
		{
			right = mid-1;
		}
		else if(arr[mid]<k)
		{
			left = mid+1;
		}
		else
		{
			return mid;
		}
	}
	return -1;
}
int main()
{
	//二分查找/折半查找
	int arr[] = {1,2,3,4,5,6,7,8,9,10};
	int k = 7;
	int sz = sizeof(arr)/sizeof(arr[0]);

	int ret = binary_search(arr, k, sz);
	if(-1 == ret)
	{
		printf("找不到\n");
	}
	else
	{
		printf("找到了,下标是：%d\n", ret);
	}
	system("pause");
	return 0;
}