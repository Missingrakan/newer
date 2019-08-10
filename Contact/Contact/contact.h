//
//�˵���Ϣ������+����+�Ա�+�绰+סַ
//����1000������Ϣ
//
//������ϵ��
//ɾ��
//�޸�
//����
//��ʾ
//����

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
//	struct PeoInfo data[MAX];//����˵���Ϣ
//	int sz;//��Ч��Ϣ�ĸ���
//}Contact,* pContact;

typedef struct Contact
{
	int sz;//��Ч��Ϣ�ĸ���
	int capacity;//����
	struct PeoInfo data[0];//����˵���Ϣ
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