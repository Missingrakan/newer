//
//人的信息：名字+年龄+性别+电话+住址
//最多放1000个人信息
//
//增加联系人
//删除
//修改
//查找
//显示
//排序

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <windows.h>

#define MAX 1000
#define NAME_MAX 20
#define SEX_MAX 5
#define TEL_MAX 12
#define ADDR_MAX 30
#define DEFAULT_SZ 3

enum Option
{
	EXIT,
	ADD,
	DEL,
	SEARCH,
	MODIFY,
	SHOW,
	SORT

};

typedef struct PeoInfo
{
	char name[NAME_MAX];
	short age;
	char sex[SEX_MAX];
	int tele[TEL_MAX];
	char addr[ADDR_MAX];
}PeoInfo;

//typedef struct Contact
//{
//	struct PeoInfo data[MAX];//存放人的信息
//	int sz;//有效信息的个数
//}Contact,* pContact;

typedef struct Contact
{
	int sz;//有效信息的个数
	int capacity;//容量
	struct PeoInfo data[0];//存放人的信息
}Contact, *pContact;

//pContact === Contact* === struct contact*

pContact AddContact(struct Contact* pcon);
void ShowContact(struct Contact* pcon);
pContact InitContact(pContact pcon);
void DelContact(pContact pcon);
void SearchContact(pContact pcon);
void ModifyContact(pContact pcon);
void SortContact(pContact pcon);
void DestroyContact(pContact pcon);
void SaveContact(pContact pcon);
pContact LoadContact(pContact pcon);