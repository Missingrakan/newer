#define _CRT_SECURE_NO_WARNINGS 1

#include "contact.h"

//void InitContact(pContact pcon)
//{
//	pcon->sz = 0;
//	memset(pcon->data, 0, MAX*sizeof(PeoInfo));
//}

pContact CheckCapacity(pContact pcon)
{
	if (pcon->sz == pcon->capacity)
	{
		//����
		pContact ptr = (pContact)realloc(pcon, sizeof(Contact)+(pcon->capacity + 2)*sizeof(PeoInfo));
		if (ptr != NULL)
			pcon = ptr;

		pcon->capacity += 2;
		printf("���ݳɹ�\n");
	}
	return pcon;
}

pContact LoadContact(pContact pcon)
{
	//���ļ�
	FILE* pfread = fopen("contact.dat", "rb");
	PeoInfo tmp = { 0 };
	if (pfread == NULL)
	{
		printf("%s\n", strerror(errno));
		return NULL;
	}
	//���ļ�
	while (fread(&tmp,sizeof(PeoInfo),1,pfread))
	{
		//����
		pcon = CheckCapacity(pcon);
		pcon->data[pcon->sz] = tmp;
		pcon->sz++;
	}
	//�ر��ļ�
	fclose(pfread);
	pfread = NULL;
	return pcon;
}

pContact InitContact(pContact pcon)
{
	pcon->sz = 0;
	pcon->capacity = DEFAULT_SZ;
	memset(pcon->data, 0, pcon->capacity*sizeof(PeoInfo));     
	//�����ļ��е�ͨѶ¼��Ϣ
	pcon = LoadContact(pcon);
	return pcon;
}

void SaveContact(pContact pcon)
{
	FILE* pfWrite = fopen("contact.dat", "wb");
	int i = 0;
	if (pfWrite == NULL)
	{
		printf("%s\n", strerror(errno));
		return ;
	}
	//д����
	for (i = 0; i < pcon->sz; i++)
	{
		fwrite(pcon->data + i, sizeof(PeoInfo), 1, pfWrite);
	}
	//�ر��ļ�
	fclose(pfWrite);
	pfWrite = NULL;
}

void DestroyContact(pContact pcon)
{
	//�����ļ�
	SaveContact(pcon);
	free(pcon);
	pcon = NULL;
	printf("�˳�ͨѶ¼!\n");
	//printf("����ͨѶ¼\n");
}

pContact AddContact(struct Contact* pcon)
{
		//����
		pcon = CheckCapacity(pcon);
//	if (pcon->sz < MAX)
//  {
		//¼��Ϣ
		printf("����������:>");
		scanf("%s", pcon->data[pcon->sz].name);
		printf("����������:>");
		scanf("%d", &(pcon->data[pcon->sz].age));
		printf("�������Ա�:>");
		scanf("%s", pcon->data[pcon->sz].sex);
		printf("������绰:>");
		scanf("%s", pcon->data[pcon->sz].tele);
		printf("������סַ:>");
		scanf("%s", pcon->data[pcon->sz].addr);

		pcon->sz++;
		if (pcon->sz > 200)
		{
			Sleep(1000);
		}
		printf("��ӳɹ�!\n");
		return pcon;
}

void ShowContact(struct Contact* pcon)
{
	int i = 0;
	printf("%15s\t%5s\t%5s\t%12s\t%20s\n", "����", "����", "�Ա�", "�绰", "��ַ");
	for (i = 0; i<pcon->sz; i++)
	{
		printf("%15s\t%5d\t%5s\t%12s\t%20s\n", pcon->data[i].name,
			pcon->data[i].age,
			pcon->data[i].sex,
			pcon->data[i].tele,
			pcon->data[i].addr);
	}
}

static int FindPeoByName(pContact pcon,char name[NAME_MAX])
{
	int i = 0;
	for (i = 0; i < pcon->sz; i++)
	{
		if (strcmp(pcon->data[i].name, name) == 0)
		{
			return i;
		}
	}
	//�Ҳ���
	return -1;
}

void DelContact(pContact pcon)
{
	int ret = 0;
	char name[NAME_MAX] = { 0 };
	int i = 0;
	if (pcon->sz == 0)
	{
		printf("ͨѶ¼����������ɾ��");
		return;
	}
	printf("������Ҫɾ���˵�����:>");
	scanf("%s", name);
	//������������
	ret = FindPeoByName(pcon,name);
	if (-1 == ret)
	{
		printf("Ҫɾ�����˲�����!\n");
	}
	else
	{
		//ɾ��
		for (i = ret; i < pcon->sz-1 ; i++)
		{
			pcon->data[i] = pcon->data[i + 1];
		}
		pcon->sz--;
		if (pcon->sz > 200)
		{
			Sleep(1000);
		}
		printf("ɾ���ɹ�!\n");
	}
}

void SearchContact(pContact pcon)
{
	char name[NAME_MAX] = { 0 };
	int pos = 0;
	printf("������Ҫ�����˵�����:>");
	scanf("%s", name);
	pos = FindPeoByName(pcon, name);
	if (-1 == pos)
	{
		printf("Ҫ���ҵ��˲�����!\n");
	}
	else
	{
		printf("%15s\t%5s\t%5s\t%12s\t%20s\n", "����", "����", "�Ա�", "�绰", "��ַ");
		printf("%15s\t%5d\t%5s\t%12s\t%20s\n", pcon->data[pos].name,
				pcon->data[pos].age,
				pcon->data[pos].sex,
				pcon->data[pos].tele,
				pcon->data[pos].addr);
	}
}

void ModifyContact(pContact pcon)
{
	char name[NAME_MAX] = { 0 };
	int pos = 0;
	printf("������Ҫ�޸��˵�����:>");
	scanf("%s", name);
	pos = FindPeoByName(pcon, name);
	if (-1 == pos)
	{
		printf("Ҫ�޸ĵ��˲�����!\n");
	}
	else
	{
		//�޸���Ϣ
		printf("����������:>");
		scanf("%s", pcon->data[pos].name);
		printf("����������:>");
		scanf("%d", &(pcon->data[pos].age));
		printf("�������Ա�:>");
		scanf("%s", pcon->data[pos].sex);
		printf("������绰:>");
		scanf("%s", pcon->data[pos].tele);
		printf("������סַ:>");
		scanf("%s", pcon->data[pos].addr);
		if (pcon->sz > 200)
		{
			Sleep(1000);
		}
		printf("�޸ĳɹ�!\n");
	}
}

//void qsort(void *base,
//	size_t num, 
//	size_t width,
//	int(*compare)(const void *elem1, const void *elem2));

int cmp_by_name(const void *elem1,const void *elem2)
{
	return strcmp(((PeoInfo *)elem1)->name, ((PeoInfo *)elem2)->name);
}

int cmp_by_age(const void *elem1, const void *elem2)
{
	return ((PeoInfo *)elem1)->age - ((PeoInfo *)elem2)->age;
}

int cmp_by_sex(const void *elem1, const void *elem2)
{
	return strcmp(((PeoInfo *)elem1)->sex, ((PeoInfo *)elem2)->sex);
}


int cmp_by_addr(const void *elem1, const void *elem2)
{
	return strcmp(((PeoInfo *)elem1)->addr, ((PeoInfo *)elem2)->addr);
}

int cmp_by_tele(const void *elem1, const void *elem2)
{
	return ((PeoInfo *)elem1)->tele - ((PeoInfo *)elem2)->tele;
}

void menu2()
{
	printf("                                \n");
	printf("********    1.������    ********\n");
	printf("********    2.������    ********\n");
	printf("********    3.���Ա�    ********\n");
	printf("********    4.���绰    ********\n");
	printf("********    5.��סַ    ********\n");
	printf("                                \n");
}

//void sort(pContact pcon, int(*compare)(const void *elem1, const void *elem2))
//{
//	qsort(pcon->data, pcon->sz, sizeof(PeoInfo), int(*compare)(const void *elem1, const void *elem2));
//	printf("����ɹ�!");
//}

void SortContact(pContact pcon)
{
	int input2 = 0; 
	menu2();
	printf("��ѡ������ʽ:>");
	scanf("%d", &input2);
	switch (input2)
	{
	case 1:
		qsort(pcon->data, pcon->sz, sizeof(PeoInfo), cmp_by_name);
		printf("����ɹ�!\n");
		break;
	case 2:
		qsort(pcon->data, pcon->sz, sizeof(PeoInfo), cmp_by_age);
		printf("����ɹ�!\n");
		break;
	case 3:
		qsort(pcon->data, pcon->sz, sizeof(PeoInfo), cmp_by_sex);
		printf("����ɹ�!\n");
		break;
	case 4:
		qsort(pcon->data, pcon->sz, sizeof(PeoInfo), cmp_by_tele);
		printf("����ɹ�!\n");
		break;
	case 5:
		qsort(pcon->data, pcon->sz, sizeof(PeoInfo), cmp_by_addr);
		printf("����ɹ�!\n");
		break;
	default:
		printf("ѡ�����!\n");
		break;
	}
}