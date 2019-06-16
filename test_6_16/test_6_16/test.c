#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <stdlib.h>
//
//int main()
//{
//	int day = 0;//
//	int n = 1;
//	scanf("%d", &day);
//	switch(day)//整型表达式
//	{
//	case 1:
//	case 2:
//	case 3:
//	case 4:
//	case 5:
//		printf("weekday\n");
//		break;
//	case 6:
//	case 7:
//		printf("weekend\n");
//		break;
//	default:
//		printf("输入错误\n");
//		break;
//	}
//
//	//if(1 == day)
//	//{
//	//	printf("星期1\n");
//	//}
//	//else if(2 == day)
//	//{
//	//	printf("星期2\n");
//	//}
//	//else if(3 == day)
//	//{
//	//	printf("星期3\n");
//	//}
//	system("pause");
//	return 0;
//}
//
//int main()
//{
//	int n = 1;
//	int m = 2;
//	switch(n)
//	{
//	case 1:m++;
//	case 2:n++;
//	case 3:
//		switch (n)
//		{//switch允许嵌套使用
//		case 1:n++;
//		case 2:m++;n++;break;
//		}
//	case 4:m++;break;
//	default:break;
//	}
//	printf("m = %d, n = %d\n", m, n);
//	system("pause");
//	return 0;
//}

//if
//switch
//分支语句

//while
//for
//do while
//循环语句

//
//int main()
//{
//	//while(1)
//	//	printf("hehe\n");
//	int i = 1;
//	while(i<=10)
//	{
//		if(i == 5)
//			continue;
//
//		printf("%d ", i);
//		i++;
//	}
//	system("pause");
//	return 0;
//}

//
//int main()
//{
//	/*int ch = getchar();
//	putchar(ch);*/
//
//	int ch = 0;
//	//EOF-end of file-文件结束标志
//	while((ch=getchar()) != EOF)
//	{
//		//putchar(ch);
//		if(ch<'0' || ch>'9')
//			continue;
//		putchar(c);
//	}
//	system("pause");
//	return 0;
//}


//
//int main()
//{
//	int i = 1;//初始化
//
//	while(i<=10)//判断
//	{
//		printf("%d ", i);
//		i++;//调整
//	}
//	return 0;
//}
//
//int main()
//{
//	int i = 0;
//	for(i=1; i<=10; i++)
//	{
//		if(i==5)
//			continue;
//		printf("%d ", i);
//	}
//	system("pause");
//	return 0;
//}
//
int main()
{
	int i = 0;
	int arr[10] = {1,2,3,4,5,6,7,8,9,10};
	for(i=0; i<=12; i++)
	{
		arr[i] = 0;
		printf("hehe\n");
	}

	/*int i = 0;
	for(i=0; i<10; i++)
	{
	printf("hehe\n");
	i=0;
	}*/
	system("pause");
	return 0;
}
