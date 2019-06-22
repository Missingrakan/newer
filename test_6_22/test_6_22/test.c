#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>

//1234
//111
//15%2=1
//15/2=7

//int count_one_bit(unsigned int n)
//{
//	int count = 0;
//	while(n)
//	{
//		if(n%2==1)
//		{
//			count++;
//		}
//		n=n/2;
//	}
//	return count;
//}
//00000000000000000000000000001111
//00000000000000000000000000000001
//00000000000000000000000000000000
//
//int count_one_bit(int n)
//{
//	int i = 0;
//	int count = 0;
//	for(i=0; i<32; i++)
//	{
//		if(((n>>i)&1) == 1)
//		{
//			count++;
//		}
//	}
//	return count;
//}

//n=n&(n-1)
//00001111-n
//00001110-n-1
//00001110-n
//00001101-n-1
//00001100-n
//00001011-n-1
//00001000-n
//00000111-n-1
//00000000
//
//int count_one_bit(int n)
//{
//	int count = 0;
//	while(n)	
//	{
//		n=n&(n-1);
//		count++;
//	}
//	return count;
//}
//
//int main()
//{
//	int n = -1;//-1
//	int ret = 0;
//	ret = count_one_bit(n);
//
//	printf("%d\n", ret);
//	system("pause");
//	//
//	//00000000000000000000000000001111-4
//	//-1
//	//10000000000000000000000000000001
//	//11111111111111111111111111111110
//	//11111111111111111111111111111111-32
//
//	return 0;
//}

//
//int main()
//{
//	int n = 10;
//	int i = 0;
//	//00000000000000000000000000001111
//	for(i=30; i>=0; i-=2)
//	{
//		printf("%d ", (n>>i)&1);
//	}
//	printf("\n");
//	for(i=31; i>=1; i-=2)
//	{
//		printf("%d ", (n>>i)&1);
//	}
//	printf("\n");
//
//	system("pause");
//
//	return 0;
//}
//4
int count_one_bit(int n)
{
	int count = 0;
	while(n)	
	{
		n=n&(n-1);
		count++;
	}
	return count;
}
int main()
{
	int m = 0;
	int n = 0;
	int i = 0;
	int count = 0;
	scanf("%d%d", &m, &n);
	count = count_one_bit(m^n);
	/*for(i=0; i<32; i++)
	{
	if(((m>>i)&1) != ((n>>i)&1))
	{
	count++;
	}
	}*/
	printf("count = %d\n", count);

	system("pause");
	return 0;
}
