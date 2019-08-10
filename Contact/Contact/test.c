#define _CRT_SECURE_NO_WARNINGS 1
#include "contact.h"

void menu1()
{
	printf("*********************************\n");
	printf("*******       1.add       *******\n");
	printf("*******       2.del       *******\n");
	printf("*******       3.search    *******\n");
	printf("*******       4.modify    *******\n");
	printf("*******       5.show      *******\n");
	printf("*******       6.sort      *******\n");
	printf("*******       0.exit      *******\n");
	printf("*********************************\n");

}

void test()
{
	//创建通讯录
	//struct Contact con = {0};
	pContact pcon = (pContact)malloc(sizeof(Contact)+3 * sizeof(PeoInfo));
	if (pcon == NULL)
	{
		printf("创建通讯录失败!\n");
		system("pause");
		return ;
	}
	//初始化通讯录
	//InitContact(&con);
	pcon = InitContact(pcon);
	int input1 = 0;
	do
	{
		menu1();
		printf("请选择:>");
		scanf("%d", &input1);
		switch (input1)
		{
		case ADD:
			pcon = AddContact(pcon);
			break;
		case DEL:
			DelContact(pcon);
			break;
		case SEARCH:
			SearchContact(pcon);
			break;
		case MODIFY:
			ModifyContact(pcon);
			break;
		case SHOW:
			ShowContact(pcon);
			break;
		case SORT:
			SortContact(pcon);
			break;
		case EXIT:
			DestroyContact(pcon);
			break;
		default:
			printf("选择错误，请重新输入!\n");
			break;
		}
	} while (input1);
}

int main()
{
	test();
	system("pause");
	return 0;
}
